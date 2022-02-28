#pragma once
#include <windows.h>

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
			//this->objGestorConexion = gcnew ConnectionController();
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
	private: ConnectionController^ objGestorConexion;
	private: System::Windows::Forms::Button^ btnTask2;
	private: System::Windows::Forms::Button^ btnTask3;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabInicio;
	private: System::Windows::Forms::TabPage^ tabTask1;
	private: System::Windows::Forms::TabPage^ tabTask2;
	private: System::Windows::Forms::TabPage^ tabTask3;





	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button1;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabInicio = (gcnew System::Windows::Forms::TabPage());
			this->tabTask1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabTask2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabTask3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabInicio->SuspendLayout();
			this->tabTask1->SuspendLayout();
			this->tabTask2->SuspendLayout();
			this->tabTask3->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnTask1
			// 
			this->btnTask1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTask1->Location = System::Drawing::Point(69, 31);
			this->btnTask1->Margin = System::Windows::Forms::Padding(2);
			this->btnTask1->Name = L"btnTask1";
			this->btnTask1->Size = System::Drawing::Size(201, 167);
			this->btnTask1->TabIndex = 0;
			this->btnTask1->Text = L"Task1";
			this->btnTask1->UseVisualStyleBackColor = true;
			this->btnTask1->Click += gcnew System::EventHandler(this, &frmAutomata::btnTask1_Click);
			// 
			// btnTask2
			// 
			this->btnTask2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTask2->Location = System::Drawing::Point(295, 31);
			this->btnTask2->Margin = System::Windows::Forms::Padding(2);
			this->btnTask2->Name = L"btnTask2";
			this->btnTask2->Size = System::Drawing::Size(201, 168);
			this->btnTask2->TabIndex = 1;
			this->btnTask2->Text = L"Task2";
			this->btnTask2->UseVisualStyleBackColor = true;
			this->btnTask2->Click += gcnew System::EventHandler(this, &frmAutomata::btnTask2_Click);
			// 
			// btnTask3
			// 
			this->btnTask3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTask3->Location = System::Drawing::Point(69, 218);
			this->btnTask3->Margin = System::Windows::Forms::Padding(2);
			this->btnTask3->Name = L"btnTask3";
			this->btnTask3->Size = System::Drawing::Size(201, 165);
			this->btnTask3->TabIndex = 2;
			this->btnTask3->Text = L"Task3";
			this->btnTask3->UseVisualStyleBackColor = true;
			this->btnTask3->Click += gcnew System::EventHandler(this, &frmAutomata::btnTask3_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabInicio);
			this->tabControl1->Controls->Add(this->tabTask1);
			this->tabControl1->Controls->Add(this->tabTask2);
			this->tabControl1->Controls->Add(this->tabTask3);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(618, 505);
			this->tabControl1->TabIndex = 4;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAutomata::tabControl1_SelectedIndexChanged);
			// 
			// tabInicio
			// 
			this->tabInicio->Controls->Add(this->btnTask1);
			this->tabInicio->Controls->Add(this->btnTask2);
			this->tabInicio->Controls->Add(this->btnTask3);
			this->tabInicio->Location = System::Drawing::Point(4, 22);
			this->tabInicio->Name = L"tabInicio";
			this->tabInicio->Padding = System::Windows::Forms::Padding(3);
			this->tabInicio->Size = System::Drawing::Size(610, 479);
			this->tabInicio->TabIndex = 0;
			this->tabInicio->Text = L"Inicio";
			this->tabInicio->UseVisualStyleBackColor = true;
			// 
			// tabTask1
			// 
			this->tabTask1->Controls->Add(this->button1);
			this->tabTask1->Controls->Add(this->textBox6);
			this->tabTask1->Controls->Add(this->textBox5);
			this->tabTask1->Controls->Add(this->textBox4);
			this->tabTask1->Controls->Add(this->textBox3);
			this->tabTask1->Controls->Add(this->textBox2);
			this->tabTask1->Controls->Add(this->textBox1);
			this->tabTask1->Controls->Add(this->label6);
			this->tabTask1->Controls->Add(this->label5);
			this->tabTask1->Controls->Add(this->label4);
			this->tabTask1->Controls->Add(this->label3);
			this->tabTask1->Controls->Add(this->label2);
			this->tabTask1->Controls->Add(this->label1);
			this->tabTask1->Location = System::Drawing::Point(4, 22);
			this->tabTask1->Name = L"tabTask1";
			this->tabTask1->Padding = System::Windows::Forms::Padding(3);
			this->tabTask1->Size = System::Drawing::Size(610, 479);
			this->tabTask1->TabIndex = 1;
			this->tabTask1->Text = L"Task 1";
			this->tabTask1->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(157, 290);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(140, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(158, 249);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(140, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(158, 207);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(140, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 168);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(140, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 127);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(140, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(73, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Checksum:";
			this->label6->Click += gcnew System::EventHandler(this, &frmAutomata::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(85, 249);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Finished:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(74, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"AEDT time:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(72, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"AEDT date:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(68, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Message ID:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tarea designada:";
			this->label1->Click += gcnew System::EventHandler(this, &frmAutomata::label1_Click);
			// 
			// tabTask2
			// 
			this->tabTask2->Controls->Add(this->textBox10);
			this->tabTask2->Controls->Add(this->textBox11);
			this->tabTask2->Controls->Add(this->textBox12);
			this->tabTask2->Controls->Add(this->textBox13);
			this->tabTask2->Controls->Add(this->textBox14);
			this->tabTask2->Controls->Add(this->textBox15);
			this->tabTask2->Controls->Add(this->textBox16);
			this->tabTask2->Controls->Add(this->textBox17);
			this->tabTask2->Controls->Add(this->textBox18);
			this->tabTask2->Controls->Add(this->label10);
			this->tabTask2->Controls->Add(this->label11);
			this->tabTask2->Controls->Add(this->label12);
			this->tabTask2->Controls->Add(this->label13);
			this->tabTask2->Controls->Add(this->label14);
			this->tabTask2->Controls->Add(this->label15);
			this->tabTask2->Controls->Add(this->label16);
			this->tabTask2->Controls->Add(this->label17);
			this->tabTask2->Controls->Add(this->label18);
			this->tabTask2->Location = System::Drawing::Point(4, 22);
			this->tabTask2->Name = L"tabTask2";
			this->tabTask2->Size = System::Drawing::Size(610, 479);
			this->tabTask2->TabIndex = 2;
			this->tabTask2->Text = L"Task 2";
			this->tabTask2->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(168, 382);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(140, 20);
			this->textBox10->TabIndex = 35;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(168, 337);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(140, 20);
			this->textBox11->TabIndex = 34;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(168, 295);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(140, 20);
			this->textBox12->TabIndex = 33;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(168, 258);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(140, 20);
			this->textBox13->TabIndex = 32;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(169, 217);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(140, 20);
			this->textBox14->TabIndex = 31;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(169, 175);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(140, 20);
			this->textBox15->TabIndex = 30;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(169, 136);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(140, 20);
			this->textBox16->TabIndex = 29;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(169, 95);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(140, 20);
			this->textBox17->TabIndex = 28;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(169, 60);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(140, 20);
			this->textBox18->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(81, 382);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 16);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Checksum:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(81, 338);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 16);
			this->label11->TabIndex = 25;
			this->label11->Text = L"3th Wildlife:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(78, 295);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 16);
			this->label12->TabIndex = 24;
			this->label12->Text = L"2nd Wildlife:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(84, 259);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(75, 16);
			this->label13->TabIndex = 23;
			this->label13->Text = L"1st Wildlife:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(96, 217);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(63, 16);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Team ID:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(85, 176);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(76, 16);
			this->label15->TabIndex = 21;
			this->label15->Text = L"AEDT time:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(83, 136);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(78, 16);
			this->label16->TabIndex = 20;
			this->label16->Text = L"AEDT date:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(79, 99);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(84, 16);
			this->label17->TabIndex = 19;
			this->label17->Text = L"Message ID:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(47, 61);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(116, 16);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Tarea designada:";
			// 
			// tabTask3
			// 
			this->tabTask3->Controls->Add(this->textBox8);
			this->tabTask3->Controls->Add(this->textBox9);
			this->tabTask3->Controls->Add(this->textBox19);
			this->tabTask3->Controls->Add(this->textBox20);
			this->tabTask3->Controls->Add(this->textBox21);
			this->tabTask3->Controls->Add(this->textBox22);
			this->tabTask3->Controls->Add(this->textBox23);
			this->tabTask3->Controls->Add(this->textBox24);
			this->tabTask3->Controls->Add(this->label8);
			this->tabTask3->Controls->Add(this->label9);
			this->tabTask3->Controls->Add(this->label19);
			this->tabTask3->Controls->Add(this->label20);
			this->tabTask3->Controls->Add(this->label21);
			this->tabTask3->Controls->Add(this->label22);
			this->tabTask3->Controls->Add(this->label23);
			this->tabTask3->Controls->Add(this->label24);
			this->tabTask3->Location = System::Drawing::Point(4, 22);
			this->tabTask3->Name = L"tabTask3";
			this->tabTask3->Size = System::Drawing::Size(610, 479);
			this->tabTask3->TabIndex = 3;
			this->tabTask3->Text = L"Task 3";
			this->tabTask3->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(161, 339);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(140, 20);
			this->textBox8->TabIndex = 52;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(161, 297);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(140, 20);
			this->textBox9->TabIndex = 51;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(161, 260);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(140, 20);
			this->textBox19->TabIndex = 50;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(162, 219);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(140, 20);
			this->textBox20->TabIndex = 49;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(162, 177);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(140, 20);
			this->textBox21->TabIndex = 48;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(162, 138);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(140, 20);
			this->textBox22->TabIndex = 47;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(162, 97);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(140, 20);
			this->textBox23->TabIndex = 46;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(162, 62);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(140, 20);
			this->textBox24->TabIndex = 45;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(74, 340);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 16);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Checksum:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(71, 297);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 16);
			this->label9->TabIndex = 42;
			this->label9->Text = L"AMS Status:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(105, 264);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(43, 16);
			this->label19->TabIndex = 41;
			this->label19->Text = L"Color:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(89, 219);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(63, 16);
			this->label20->TabIndex = 40;
			this->label20->Text = L"Team ID:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(78, 178);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(76, 16);
			this->label21->TabIndex = 39;
			this->label21->Text = L"AEDT time:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(76, 138);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(78, 16);
			this->label22->TabIndex = 38;
			this->label22->Text = L"AEDT date:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(72, 101);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(84, 16);
			this->label23->TabIndex = 37;
			this->label23->Text = L"Message ID:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(40, 63);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(116, 16);
			this->label24->TabIndex = 36;
			this->label24->Text = L"Tarea designada:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 43);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Empezar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAutomata::button1_Click);
			// 
			// frmAutomata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(627, 510);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"frmAutomata";
			this->Text = L"frmAutomata";
			this->Load += gcnew System::EventHandler(this, &frmAutomata::frmAutomata_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabInicio->ResumeLayout(false);
			this->tabTask1->ResumeLayout(false);
			this->tabTask1->PerformLayout();
			this->tabTask2->ResumeLayout(false);
			this->tabTask2->PerformLayout();
			this->tabTask3->ResumeLayout(false);
			this->tabTask3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnTask3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabControl1->SelectedTab = tabTask3;
		String^ CodigoTask3 = "$RXDOK";

		int valor = objGestorConexion->RealizarConexionSockets();

		if (objGestorConexion->Conexion != "") {
			objGestorConexion->EnviarDatos("task3 \n", objGestorConexion->sClient);
			//Sleep(500);
			//objGestorConexion->EnviarTeamID(CodigoTask3, objGestorConexion->sClient);
		}
		else
		{
			MessageBox::Show("Ingrese el ID asignado");
		}
	}
private: System::Void frmAutomata_Load(System::Object^ sender, System::EventArgs^ e) {
	objGestorConexion->EnviarDatos("automata \n", objGestorConexion->sClient);
	Sleep(200);
	//RobotXController::PuntoController^ objGestorPunto = gcnew PuntoController();
	//double distancia = (this->objGestorConexion->RecibirPuntos_Distancia(objGestorPunto,this->objGestorConexion->sClient))/1000;
	//this->objGestorConexion->EnviarDatos(Convert::ToString(distancia), this->objGestorConexion->sClient);
}
private: System::Void btnTask4_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnTask1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectedTab = tabTask1;
	String^ CodigoTask1 = "$RXPTH";

	int valor = objGestorConexion->RealizarConexionSockets();
	
	if (objGestorConexion->Conexion != "") {
		objGestorConexion->EnviarDatos("task1 \n", objGestorConexion->sClient);
		//Sleep(500);
		//objGestorConexion->EnviarTeamID(CodigoTask1, objGestorConexion->sClient);
	}
	else
	{
		MessageBox::Show("Ingrese el ID asignado");
	}
}
private: System::Void btnTask2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabControl1->SelectedTab = tabTask2;
	String^ CodigoTask2 = "$RXENC";

	int valor = objGestorConexion->RealizarConexionSockets();

	if (objGestorConexion->Conexion != "") {
		objGestorConexion->EnviarDatos("task2 \n", objGestorConexion->sClient);
		//Sleep(500);
		//objGestorConexion->EnviarTeamID(CodigoTask2, objGestorConexion->sClient);
	}
	else
	{
		MessageBox::Show("Ingrese el ID asignado");
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*int valor = objGestorConexion->RealizarConexionSockets();

	if (objGestorConexion->Conexion != "") {
		objGestorConexion->EnviarDatos("task2 \n", objGestorConexion->sClient);
		//Sleep(500);
		//objGestorConexion->EnviarTeamID(CodigoTask2, objGestorConexion->sClient);
	}
	else
	{
		MessageBox::Show("Ingrese el ID asignado");
	}*/
}
};
}
