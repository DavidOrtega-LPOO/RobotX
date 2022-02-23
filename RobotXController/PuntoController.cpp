#include "PuntoController.h"


using namespace RobotXController;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
//using namespace std;

RobotXController::PuntoController::PuntoController() {
    this->listaPuntos = gcnew List<punto^>();
}
void RobotXController::PuntoController::LeerPuntos() {

    this->listaPuntos->Clear();

    array<String^>^ lineas = File::ReadAllLines("Resultado1.0.txt");
    String^ separadores = ",";
    String^ secondSeparador = ":";
    for each (String ^ LineaAngulo_Distancia in lineas) {
        array<String^>^ Angulo_Distancia = LineaAngulo_Distancia->Split(separadores->ToCharArray());
        for each (String ^ LineasAngulo_Distancia in Angulo_Distancia) {
            array<String^>^ Angulo_Distancia2 = LineasAngulo_Distancia->Split(secondSeparador->ToCharArray());
            double angulo = Convert::ToDouble(Angulo_Distancia2[0]);
            double distancia = Convert::ToDouble(Angulo_Distancia2[1]);

            punto^ objPunto = gcnew punto(angulo, distancia);
            this->listaPuntos->Add(objPunto);
        }
    }
}
void RobotXController::PuntoController::LeerPuntosArray(String^ Lineas) {
    this->listaPuntos->Clear();

    String^ separadores = ",";
    String^ secondSeparador = ":";

    array<String^>^ Angulo_Distancia = Lineas->Split(separadores->ToCharArray());
    for each (String ^ LineasAngulo_Distancia in Angulo_Distancia) {
        array<String^>^ Angulo_Distancia2 = LineasAngulo_Distancia->Split(secondSeparador->ToCharArray());
        double angulo = Convert::ToDouble(Angulo_Distancia2[0]);
        double distancia = Convert::ToDouble(Angulo_Distancia2[1]);

        punto^ objPunto = gcnew punto(angulo, distancia);
        this->listaPuntos->Add(objPunto);
    }
}

