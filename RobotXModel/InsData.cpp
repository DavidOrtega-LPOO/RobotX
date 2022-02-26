#include "InsData.h"

using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;


InsData::InsData(double yaw, double latitud, double longitud) {

	this->yaw = yaw;
	this->latitud = latitud;
	this->longitud = longitud;
}



