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
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Button^ btnManual;
	private: System::Windows::Forms::Button^ btnAutonomo;
	private: System::Windows::Forms::Label^ lblLatitud;
	private: System::Windows::Forms::Label^ lblLongitud;
	private: System::Windows::Forms::TextBox^ txtLatitud;
	private: System::Windows::Forms::TextBox^ txtLongitud;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(863, 73);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnManual
			// 
			this->btnManual->Location = System::Drawing::Point(73, 430);
			this->btnManual->Name = L"btnManual";
			this->btnManual->Size = System::Drawing::Size(75, 23);
			this->btnManual->TabIndex = 1;
			this->btnManual->Text = L"Manual";
			this->btnManual->UseVisualStyleBackColor = true;
			this->btnManual->Click += gcnew System::EventHandler(this, &frmInicio::btnManual_Click);
			// 
			// btnAutonomo
			// 
			this->btnAutonomo->Location = System::Drawing::Point(236, 430);
			this->btnAutonomo->Name = L"btnAutonomo";
			this->btnAutonomo->Size = System::Drawing::Size(87, 23);
			this->btnAutonomo->TabIndex = 2;
			this->btnAutonomo->Text = L"Autonomo";
			this->btnAutonomo->UseVisualStyleBackColor = true;
			this->btnAutonomo->Click += gcnew System::EventHandler(this, &frmInicio::btnAutonomo_Click);
			// 
			// lblLatitud
			// 
			this->lblLatitud->AutoSize = true;
			this->lblLatitud->Location = System::Drawing::Point(503, 283);
			this->lblLatitud->Name = L"lblLatitud";
			this->lblLatitud->Size = System::Drawing::Size(55, 17);
			this->lblLatitud->TabIndex = 3;
			this->lblLatitud->Text = L"Latitud:";
			// 
			// lblLongitud
			// 
			this->lblLongitud->AutoSize = true;
			this->lblLongitud->Location = System::Drawing::Point(503, 317);
			this->lblLongitud->Name = L"lblLongitud";
			this->lblLongitud->Size = System::Drawing::Size(67, 17);
			this->lblLongitud->TabIndex = 4;
			this->lblLongitud->Text = L"Longitud:";
			// 
			// txtLatitud
			// 
			this->txtLatitud->Location = System::Drawing::Point(578, 278);
			this->txtLatitud->Name = L"txtLatitud";
			this->txtLatitud->Size = System::Drawing::Size(100, 22);
			this->txtLatitud->TabIndex = 5;
			// 
			// txtLongitud
			// 
			this->txtLongitud->Location = System::Drawing::Point(578, 317);
			this->txtLongitud->Name = L"txtLongitud";
			this->txtLongitud->Size = System::Drawing::Size(100, 22);
			this->txtLongitud->TabIndex = 6;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(42, 278);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(129, 132);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(215, 278);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(129, 132);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(42, 106);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(164, 73);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(462, 129);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(160, 73);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(532, 170);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(90, 22);
			this->textBox1->TabIndex = 13;
			// 
			// frmInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(862, 530);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox5);
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
			this->Name = L"frmInicio";
			this->Text = L"frmInicio";
			this->Load += gcnew System::EventHandler(this, &frmInicio::frmInicio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnManual_Click(System::Object^ sender, System::EventArgs^ e) {
		frmManual^ ventanaManual = gcnew frmManual();
		ventanaManual->ShowDialog();
	}
private: System::Void btnAutonomo_Click(System::Object^ sender, System::EventArgs^ e) {
	frmAutomata^ ventanaAutomata = gcnew frmAutomata();
	ventanaAutomata->ShowDialog();
}
private: System::Void frmInicio_Load(System::Object^ sender, System::EventArgs^ e) {
	this->pictureBox1->Image = Image::FromFile("Banner.jpg");
	this->pictureBox2->Image = gcnew Bitmap("Manual.png"); 
	this->pictureBox3->Image = gcnew Bitmap("Autonomo.png");

}
};
}