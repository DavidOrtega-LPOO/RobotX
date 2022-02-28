//#include "Reporte2Controller.h"
//
//using namespace RobotXController;
//using namespace System;
//using namespace System::IO;
//using namespace System::Collections::Generic;
////using namespace std;
//
//Reporte2Controller::Reporte2Controller() {
//    this->listaReporte2 = gcnew List<Reporte2^>();
//}
//
//void Reporte2Controller::LeerDataTask2(String^ lineas) {
//    this->listaReporte2->Clear();
//
//    String^ separadores = ",";
//    array<String^>^ LineasYLL = lineas->Split(separadores->ToCharArray());
//
//    String^ codigo = (LineasYLL[0]);
//    String^ fecha = (LineasYLL[1]);
//    String^ tiempo = (LineasYLL[2]);
//    String^ TeamID = (LineasYLL[3]);
//    String^ color = (LineasYLL[4]);
//    String^ status = (LineasYLL[5]);
//
//    Reporte3^ objReporte2 = gcnew Reporte3(codigo, fecha, tiempo, TeamID, color, status);
//    this->listaReporte2->Add(objReporte2);
//
//}