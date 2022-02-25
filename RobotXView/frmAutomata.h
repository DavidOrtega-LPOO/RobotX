#pragma once

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
	/// Resumen de frmAutomata
	/// </summary>
	public ref class frmAutomata : public System::Windows::Forms::Form
	{
	public:
		frmAutomata(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAutomata(ConnectionController^ objGestorConexion) {
			InitializeComponent();
			this->objGestorConexion = objGestorConexion;
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAutomata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnTask1;
	protected:
	private:ConnectionController^ objGestorConexion;
	private: System::Windows::Forms::Button^ btnTask2;
	private: System::Windows::Forms::Button^ btnTask3;
	private: System::Windows::Forms::Button^ btnTask4;

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
			this->btnTask1 = (gcnew System::Windows::Forms::Button());
			this->btnTask2 = (gcnew System::Windows::Forms::Button());
			this->btnTask3 = (gcnew System::Windows::Forms::Button());
			this->btnTask4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnTask1
			// 
			this->btnTask1->Location = System::Drawing::Point(68, 50);
			this->btnTask1->Name = L"btnTask1";
			this->btnTask1->Size = System::Drawing::Size(75, 23);
			this->btnTask1->TabIndex = 0;
			this->btnTask1->Text = L"Task1";
			this->btnTask1->UseVisualStyleBackColor = true;
			// 
			// btnTask2
			// 
			this->btnTask2->Location = System::Drawing::Point(68, 95);
			this->btnTask2->Name = L"btnTask2";
			this->btnTask2->Size = System::Drawing::Size(75, 23);
			this->btnTask2->TabIndex = 1;
			this->btnTask2->Text = L"Task2";
			this->btnTask2->UseVisualStyleBackColor = true;
			// 
			// btnTask3
			// 
			this->btnTask3->Location = System::Drawing::Point(68, 140);
			this->btnTask3->Name = L"btnTask3";
			this->btnTask3->Size = System::Drawing::Size(75, 23);
			this->btnTask3->TabIndex = 2;
			this->btnTask3->Text = L"Task3";
			this->btnTask3->UseVisualStyleBackColor = true;
			this->btnTask3->Click += gcnew System::EventHandler(this, &frmAutomata::btnTask3_Click);
			// 
			// btnTask4
			// 
			this->btnTask4->Location = System::Drawing::Point(68, 185);
			this->btnTask4->Name = L"btnTask4";
			this->btnTask4->Size = System::Drawing::Size(75, 23);
			this->btnTask4->TabIndex = 3;
			this->btnTask4->Text = L"Task4";
			this->btnTask4->UseVisualStyleBackColor = true;
			// 
			// frmAutomata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 407);
			this->Controls->Add(this->btnTask4);
			this->Controls->Add(this->btnTask3);
			this->Controls->Add(this->btnTask2);
			this->Controls->Add(this->btnTask1);
			this->Name = L"frmAutomata";
			this->Text = L"frmAutomata";
			this->Load += gcnew System::EventHandler(this, &frmAutomata::frmAutomata_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnTask3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void frmAutomata_Load(System::Object^ sender, System::EventArgs^ e) {
	RobotXController::PuntoController^ objGestorPunto = gcnew PuntoController();
	double distancia = (this->objGestorConexion->RecibirPuntos_Distancia(objGestorPunto,this->objGestorConexion->sClient))/1000;
	this->objGestorConexion->EnviarDatos(Convert::ToString(distancia), this->objGestorConexion->sClient);
}
};
}
