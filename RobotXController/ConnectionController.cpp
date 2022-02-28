#include<winsock.h>  
#include<stdio.h>  
#include<iostream>  
#include<string>  
#include "ConnectionController.h"
#include "PuntoController.h"
#include <msclr/marshal.h>
#include <windows.h>

using namespace std;
using namespace RobotXController;
using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
#pragma comment(lib, "ws2_32.lib")

ConnectionController::ConnectionController(SOCKET slisten, SOCKET sClient) {
    this->sClient = sClient;
    this->slisten = slisten;
    this->listaPuntos = gcnew List<punto^>();
}
ConnectionController::ConnectionController() {
    this->listaPuntos = gcnew List<punto^>();
}
//ConnectionController::ConnectionController(SOCKET slisten, List<punto^>^ listaPuntos) {
//    this->slisten = slisten;
//    this->listaPuntos = listaPuntos;
//}
//ConnectionController::ConnectionController(char Datos) {
//	this->Datos = Datos;
//}

int RobotXController::ConnectionController::RecibirDatosConexion(PuntoController^ objGestorPunto)
{
    
    //RobotXController::PuntoController^ objGestorPunto = gcnew PuntoController();
    // Inicializar WSA    
    WORD sockVersion = MAKEWORD(2, 2);
    WSADATA wsaData;
    if (WSAStartup(sockVersion, &wsaData) != 0)
    {
        return 0;
    }

    // Crear socket    
    //SOCKET TCP
    //SOCKET slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //Socket UDP
    SOCKET slisten = socket(AF_INET, SOCK_DGRAM, 0);
    if (slisten == INVALID_SOCKET)
    {
        printf("socket error !");
        return 0;
    }

    // Enlace IP y puerto    
    sockaddr_in sin;
    sin.sin_family = AF_INET;
    sin.sin_port = htons(5656);
    sin.sin_addr.S_un.S_addr = INADDR_ANY;
    if (bind(slisten, (LPSOCKADDR)&sin, sizeof(sin)) == SOCKET_ERROR)
    {
        printf("bind error !");
    }

    //Empieza a escuchar    
    if (listen(slisten, 5) == SOCKET_ERROR)
    {
        printf("listen error !");
        return 0;
    }

    // Recibir datos en un bucle    
    SOCKET sClient;
    sockaddr_in remoteAddr;
    int nAddrlen = sizeof(remoteAddr);
    int ti = 5;
    int k = 1;
    //array<String^>^ revData;
    char revData[150000];
    char envData[150000];
    char buffer[150000];
    

    while (k==1)
    {
        //--ti;
        if (k == 1) {

            printf("Esperando para conectar ... \n");
            sClient = accept(slisten, (SOCKADDR*)&remoteAddr, &nAddrlen);
            if (sClient == INVALID_SOCKET)
            {
                printf("accept error !");
                continue;
            }
            printf("Established Connection:%s \r \n", inet_ntoa(remoteAddr.sin_addr));
        }


        //Recibir datos        
        int ret = recv(sClient, revData, 255, 0);
        if (ret > 0)
        {
            revData[ret] = 0x00;
            printf(revData);
            //cout << endl;
            //argv[argc] = revData;
            int j = 0;
            int cantidad = 0;
            int i = 0;
            while (j < 2) {
                if (revData[i] == '{') {
                    i++;
                    j++;
                }
                if (revData[i] == '}') {
                    j++;
                    i++;
                }
                buffer[cantidad] = revData[i];
                i++;
                cantidad++;
            }
            String^ lineas= gcnew String(buffer);
            objGestorPunto->LeerPuntosArray(lineas);
            //array<String ^>^ buff = revData;
            //File::WriteAllLines("Buffer.txt", buff);
            //File::WriteAllLines()
        }

        //enviar datos
        if (k == 1) {
            k--;
            const char* sendData = "¡Hola, cliente TCP! \n";
            send(sClient, sendData, strlen(sendData), 0);
        }
        else {
            //cout << "Server:";
            //cin >> envData;
            const char* sendData = envData;
            send(sClient, sendData, strlen(sendData), 0);
            //cout << endl;
            
            //closesocket(sClient);
        }
        //RobotXController::ConnectionController::RecibirDatosConexion(revData);
       
    }

    closesocket(slisten);
    WSACleanup();
    system("pause");
    return 0;

}
int RobotXController::ConnectionController::RealizarConexionSockets() {
   
    // Inicializar WSA    
    WORD sockVersion = MAKEWORD(2, 2);
    WSADATA wsaData;
    if (WSAStartup(sockVersion, &wsaData) != 0)
    {
        return 0;
    }

    // Crear socket    
    // Socket TCP
    //SOCKET slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    this->slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    //Socket UDP
    //this->slisten = socket(AF_INET, SOCK_DGRAM, 0);
    if (this->slisten == INVALID_SOCKET)
    {
        this->mensaje = "socket error !";
        return 0;
    }

    // Enlace IP y puerto    
    sockaddr_in sin;
    sin.sin_family = AF_INET;
    sin.sin_port = htons(5656);
    sin.sin_addr.S_un.S_addr = INADDR_ANY;
    if (bind(this->slisten, (LPSOCKADDR)&sin, sizeof(sin)) == SOCKET_ERROR) //TCP
    //if(bind(this->slisten, (struct sockaddr*)&sin, sizeof(sin)) == SOCKET_ERROR)//UDP
    {
        this->mensaje = "bind error !";
    }

    //Empieza a escuchar    
    if (listen(this->slisten, 5) == SOCKET_ERROR)
    {
        this->mensaje = "listen error !";
        return 0;
    }

    // Recibir datos en un bucle    
    sockaddr_in remoteAddr;
    int nAddrlen = sizeof(remoteAddr);
    int ti = 5;
    int k = 1;
   
    while (k == 1)
    {
        
        if (k == 1) {
            k--;
            this->mensaje = "Esperando para conectar ...";
            this->sClient = accept(slisten, (SOCKADDR*)&remoteAddr, &nAddrlen);
            if (this->sClient == INVALID_SOCKET)
            {
                this->mensaje = "accept error !";
                continue;
            }
            String^ lineas = gcnew String(inet_ntoa(remoteAddr.sin_addr));
            this->Conexion = "Connection Established: " + lineas;

            const char* sendData = "¡Hola, cliente TCP! \n";
            send(this->sClient, sendData, strlen(sendData), 0);
        }
    }
   
}
int RobotXController::ConnectionController::DesconectarSockets() {

    const char* sendData = "Adios, cliente TCP! \n";
    send(this->sClient, sendData, strlen(sendData), 0);

    closesocket(this->slisten);
    WSACleanup();
    //system("pause");
    this->sClient = 0;
    this->slisten = 0;
    return 0;
}
void RobotXController::ConnectionController::RecibirPuntos(PuntoController^ objGestorPunto, SOCKET sClient,int Error) {

    char revData[20000];
    char buffer[20000];
    char bufferFinal[20000];
    int bytes = 0;
    int bytesRecibidos = 0;
    int fin = 0;
    //Inicializar el buffer llenandolo del caracter *
    //Enviar el mensaje "puntos \n" para que el raspberry envie los puntos
    for (int i = 0; i < 20000; i++) {
        revData[i] = '*';
    }
    RobotXController::ConnectionController::EnviarDatos("puntos \n", sClient);
    
    for (int i = 0; i < 20000; i++) {
        buffer[i] = '*';
    }
    //Sleep(1500);
    int retBytes = recv(sClient, revData, 20000, 0);
    if (retBytes > 0) {
        revData[retBytes]= 0x00;
        char BytesEnviados[10];
        BytesEnviados[retBytes] = 0x00;
        for (int i = 0; i < retBytes; i++) {
            BytesEnviados[i] = revData[i];
        }
        try
        {
            String^ Bytes_String = gcnew String(BytesEnviados);
            bytes = Convert::ToInt32(Bytes_String);
            bytesRecibidos = bytes;
        }
        catch (...)
        {
            Error = 2;
        }
       
    }
    
    //Recibir Puntos
    //ret = bytes recibidos, revdata = el buffer donde se encuentran almacenados los datos, 20000 es
    //la cantidad maxima de bytes que se pueden recibir 
    for (int i = 0; i < 20000; i++) {
        bufferFinal[i] = '*';
    }
    /******************************************/
    //int ret = recv(sClient, revData, 16384, 0);
    int ret = recv(sClient, revData, 20000, 0);
    /******************************************/
    
    if (ret > 0) {
        revData[ret] = 0x00;
        if (ret != bytes) {
            int x = 0;
            while (bytes > 0) {
                for (int i = 0; i < ret;i++) {
                    buffer[x + i] = revData[i];
                }
                bytes = bytes - ret;
                x = x + ret;
                if (bytes>0) {
                    int ret = recv(sClient, revData, 20000, 0);
                   
                }
                
            }
            int cantidad = 0;
            int i = 0;
            while (fin < 2) {
                if (buffer[i] == '{') {
                    i++;
                    fin++;
                }
                if (buffer[i] == '}') {
                    break;
                    fin++;

                }
                if (i == bytesRecibidos) {
                    break;
                    fin++;

                }
                bufferFinal[cantidad] = buffer[i];
                i++;
                cantidad++;
            }
            bufferFinal[bytesRecibidos-2] = 0x00;
            String^ lineas = gcnew String(bufferFinal);
            Error =objGestorPunto->LeerPuntosArray(lineas);
           
        }
        else {
            revData[ret] = 0x00;
            buffer[ret-2] = 0x00;
            int j = 0;
            int cantidad = 0;
            int i = 0;
            while (j < 2) {
                if (revData[i] == '{') {
                    i++;
                    j++;
                }
                if (revData[i] == '}') {
                    break;
                    j++;

                }
                if (revData[i] == '*') {
                    break;
                    j++;

                }
                buffer[cantidad] = revData[i];
                i++;
                cantidad++;
            }
            String^ lineas = gcnew String(buffer);
            objGestorPunto->LeerPuntosArray(lineas);
        }
        
    }
    //////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////
    //if (ret > 0)
    //{
    //    revData[ret] = 0x00;
    //    printf(revData);
    //    //cout << endl;
    //    //argv[argc] = revData;
    //    int j = 0;
    //    int cantidad = 0;
    //    int i = 0;
    //    while (j < 2) {
    //        if (revData[i] == '{') {
    //            i++;
    //            j++;
    //        }
    //        if (revData[i] == '}') {
    //            break;
    //            j++;
    //            
    //        }
    //        if (revData[i] == '*') {
    //            break;
    //            j++;

    //        }
    //        buffer[cantidad] = revData[i];
    //        i++;
    //        cantidad++;
    //    }
    //    String^ lineas = gcnew String(buffer);
    //    objGestorPunto->LeerPuntosArray(lineas);
    //    //array<String ^>^ buff = revData;
    //    //File::WriteAllLines("Buffer.txt", buff);
    //    //File::WriteAllLines()
    //}
}
void RobotXController::ConnectionController::EnviarDatos(String^ mensajeEnviar, SOCKET sClient) {
    //enviar datos
    
    /*const char* sendData = "Hola, cliente TCP Se enviara un mensaje \n";
    send(sClient, sendData, strlen(sendData), 0);*/
    //Sleep(100);
    msclr::interop::marshal_context oMarshalContext;//declaracion previa al cambio string-const char*
    const char* Message = oMarshalContext.marshal_as<const char*>(mensajeEnviar);//cambio de string a const char*
    send(sClient, Message, strlen(Message), 0);
    Sleep(100);
}
void RobotXController::ConnectionController::EnviarTeamID(String^ mensajeEnviar, SOCKET sClient) {
    //enviar datos
    msclr::interop::marshal_context oMarshalContext;//declaracion previa al cambio string-const char*
    const char* Message = oMarshalContext.marshal_as<const char*>(mensajeEnviar);//cambio de string a const char*
    send(sClient, Message, strlen(Message), 0);
    Sleep(100);
}
void RobotXController::ConnectionController::RecibirImagen(SOCKET sClient) {
    char revData[150000];
    char buffer[150000];
    //Recibir datos        
    int ret = recv(sClient, revData, 255, 0);
    if (ret > 0)
    {
        revData[ret] = 0x00;
        //printf(revData);
        //cout << endl;
        //argv[argc] = revData;
        int j = 0;
        int cantidad = 0;
        int i = 0;
        while (j < 2) {
            if (revData[i] == '{') {
                i++;
                j++;
            }
            if (revData[i] == '}') {
                j++;
                i++;
            }
            buffer[cantidad] = revData[i];
            i++;
            cantidad++;
        }
        String^ lineas = gcnew String(buffer);
        //objGestorPunto->LeerPuntosArray(lineas);
        //array<String ^>^ buff = revData;
        //File::WriteAllLines("Buffer.txt", buff);
        //File::WriteAllLines()
    }
}


