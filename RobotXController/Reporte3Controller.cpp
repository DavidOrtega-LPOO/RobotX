#include "Reporte3Controller.h"

using namespace RobotXController;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
//using namespace std;

Reporte3Controller::Reporte3Controller() {
    this->listaReporte3 = gcnew List<Reporte3^>();
}

void Reporte3Controller::LeerDataTask3(String^ lineas) {
    this->listaReporte3->Clear();

    String^ separadores = ",";
    array<String^>^ LineasYLL = lineas->Split(separadores->ToCharArray());

    String^ codigo = (LineasYLL[0]);
    String^ fecha = (LineasYLL[1]);
    String^ tiempo = (LineasYLL[2]);
    String^ TeamID = (LineasYLL[3]);
    String^ color = (LineasYLL[4]);
    String^ status = (LineasYLL[5]);

    Reporte3^ objReporte3= gcnew Reporte3(codigo,fecha,tiempo,TeamID,color,status);
    this->listaReporte3->Add(objReporte3);

}