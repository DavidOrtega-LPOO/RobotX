#pragma once

namespace RobotXModel {
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class InsData {
	public:
		double yaw;
		double latitud; /*distancia del centro del radar al punto*/
		double longitud;

	public:
		InsData(double yaw, double latitud, double longitud);

	};

}