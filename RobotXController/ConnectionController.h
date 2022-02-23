#pragma once
#include"PuntoController.h"
using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

namespace RobotXController {

	public ref class ConnectionController {
	public:
		List<punto^>^ listaPuntos;
	public:
		ConnectionController();
		//ConnectionController(char Datos);
		int RecibirDatosConexion(PuntoController^ objGestorPunto);
		void RealizarConexionSockets();
		//List<punto^>^ ObtenerListaPuntos();
		//array<string^>^
	};



}