#pragma once
#include<stdio.h>
#include<math.h>

# define M_PI 3.14159265358979323846 /* pi */
# define cantidad 150000

namespace RobotXView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RobotXController;
	using namespace RobotXModel;

	/// <summary>
	/// Resumen de frmManual
	/// </summary>
	public ref class frmManual : public System::Windows::Forms::Form
	{
	public:
		frmManual(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmManual(ConnectionController^ objGestorConexion) {
			InitializeComponent();
			this->objGestorConexion = objGestorConexion;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmManual()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Radar;
	protected:
	private:ConnectionController^ objGestorConexion;
	private: System::Windows::Forms::Button^ btnUp;
	private: System::Windows::Forms::Button^ btnLeft;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnRight;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Radar = (gcnew System::Windows::Forms::Panel());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Radar
			// 
			this->Radar->BackColor = System::Drawing::SystemColors::Window;
			this->Radar->Location = System::Drawing::Point(644, 13);
			this->Radar->Margin = System::Windows::Forms::Padding(4);
			this->Radar->Name = L"Radar";
			this->Radar->Size = System::Drawing::Size(700, 700);
			this->Radar->TabIndex = 2;
			this->Radar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmManual::Radar_Paint);
			// 
			// btnUp
			// 
			this->btnUp->Location = System::Drawing::Point(217, 35);
			this->btnUp->Name = L"btnUp";
			this->btnUp->Size = System::Drawing::Size(95, 36);
			this->btnUp->TabIndex = 3;
			this->btnUp->Text = L"Up";
			this->btnUp->UseVisualStyleBackColor = true;
			this->btnUp->Click += gcnew System::EventHandler(this, &frmManual::btnUp_Click);
			// 
			// btnLeft
			// 
			this->btnLeft->Location = System::Drawing::Point(108, 88);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(98, 45);
			this->btnLeft->TabIndex = 4;
			this->btnLeft->Text = L"Left";
			this->btnLeft->UseVisualStyleBackColor = true;
			this->btnLeft->Click += gcnew System::EventHandler(this, &frmManual::btnLeft_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(217, 88);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(95, 35);
			this->btnBack->TabIndex = 5;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &frmManual::btnBack_Click);
			// 
			// btnRight
			// 
			this->btnRight->Location = System::Drawing::Point(322, 88);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(103, 45);
			this->btnRight->TabIndex = 6;
			this->btnRight->Text = L"Right";
			this->btnRight->UseVisualStyleBackColor = true;
			this->btnRight->Click += gcnew System::EventHandler(this, &frmManual::btnRight_Click);
			// 
			// frmManual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1357, 775);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btnUp);
			this->Controls->Add(this->Radar);
			this->Name = L"frmManual";
			this->Text = L"frmManual";
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		double calculaX(double Dato_angulo, double distancia) {
			// si se encuentra en la region derecha(-)
			if (Dato_angulo < 0) {

				double angulo = M_PI * (90 + Dato_angulo) / 180;
				double puntoX = 250 + ((distancia / 16) * (cos(angulo)));
				return puntoX;
			}
			//si el angulo se encuentra en la region izquierda(+)
			else {
				double angulo = M_PI * (180 - 90 - Dato_angulo) / 180;

				double puntoX = 250 - ((distancia / 16) * (cos(angulo)));
				return puntoX;
			}
		}
		double calculaY(double Dato_angulo, double distancia) {

			double puntoY;
			// si se encuentra en la region derecha(-)
			if (Dato_angulo < 0) {

				double angulo = M_PI * (90 + Dato_angulo) / 180;
				if (angulo < 0) angulo = angulo * (-1);

				if (90 < ((-1) * Dato_angulo)) {
					double puntoY = 250 + ((distancia / 16) * (sin(angulo)));
					return puntoY;
				}
				else if (90 > ((-1) * Dato_angulo)) {
					double puntoY = 250 - ((distancia / 16) * (sin(angulo)));
					return puntoY;
				}
			}
			//si el angulo se encuentra en la region izquierda(+)
			else {
				double angulo = M_PI * (180 - 90 - Dato_angulo) / 180;

				if (angulo < 0) angulo = angulo * (-1);
				if (180 < (90 + Dato_angulo)) {
					double puntoY = 250 + ((distancia / 16) * (sin(angulo)));
					return puntoY;
				}
				else if (180 > (90 + Dato_angulo)) {
					double puntoY = 250 - ((distancia / 16) * (sin(angulo)));
					return puntoY;
				}
			}


		}
	private: System::Void Radar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		int conexion;
		//int cantidad = 150000;
		char* DatosRecibidos[] = {0};
		Graphics^ objGraphics = e->Graphics;
		SolidBrush^ objBrocha = gcnew SolidBrush(Color::Black);
		Point p1(250, 500), p2(250, 0), p3(0, 250), p4(500, 250);
		/*//Para probar con un angulo y distancia de prueba///
		////////////////////////////////////////////
		double anguloPrueba=-51.580477;
		double distanciaPrueba=1352;
		double puntoPruebaY= calculaY(anguloPrueba, distanciaPrueba);
		double puntoPruebaX= calculaX(anguloPrueba, distanciaPrueba);
		objGraphics->FillEllipse(objBrocha, puntoPruebaX, puntoPruebaY, 5, 5);
	  //objGraphics->DrawEllipse(Pens::Black, x coord upper-left corner, y coord upper-left corner, width rctngl, height rctngl);
		objGraphics->DrawEllipse(Pens::Black, 0, 0, 500, 500);
		objGraphics->DrawEllipse(Pens::Black, 63, 63, 375, 375);
		objGraphics->DrawEllipse(Pens::Black, 125, 125, 250, 250);
		objGraphics->DrawEllipse(Pens::Black, 188, 188, 125, 125);
		objGraphics->DrawLine(Pens::Black, p1, p2);
		objGraphics->DrawLine(Pens::Black, p3, p4);
		*/
		RobotXController::PuntoController^ objGestorPunto = gcnew PuntoController();
		//RobotXController::ConnectionController^ objGestorConexion = gcnew ConnectionController();
		this->objGestorConexion->RecibirPuntos(objGestorPunto, this->objGestorConexion->sClient);

		//objGestorPunto->LeerPuntos();
		for (int i = 0; i < objGestorPunto->listaPuntos->Count; i++) {
			punto^ objPunto = objGestorPunto->listaPuntos[i];
			double puntoX = calculaX(objPunto->angulo, objPunto->distancia);
			double puntoY = calculaY(objPunto->angulo, objPunto->distancia);
			objGraphics->FillEllipse(objBrocha, puntoX, puntoY, 5, 5);
		}
		objGraphics->DrawEllipse(Pens::Black, 0, 0, 500, 500);
		objGraphics->DrawEllipse(Pens::Black, 63, 63, 375, 375);
		objGraphics->DrawEllipse(Pens::Black, 125, 125, 250, 250);
		objGraphics->DrawEllipse(Pens::Black, 188, 188, 125, 125);
		objGraphics->DrawLine(Pens::Black, p1, p2);
		objGraphics->DrawLine(Pens::Black, p3, p4);
	}
	private: System::Void btnUp_Click(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorConexion->EnviarDatos("W", this->objGestorConexion->sClient);
	}
private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("A", this->objGestorConexion->sClient);
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("S", this->objGestorConexion->sClient);
}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("D", this->objGestorConexion->sClient);
}
};
}
