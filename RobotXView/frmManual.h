#pragma once
#include<stdio.h>
#include<math.h>

# define M_PI 3.14159265358979323846 /* pi */

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
			this->SuspendLayout();
			// 
			// Radar
			// 
			this->Radar->BackColor = System::Drawing::SystemColors::Window;
			this->Radar->Location = System::Drawing::Point(328, 13);
			this->Radar->Margin = System::Windows::Forms::Padding(4);
			this->Radar->Name = L"Radar";
			this->Radar->Size = System::Drawing::Size(700, 700);
			this->Radar->TabIndex = 2;
			this->Radar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmManual::Radar_Paint);
			// 
			// frmManual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 719);
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
		Graphics^ objGraphics = e->Graphics;
		SolidBrush^ objBrocha = gcnew SolidBrush(Color::Black);
		Point p1(250, 500), p2(250, 0), p3(0, 250), p4(500, 250);
		/*
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
		
		objGestorPunto->LeerPuntos();
		for (int i = 0; i < objGestorPunto->listaPuntos->Count; i++) {
			punto^ objPunto = objGestorPunto->listaPuntos[i];
			double puntoX = calculaX(objPunto->angulo, objPunto->distancia);
			double puntoY = calculaY(objPunto->angulo, objPunto->distancia);
			objGraphics->FillEllipse(objBrocha, puntoX, puntoY, 5, 5);

			objGraphics->DrawEllipse(Pens::Black, 0, 0, 500, 500);
			objGraphics->DrawEllipse(Pens::Black, 63, 63, 375, 375);
			objGraphics->DrawEllipse(Pens::Black, 125, 125, 250, 250);
			objGraphics->DrawEllipse(Pens::Black, 188, 188, 125, 125);
			objGraphics->DrawLine(Pens::Black, p1, p2);
			objGraphics->DrawLine(Pens::Black, p3, p4);
		}

	}
	};
}
