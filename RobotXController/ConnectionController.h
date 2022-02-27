#pragma once
#include"PuntoController.h"
#include"InsDataController.h"
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
		void RecibirPuntos(PuntoController^ objGestorPunto, SOCKET sClient);
		void RecibirImagen(SOCKET sClient);
		void EnviarDatos(String^ mensajeEnviar, SOCKET sClient);
		void EnviarTeamID(String^ mensajeEnviar, SOCKET sClient);
		double RecibirPuntos_Distancia(PuntoController^ objGestorPunto, SOCKET sClient);
		/*******************************************************************************/
		void RecibirInsData(InsDataController^ objGestorInsData, SOCKET sClient);

		int DesconectarSockets();
		//int ReconoceTeamID(String^ codigoInsertado);
		//List<punto^>^ ObtenerListaPuntos();
		//array<string^>^
	};



}