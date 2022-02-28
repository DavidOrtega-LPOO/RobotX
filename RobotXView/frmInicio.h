#pragma once
#include "frmManual.h"
#include "frmAutomata.h"

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
	/// Resumen de frmInicio
	/// </summary>
	public ref class frmInicio : public System::Windows::Forms::Form
	{
	public:
		frmInicio(void)
		{
			InitializeComponent();
			this->objGestorInsData = gcnew InsDataController();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: InsDataController^ objGestorInsData;
	private: System::Windows::Forms::Button^ btnManual;
	private: System::Windows::Forms::Button^ btnAutonomo;
	private: System::Windows::Forms::Label^ lblLatitud;
	private: System::Windows::Forms::Label^ lblLongitud;
	private: System::Windows::Forms::TextBox^ txtLatitud;
	private: System::Windows::Forms::TextBox^ txtLongitud;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ txtConnection;
	private: System::Windows::Forms::Button^ btnConnection;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnDesconectar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TeamIDBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmInicio::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnManual = (gcnew System::Windows::Forms::Button());
			this->btnAutonomo = (gcnew System::Windows::Forms::Button());
			this->lblLatitud = (gcnew System::Windows::Forms::Label());
			this->lblLongitud = (gcnew System::Windows::Forms::Label());
			this->txtLatitud = (gcnew System::Windows::Forms::TextBox());
			this->txtLongitud = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->txtConnection = (gcnew System::Windows::Forms::TextBox());
			this->btnConnection = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDesconectar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TeamIDBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(647, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnManual
			// 
			this->btnManual->Location = System::Drawing::Point(55, 349);
			this->btnManual->Margin = System::Windows::Forms::Padding(2);
			this->btnManual->Name = L"btnManual";
			this->btnManual->Size = System::Drawing::Size(56, 19);
			this->btnManual->TabIndex = 1;
			this->btnManual->Text = L"Manual";
			this->btnManual->UseVisualStyleBackColor = true;
			this->btnManual->Click += gcnew System::EventHandler(this, &frmInicio::btnManual_Click);
			// 
			// btnAutonomo
			// 
			this->btnAutonomo->Location = System::Drawing::Point(177, 349);
			this->btnAutonomo->Margin = System::Windows::Forms::Padding(2);
			this->btnAutonomo->Name = L"btnAutonomo";
			this->btnAutonomo->Size = System::Drawing::Size(65, 19);
			this->btnAutonomo->TabIndex = 2;
			this->btnAutonomo->Text = L"Autonomo";
			this->btnAutonomo->UseVisualStyleBackColor = true;
			this->btnAutonomo->Click += gcnew System::EventHandler(this, &frmInicio::btnAutonomo_Click);
			// 
			// lblLatitud
			// 
			this->lblLatitud->AutoSize = true;
			this->lblLatitud->Location = System::Drawing::Point(400, 284);
			this->lblLatitud->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblLatitud->Name = L"lblLatitud";
			this->lblLatitud->Size = System::Drawing::Size(42, 13);
			this->lblLatitud->TabIndex = 3;
			this->lblLatitud->Text = L"Latitud:";
			// 
			// lblLongitud
			// 
			this->lblLongitud->AutoSize = true;
			this->lblLongitud->Location = System::Drawing::Point(391, 316);
			this->lblLongitud->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblLongitud->Name = L"lblLongitud";
			this->lblLongitud->Size = System::Drawing::Size(51, 13);
			this->lblLongitud->TabIndex = 4;
			this->lblLongitud->Text = L"Longitud:";
			// 
			// txtLatitud
			// 
			this->txtLatitud->Location = System::Drawing::Point(456, 281);
			this->txtLatitud->Margin = System::Windows::Forms::Padding(2);
			this->txtLatitud->Name = L"txtLatitud";
			this->txtLatitud->Size = System::Drawing::Size(76, 20);
			this->txtLatitud->TabIndex = 5;
			// 
			// txtLongitud
			// 
			this->txtLongitud->Location = System::Drawing::Point(456, 313);
			this->txtLongitud->Margin = System::Windows::Forms::Padding(2);
			this->txtLongitud->Name = L"txtLongitud";
			this->txtLongitud->Size = System::Drawing::Size(76, 20);
			this->txtLongitud->TabIndex = 6;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(32, 226);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(97, 107);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(161, 226);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(97, 107);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(32, 86);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(123, 59);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// txtConnection
			// 
			this->txtConnection->Location = System::Drawing::Point(370, 177);
			this->txtConnection->Margin = System::Windows::Forms::Padding(2);
			this->txtConnection->Name = L"txtConnection";
			this->txtConnection->Size = System::Drawing::Size(214, 20);
			this->txtConnection->TabIndex = 13;
			// 
			// btnConnection
			// 
			this->btnConnection->Location = System::Drawing::Point(370, 209);
			this->btnConnection->Margin = System::Windows::Forms::Padding(2);
			this->btnConnection->Name = L"btnConnection";
			this->btnConnection->Size = System::Drawing::Size(83, 27);
			this->btnConnection->TabIndex = 14;
			this->btnConnection->Text = L"Conectarse";
			this->btnConnection->UseVisualStyleBackColor = true;
			this->btnConnection->Click += gcnew System::EventHandler(this, &frmInicio::btnConnection_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(446, 153);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Conexión";
			this->label1->Click += gcnew System::EventHandler(this, &frmInicio::label1_Click);
			// 
			// btnDesconectar
			// 
			this->btnDesconectar->Location = System::Drawing::Point(494, 209);
			this->btnDesconectar->Margin = System::Windows::Forms::Padding(2);
			this->btnDesconectar->Name = L"btnDesconectar";
			this->btnDesconectar->Size = System::Drawing::Size(89, 27);
			this->btnDesconectar->TabIndex = 16;
			this->btnDesconectar->Text = L"Desconectarse";
			this->btnDesconectar->UseVisualStyleBackColor = true;
			this->btnDesconectar->Click += gcnew System::EventHandler(this, &frmInicio::btnDesconectar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(376, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Team ID:";
			this->label2->Click += gcnew System::EventHandler(this, &frmInicio::label2_Click);
			// 
			// TeamIDBox
			// 
			this->TeamIDBox->Location = System::Drawing::Point(433, 100);
			this->TeamIDBox->Name = L"TeamIDBox";
			this->TeamIDBox->Size = System::Drawing::Size(100, 20);
			this->TeamIDBox->TabIndex = 18;
			// 
			// frmInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 431);
			this->Controls->Add(this->TeamIDBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnDesconectar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnConnection);
			this->Controls->Add(this->txtConnection);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->txtLongitud);
			this->Controls->Add(this->txtLatitud);
			this->Controls->Add(this->lblLongitud);
			this->Controls->Add(this->lblLatitud);
			this->Controls->Add(this->btnAutonomo);
			this->Controls->Add(this->btnManual);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmInicio";
			this->Text = L"frmInicio";
			this->Load += gcnew System::EventHandler(this, &frmInicio::frmInicio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		RobotXController::ConnectionController^ objGestorConexion = gcnew ConnectionController();

private: System::Void btnManual_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if ((objGestorConexion->sClient != 0) || (objGestorConexion->slisten != 0)) {
		objGestorConexion->EnviarDatos("manual \n", objGestorConexion->sClient);
		Sleep(200);
		frmManual^ ventanaManual = gcnew frmManual(objGestorConexion);
		ventanaManual->ShowDialog();
		//objGestorConexion->EnviarTeamID("manual \n", objGestorConexion->sClient);
		
		//if (objGestorConexion->Conexion != "") {
			//objGestorConexion->EnviarDatos("Codigo de la tarea \n", objGestorConexion->sClient);
		}
	//}
	else {
		MessageBox::Show("No se ha realizado la conexión");
	}
	
}
private: System::Void btnAutonomo_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((objGestorConexion->sClient != 0) || (objGestorConexion->slisten != 0)) {
		objGestorConexion->EnviarDatos("autonomo \n", objGestorConexion->sClient);
		Sleep(200);
		frmAutomata^ ventanaAutomata = gcnew frmAutomata(objGestorConexion);
		ventanaAutomata->ShowDialog();
	}
	else {
		MessageBox::Show("No se ha realizado la conexión");
	}
}
private: System::Void frmInicio_Load(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Image = Image::FromFile("Banner.jpg");
	this->pictureBox2->Image = gcnew Bitmap("Manual.png"); 
	this->pictureBox3->Image = gcnew Bitmap("Autonomo.png");

	

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnConnection_Click(System::Object^ sender, System::EventArgs^ e) {
	//RobotXController::ConnectionController^ objGestorConexion = gcnew ConnectionController(); 
	//cerrar=0;
	//int Reconoce = objGestorConexion->ReconoceTeamID(this->TeamIDBox->Text);

	String^ TeamID = this->TeamIDBox->Text;
	if (this->TeamIDBox->Text != "") {
		int valor = objGestorConexion->RealizarConexionSockets();
		this->txtConnection->Text = objGestorConexion->mensaje;
		if (objGestorConexion->Conexion != "") {
			this->txtConnection->Text = objGestorConexion->Conexion;
		}
		
		///************************TeamID********************************/
		//objGestorConexion->EnviarDatos("Team ID \n", objGestorConexion->sClient);
		//Sleep(500);
		//objGestorConexion->EnviarTeamID(TeamID, objGestorConexion->sClient);
		///*********************INS DATA**********************************/
		//objGestorConexion->RecibirInsData(objGestorInsData, objGestorConexion->sClient);
		//this->txtLatitud->Text = Convert::ToString(objGestorInsData->listaInsData[0]->latitud);
		//this->txtLongitud->Text = Convert::ToString(objGestorInsData->listaInsData[0]->longitud);
		
	}
	else
	{
		MessageBox::Show("Ingrese el ID asignado");
	}
	
	

}
private: System::Void btnDesconectar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int valor = objGestorConexion->DesconectarSockets();
	this->txtConnection->Text = "connection timed out";
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
