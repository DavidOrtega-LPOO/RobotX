#pragma once
using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

namespace RobotXController {

	public ref class Reporte3Controller {
	public:
		List<Reporte3^>^ listaReporte3;

	public:
		Reporte3Controller();

		void LeerDataTask3(String^ lineas);
		//int RecibirDatosConexion(int argc, char* argv[]);
		//List<punto^>^ ObtenerListaPuntos();
	};
}
