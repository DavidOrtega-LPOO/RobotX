#pragma once

using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

namespace RobotXController {


	public ref class PuntoController {
	public:
		List<punto^>^ listaPuntos;
	public:
		PuntoController();
		void LeerPuntos();
		int LeerPuntosArray(String^ Lineas);
		double DistanciaPromedioPuntos(String^ Lineas);
		//int RecibirDatosConexion(int argc, char* argv[]);
		//List<punto^>^ ObtenerListaPuntos();
	};
}

//cambio