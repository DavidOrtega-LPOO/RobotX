#pragma once

using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

namespace RobotXController {

	public ref class InsDataController {
	public:
		List<InsData^>^ listaInsData;

	public:
		InsDataController();
		void LeerDataINS(String^ lineas);
		//int RecibirDatosConexion(int argc, char* argv[]);
		//List<punto^>^ ObtenerListaPuntos();
	};
}
