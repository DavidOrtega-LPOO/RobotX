#pragma once

namespace RobotXModel {
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class punto {
	public:
		double angulo;
		double distancia; /*distancia del centro del radar al punto*/

	public:
		punto(double angulo, double distancia);

	};
	
}