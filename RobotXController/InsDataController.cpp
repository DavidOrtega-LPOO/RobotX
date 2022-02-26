#include "InsDataController.h"

using namespace RobotXController;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
//using namespace std;

RobotXController::InsDataController::InsDataController() {
    this->listaInsData= gcnew List<InsData^>();
}

void RobotXController::InsDataController::LeerDataINS(String^ lineas) {
    this->listaInsData->Clear();
   
    String^ separadores = ",";
    array<String^>^ LineasYLL = lineas->Split(separadores->ToCharArray());

        double Yaw = Convert::ToDouble(LineasYLL[0]);
        double Latitud = Convert::ToDouble(LineasYLL[1]);
        double Longitud = Convert::ToDouble(LineasYLL[2]);
        
        InsData^ objInsData = gcnew InsData(Yaw, Latitud, Longitud);
        this->listaInsData->Add(objInsData);

}