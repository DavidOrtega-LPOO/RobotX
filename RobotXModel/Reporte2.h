#pragma once

namespace RobotXModel {
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Reporte2 {
	public:
		//double angulo;
		//double distancia; /*distancia del centro del radar al punto*/
		String^ codigo;
		String^ fecha;
		String^ tiempo;
		String^ TeamID;
		String^ numDetected;
		String^ Wildlife;

	public:
		//Reporte3();
		Reporte2(String^ codigo, String^ fecha, String^ tiempo, String^ TeamID, String^ numDetected, String^ Wildlife);
	};

}