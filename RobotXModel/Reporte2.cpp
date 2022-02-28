#include "Reporte2.h"

using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

Reporte2::Reporte2(String^ codigo, String^ fecha, String^ tiempo, String^ TeamID, String^ numDetected, String^ Wildlife) {
	this->codigo = codigo;
	this->fecha = fecha;
	this->tiempo = tiempo;
	this->TeamID = TeamID;
	this->numDetected = numDetected;
	this->Wildlife = Wildlife;
}