double RobotXController::ConnectionController::RecibirPuntos_Distancia(PuntoController^ objGestorPunto, SOCKET sClient) {

    char revData[150000];
    char buffer[150000];
    //Recibir datos 
    for (int i = 0; i < 150000; i++) {
        revData[i] = '*';
    }
    RobotXController::ConnectionController::EnviarDatos("puntos \n", sClient);
    Sleep(500);
    int ret = recv(sClient, revData, 255, 0);

    if (ret > 0)
    {
        revData[ret] = 0x00;
        printf(revData);
        //cout << endl;
        //argv[argc] = revData;
        int j = 0;
        int cantidad = 0;
        int i = 0;
        while (j < 2) {
            if (revData[i] == '{') {
                i++;
                j++;
            }
            if (revData[i] == '}') {
                break;
                j++;

            }
            if (revData[i] == '*') {
                break;
                j++;

            }
            buffer[cantidad] = revData[i];
            i++;
            cantidad++;
        }
        String^ lineas = gcnew String(buffer);
        RobotXController::PuntoController^ objGestorPunto = gcnew PuntoController();
        double Distancia = objGestorPunto->DistanciaPromedioPuntos(lineas);
        return Distancia;
    }
}
void RobotXController::ConnectionController::RecibirInsData(InsDataController^ objGestorInsData, SOCKET sClient) {

    char revData[1024];
    char buffer[1024];
    //Recibir datos 
    for (int i = 0; i < 1024; i++) {
        revData[i] = '*';
    }
    RobotXController::ConnectionController::EnviarDatos("InsData \n", sClient);
    Sleep(1000);
    int ret = recv(sClient, revData, 1024, 0);

    if (ret > 0)
    {
        revData[ret] = 0x00;
        printf(revData);
        //cout << endl;
        //argv[argc] = revData;
        int j = 0;
        int cantidad = 0;
        int i = 0;
        while (j < 2) {
            if (revData[i] == '{') {
                i++;
                j++;
            }
            if (revData[i] == '}') {
                break;
                j++;

            }
            if (revData[i] == '*') {
                break;
                j++;

            }
            buffer[cantidad] = revData[i];
            i++;
            cantidad++;
        }
        String^ lineas = gcnew String(buffer);
        objGestorInsData->LeerDataINS(lineas);
        //objGestorPunto->DistanciaPromedioPuntos(lineas);
       
    }
}

