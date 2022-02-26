#pragma once
#include<stdio.h>
#include<math.h>
#include <windows.h>

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
			this->objBrocha = gcnew SolidBrush(Color::Black);
			this-> objGestorPunto = gcnew PuntoController();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmManual(ConnectionController^ objGestorConexion) {
			InitializeComponent();
			this->objGestorConexion = objGestorConexion;
			this->objBrocha = gcnew SolidBrush(Color::Black);
			this->objGestorPunto = gcnew PuntoController();
			this->objGestorConexion->RecibirPuntos(this->objGestorPunto, this->objGestorConexion->sClient);
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
	private: SolidBrush^ objBrocha;
	private: PuntoController^ objGestorPunto;
	private: System::Windows::Forms::Button^ btnUp;
	private: System::Windows::Forms::Button^ btnLeft;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnRight;
	private: System::Windows::Forms::PictureBox^ pbImagenEnviada;
	private: System::Windows::Forms::Button^ btnParar;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ btnUP_plus;
	private: System::Windows::Forms::Button^ btnBack2;
	private: System::Windows::Forms::Button^ btnBack_plus;
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Radar = (gcnew System::Windows::Forms::Panel());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->pbImagenEnviada = (gcnew System::Windows::Forms::PictureBox());
			this->btnParar = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnUP_plus = (gcnew System::Windows::Forms::Button());
			this->btnBack2 = (gcnew System::Windows::Forms::Button());
			this->btnBack_plus = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagenEnviada))->BeginInit();
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
			this->btnUp->Location = System::Drawing::Point(217, 46);
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
			this->btnBack->Text = L"Stop";
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
			// pbImagenEnviada
			// 
			this->pbImagenEnviada->Location = System::Drawing::Point(50, 256);
			this->pbImagenEnviada->Name = L"pbImagenEnviada";
			this->pbImagenEnviada->Size = System::Drawing::Size(563, 412);
			this->pbImagenEnviada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImagenEnviada->TabIndex = 7;
			this->pbImagenEnviada->TabStop = false;
			// 
			// btnParar
			// 
			this->btnParar->Location = System::Drawing::Point(480, 24);
			this->btnParar->Name = L"btnParar";
			this->btnParar->Size = System::Drawing::Size(157, 26);
			this->btnParar->TabIndex = 8;
			this->btnParar->Text = L"Emergency Stop";
			this->btnParar->UseVisualStyleBackColor = true;
			this->btnParar->Click += gcnew System::EventHandler(this, &frmManual::btnParar_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 2000;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmManual::timer1_Tick);
			// 
			// btnUP_plus
			// 
			this->btnUP_plus->Location = System::Drawing::Point(217, 6);
			this->btnUP_plus->Name = L"btnUP_plus";
			this->btnUP_plus->Size = System::Drawing::Size(95, 34);
			this->btnUP_plus->TabIndex = 9;
			this->btnUP_plus->Text = L"Up +";
			this->btnUP_plus->UseVisualStyleBackColor = true;
			this->btnUP_plus->Click += gcnew System::EventHandler(this, &frmManual::btnUP_plus_Click);
			// 
			// btnBack2
			// 
			this->btnBack2->Location = System::Drawing::Point(217, 129);
			this->btnBack2->Name = L"btnBack2";
			this->btnBack2->Size = System::Drawing::Size(95, 35);
			this->btnBack2->TabIndex = 10;
			this->btnBack2->Text = L"Back";
			this->btnBack2->UseVisualStyleBackColor = true;
			this->btnBack2->Click += gcnew System::EventHandler(this, &frmManual::btnBack2_Click);
			// 
			// btnBack_plus
			// 
			this->btnBack_plus->Location = System::Drawing::Point(217, 171);
			this->btnBack_plus->Name = L"btnBack_plus";
			this->btnBack_plus->Size = System::Drawing::Size(95, 44);
			this->btnBack_plus->TabIndex = 11;
			this->btnBack_plus->Text = L"Back +";
			this->btnBack_plus->UseVisualStyleBackColor = true;
			this->btnBack_plus->Click += gcnew System::EventHandler(this, &frmManual::btnBack_plus_Click);
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(41, 13);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 23);
			this->btnStart->TabIndex = 12;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &frmManual::btnStart_Click);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 5000;
			this->timer2->Tick += gcnew System::EventHandler(this, &frmManual::timer2_Tick);
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(562, 192);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(75, 23);
			this->btnActualizar->TabIndex = 13;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &frmManual::btnActualizar_Click);
			// 
			// frmManual
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1357, 775);
			this->Controls->Add(this->btnActualizar);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->btnBack_plus);
			this->Controls->Add(this->btnBack2);
			this->Controls->Add(this->btnUP_plus);
			this->Controls->Add(this->btnParar);
			this->Controls->Add(this->pbImagenEnviada);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btnUp);
			this->Controls->Add(this->Radar);
			this->Name = L"frmManual";
			this->Text = L"frmManual";
			this->Load += gcnew System::EventHandler(this, &frmManual::frmManual_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmManual::frmManual_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImagenEnviada))->EndInit();
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
		objGraphics->DrawEllipse(Pens::Black, 0, 0, 500, 500);
		objGraphics->DrawEllipse(Pens::Black, 63, 63, 375, 375);
		objGraphics->DrawEllipse(Pens::Black, 125, 125, 250, 250);
		objGraphics->DrawEllipse(Pens::Black, 188, 188, 125, 125);
		objGraphics->DrawLine(Pens::Black, p1, p2);
		objGraphics->DrawLine(Pens::Black, p3, p4);
		//RobotXController::PuntoController^ objGestorPunto = gcnew PuntoController();
		//RobotXController::ConnectionController^ objGestorConexion = gcnew ConnectionController();
		//this->objGestorConexion->EnviarDatos("Hola, Cliente TCP Se esperan los puntos \n", this->objGestorConexion->sClient);
		//this->objGestorConexion->RecibirPuntos(this->objGestorPunto, this->objGestorConexion->sClient);
		//	
		//
		//this->objGestorPunto->LeerPuntos();
		//Grafica los puntos
		for (int i = 0; i < this->objGestorPunto->listaPuntos->Count; i++) {	
			punto^ objPunto = this->objGestorPunto->listaPuntos[i];
			double puntoX = calculaX(objPunto->angulo, objPunto->distancia);
			double puntoY = calculaY(objPunto->angulo, objPunto->distancia);
			objGraphics->FillEllipse(objBrocha, puntoX, puntoY, 5, 5);
		}
		
		
		
	}
	private: System::Void btnUp_Click(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorConexion->EnviarDatos("w", this->objGestorConexion->sClient);
	}
	private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("a", this->objGestorConexion->sClient);
	}
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("s", this->objGestorConexion->sClient);
	}
	private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("d", this->objGestorConexion->sClient);
	}
	private: System::Void frmManual_Load(System::Object^ sender, System::EventArgs^ e) {
	//this->objGestorConexion->RecibirImagen(this->objGestorConexion->sClient);
	//this->pbImagenEnviada->Image
		//this->objGestorConexion->EnviarDatos("N \n", this->objGestorConexion->sClient);
	}
	private: System::Void btnParar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorConexion->EnviarDatos("M", this->objGestorConexion->sClient);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		this->objGestorConexion->RecibirPuntos(this->objGestorPunto, this->objGestorConexion->sClient);
		this->Invalidate();
	}
	private: System::Void frmManual_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)87 || e->KeyChar == (char)119) {
			this->objGestorConexion->EnviarDatos("w", this->objGestorConexion->sClient);
		}
		if (e->KeyChar == (char)65 || e->KeyChar == (char)97) {
			this->objGestorConexion->EnviarDatos("a", this->objGestorConexion->sClient);
		}
		if (e->KeyChar == (char)83 || e->KeyChar == (char)115) {
			this->objGestorConexion->EnviarDatos("s", this->objGestorConexion->sClient);
		}
		if (e->KeyChar == (char)68 || e->KeyChar == (char)100) {
			this->objGestorConexion->EnviarDatos("d", this->objGestorConexion->sClient);
		}
		if (e->KeyChar == (char)77 || e->KeyChar == (char)109) {
			this->objGestorConexion->EnviarDatos("M", this->objGestorConexion->sClient);
		}
		this->Invalidate();
}
private: System::Void btnUP_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("q", this->objGestorConexion->sClient);
}
private: System::Void btnBack2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("x", this->objGestorConexion->sClient);
}
private: System::Void btnBack_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("e", this->objGestorConexion->sClient);
}
private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->EnviarDatos("N", this->objGestorConexion->sClient);
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->RecibirPuntos(this->objGestorPunto, this->objGestorConexion->sClient);
	this->Invalidate();
}
private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorConexion->RecibirPuntos(this->objGestorPunto, this->objGestorConexion->sClient);
}
};
}
