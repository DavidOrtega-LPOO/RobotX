#include "Reporte3.h"

using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;


Reporte3::Reporte3(String^ codigo, String^ fecha, String^ tiempo, String^ TeamID, String^ color, String^ status) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->tiempo = tiempo;
	this->status = status;
}