void ConnectionController::RecibirReporte3(Reporte3Controller^ objGestorReporte3, SOCKET sClient) {
    char revData[1024];
    char buffer[1024];
    //Recibir datos 
    for (int i = 0; i < 1024; i++) {
        revData[i] = '*';
    }

    int ret = recv(sClient, revData, 1024, 0);

    if (ret > 0)
    {
        revData[ret] = 0x00;
        printf(revData);
        //cout << endl;
        //argv[argc] = revData;
        int j = 0;
        int cantidad = 0;
        int i = 0;
        while (j < 2) {
            if (revData[i] == '{') {
                i++;
                j++;
            }
            if (revData[i] == '}') {
                break;
                j++;

            }
            if (revData[i] == '*') {
                break;
                j++;

            }
            buffer[cantidad] = revData[i];
            i++;
            cantidad++;
        }
        String^ lineas = gcnew String(buffer);
        objGestorReporte3->LeerDataTask3(lineas);
        //objGestorPunto->DistanciaPromedioPuntos(lineas);

    }
}

/*int RobotXController::ReconoceTeamID(String^ codigoInsertado) {
    int Reconoce = 0;
    //array<String^>^ opciones = { "$RXPTH", "$RXENC", "$RXDOK" };

    //for (int i = 0; i < sizeof(opciones); i++)
    //{
    if ((codigoInsertado == "$RXPTH") || (codigoInsertado == "$RXENC") || (codigoInsertado == "%$RXDOK"))
    {
        Reconoce = 1;
    }
    //}
    return Reconoce;
}*/
