#pragma once
#include"PuntoController.h"
#include<winsock.h>  
#include<stdio.h>  
#include<iostream>  
#include<string>  
using namespace RobotXModel;
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
#pragma comment(lib, "ws2_32.lib")

namespace RobotXController {

	public ref class ConnectionController {
	public:
		List<punto^>^ listaPuntos;
		SOCKET slisten;
		SOCKET sClient;
		String^ mensaje;
		String^ Conexion;
	public:
		ConnectionController();
		ConnectionController(SOCKET slisten, SOCKET sClient);
		//ConnectionController(SOCKET slisten, List<punto^>^ listaPuntos);
		//ConnectionController(char Datos);
		int RecibirDatosConexion(PuntoController^ objGestorPunto);
		int RealizarConexionSockets();
		int DesconectarSockets();
		//List<punto^>^ ObtenerListaPuntos();
		//array<string^>^
	};



}