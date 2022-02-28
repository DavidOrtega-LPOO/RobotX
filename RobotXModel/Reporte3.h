#pragma once

namespace RobotXModel {
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Reporte3 {
	public:
		//double angulo;
		//double distancia; /*distancia del centro del radar al punto*/
		String^ codigo;
		String^ fecha;
		String^ tiempo;
		String^ TeamID;
		String^ color;
		String^ status;

	public:
		Reporte3(String^ codigo, String^ fecha, String^ tiempo, String^ TeamID, String^ color, String^ status);
	};

}