#include<winsock.h>  
#include<stdio.h>  
#include<iostream>  
#include<string>  
#include "ConnectionController.h"
#include "PuntoController.h"
#include <msclr/marshal.h>

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
    SOCKET slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
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
        int ret = recv(sClient, revData, 150000, 0);
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
    //SOCKET slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
     this->slisten = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (this->slisten == INVALID_SOCKET)
    {
        this->mensaje = "socket error !";
        //printf("socket error !");
        return 0;
    }

    // Enlace IP y puerto    
    sockaddr_in sin;
    sin.sin_family = AF_INET;
    sin.sin_port = htons(5656);
    sin.sin_addr.S_un.S_addr = INADDR_ANY;
    if (bind(this->slisten, (LPSOCKADDR)&sin, sizeof(sin)) == SOCKET_ERROR)
    {
        this->mensaje = "bind error !";
        //printf("bind error !");
    }

    //Empieza a escuchar    
    if (listen(this->slisten, 5) == SOCKET_ERROR)
    {
        this->mensaje = "listen error !";
        //printf("listen error !");
        return 0;
    }

    // Recibir datos en un bucle    
    //SOCKET sClient;
    sockaddr_in remoteAddr;
    int nAddrlen = sizeof(remoteAddr);
    int ti = 5;
    int k = 1;
    //array<String^>^ revData;
    //char revData[150000];
    //char envData[150000];
    //char buffer[150000];


    while (k == 1)
    {
        //--ti;
        if (k == 1) {
            k--;
            //printf("Esperando para conectar ... \n");
            this->mensaje = "Esperando para conectar ...";
            this->sClient = accept(slisten, (SOCKADDR*)&remoteAddr, &nAddrlen);
            if (this->sClient == INVALID_SOCKET)
            {
                this->mensaje = "accept error !";
                //printf("accept error !");
                continue;
            }
            //printf("Established Connection:%s \r \n", inet_ntoa(remoteAddr.sin_addr));
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
    return 0;
}