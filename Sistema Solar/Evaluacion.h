#pragma once

#include <string.h> 
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Mostrar.h"

namespace SistemaSolar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;

	/// <summary>
	/// Resumen de Evaluacion
	/// </summary>
	public ref class Evaluacion : public System::Windows::Forms::Form
	{
	public:
		Evaluacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Evaluacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Nombre;
	private: System::Windows::Forms::TextBox^  Apellido;
	private: System::Windows::Forms::TextBox^  Grado;
	private: System::Windows::Forms::TextBox^  Seccion;
	protected:

	protected:



	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  preg1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  correct1;
	private: System::Windows::Forms::TextBox^  Clave;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  correct2;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  correct3;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  correct4;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  correct5;

	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  radioButton14;
	private: System::Windows::Forms::RadioButton^  radioButton15;
	private: System::Windows::Forms::RadioButton^  correct6;

	private: System::Windows::Forms::GroupBox^  groupBox7;


	private: System::Windows::Forms::RadioButton^  correct7;


	private: System::Windows::Forms::GroupBox^  groupBox8;



	private: System::Windows::Forms::RadioButton^  correct8;

	private: System::Windows::Forms::GroupBox^  groupBox9;


	private: System::Windows::Forms::RadioButton^  correct9;


	private: System::Windows::Forms::GroupBox^  groupBox10;

	private: System::Windows::Forms::RadioButton^  correct10;



	private: System::Windows::Forms::Button^  buttonEvaluar;
	private: System::Windows::Forms::Button^  buttonGuardar;
	private: System::Windows::Forms::Button^  buttonResultados;
	private: System::Windows::Forms::TextBox^  textBoxPunteo;
	private: System::Windows::Forms::RadioButton^  correct07;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RadioButton^  radioButton16;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::RadioButton^  radioButton18;
	private: System::Windows::Forms::RadioButton^  radioButton17;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RadioButton^  radioButton20;
	private: System::Windows::Forms::RadioButton^  radioButton19;
	private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label11;



	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Evaluacion::typeid));
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Apellido = (gcnew System::Windows::Forms::TextBox());
			this->Grado = (gcnew System::Windows::Forms::TextBox());
			this->Seccion = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->preg1 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->correct1 = (gcnew System::Windows::Forms::RadioButton());
			this->Clave = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->correct2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->correct3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->correct4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->correct5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->correct6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->correct07 = (gcnew System::Windows::Forms::RadioButton());
			this->correct7 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->correct8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->correct9 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->correct10 = (gcnew System::Windows::Forms::RadioButton());
			this->buttonEvaluar = (gcnew System::Windows::Forms::Button());
			this->buttonGuardar = (gcnew System::Windows::Forms::Button());
			this->buttonResultados = (gcnew System::Windows::Forms::Button());
			this->textBoxPunteo = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->SuspendLayout();
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(155, 59);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(213, 20);
			this->Nombre->TabIndex = 0;
			// 
			// Apellido
			// 
			this->Apellido->Location = System::Drawing::Point(156, 100);
			this->Apellido->Name = L"Apellido";
			this->Apellido->Size = System::Drawing::Size(211, 20);
			this->Apellido->TabIndex = 1;
			// 
			// Grado
			// 
			this->Grado->Location = System::Drawing::Point(486, 59);
			this->Grado->Name = L"Grado";
			this->Grado->Size = System::Drawing::Size(86, 20);
			this->Grado->TabIndex = 2;
			// 
			// Seccion
			// 
			this->Seccion->Location = System::Drawing::Point(501, 100);
			this->Seccion->Name = L"Seccion";
			this->Seccion->Size = System::Drawing::Size(45, 20);
			this->Seccion->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->preg1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->correct1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox1->Location = System::Drawing::Point(62, 194);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(235, 123);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1)";
			// 
			// preg1
			// 
			this->preg1->AutoSize = true;
			this->preg1->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->preg1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->preg1->Location = System::Drawing::Point(17, 26);
			this->preg1->Name = L"preg1";
			this->preg1->Size = System::Drawing::Size(166, 17);
			this->preg1->TabIndex = 3;
			this->preg1->Text = L"¿Que es el Sistema Solar\?";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"AngryBirds", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::Navy;
			this->radioButton3->Location = System::Drawing::Point(6, 96);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(146, 20);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"conjunto de galaxias";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"AngryBirds", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::Navy;
			this->radioButton2->Location = System::Drawing::Point(6, 76);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(184, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Es un conjunto de estrellas";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Evaluacion::radioButton2_CheckedChanged);
			// 
			// correct1
			// 
			this->correct1->AutoSize = true;
			this->correct1->Font = (gcnew System::Drawing::Font(L"AngryBirds", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct1->ForeColor = System::Drawing::Color::Navy;
			this->correct1->Location = System::Drawing::Point(6, 56);
			this->correct1->Name = L"correct1";
			this->correct1->Size = System::Drawing::Size(231, 19);
			this->correct1->TabIndex = 0;
			this->correct1->TabStop = true;
			this->correct1->Text = L"conjunto de planetas orbitando el Sol";
			this->correct1->UseVisualStyleBackColor = true;
			// 
			// Clave
			// 
			this->Clave->Location = System::Drawing::Point(670, 100);
			this->Clave->Name = L"Clave";
			this->Clave->Size = System::Drawing::Size(45, 20);
			this->Clave->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->correct2);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox2->Location = System::Drawing::Point(336, 194);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(233, 123);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"2)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"AngryBirds", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-3, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"¿Cuanto tarda el cometa Halley en dar ";
			this->label1->Click += gcnew System::EventHandler(this, &Evaluacion::label1_Click);
			// 
			// correct2
			// 
			this->correct2->AutoSize = true;
			this->correct2->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct2->ForeColor = System::Drawing::Color::Navy;
			this->correct2->Location = System::Drawing::Point(19, 96);
			this->correct2->Name = L"correct2";
			this->correct2->Size = System::Drawing::Size(73, 21);
			this->correct2->TabIndex = 2;
			this->correct2->TabStop = true;
			this->correct2->Text = L"75 años";
			this->correct2->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::Navy;
			this->radioButton4->Location = System::Drawing::Point(19, 76);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(84, 21);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"100 años";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"AngryBirds", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::Color::Navy;
			this->radioButton5->Location = System::Drawing::Point(19, 56);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(84, 22);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"150 años";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Controls->Add(this->correct3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox3->Location = System::Drawing::Point(611, 194);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(233, 123);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"2)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"AngryBirds", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"¿De qué está formado Júpiter\?";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::Navy;
			this->radioButton1->Location = System::Drawing::Point(19, 96);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(132, 21);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Carbón y hierero";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton6->ForeColor = System::Drawing::Color::Navy;
			this->radioButton6->Location = System::Drawing::Point(19, 76);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(119, 21);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Azúcar y aceite";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// correct3
			// 
			this->correct3->AutoSize = true;
			this->correct3->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct3->ForeColor = System::Drawing::Color::Navy;
			this->correct3->Location = System::Drawing::Point(19, 56);
			this->correct3->Name = L"correct3";
			this->correct3->Size = System::Drawing::Size(137, 21);
			this->correct3->TabIndex = 0;
			this->correct3->TabStop = true;
			this->correct3->Text = L"Hidrógeno y helio";
			this->correct3->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Controls->Add(this->radioButton9);
			this->groupBox4->Controls->Add(this->correct4);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox4->Location = System::Drawing::Point(887, 194);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(233, 123);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"2)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"AngryBirds", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-3, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(242, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"¿Cual es el satélite natural de la tierra\?";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton8->ForeColor = System::Drawing::Color::Navy;
			this->radioButton8->Location = System::Drawing::Point(19, 96);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(67, 21);
			this->radioButton8->TabIndex = 2;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Halley";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton9->ForeColor = System::Drawing::Color::Navy;
			this->radioButton9->Location = System::Drawing::Point(19, 76);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(60, 21);
			this->radioButton9->TabIndex = 1;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Ceres";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// correct4
			// 
			this->correct4->AutoSize = true;
			this->correct4->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct4->ForeColor = System::Drawing::Color::Navy;
			this->correct4->Location = System::Drawing::Point(19, 56);
			this->correct4->Name = L"correct4";
			this->correct4->Size = System::Drawing::Size(71, 21);
			this->correct4->TabIndex = 0;
			this->correct4->TabStop = true;
			this->correct4->Text = L"La Luna";
			this->correct4->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->correct5);
			this->groupBox5->Controls->Add(this->radioButton12);
			this->groupBox5->Controls->Add(this->radioButton13);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox5->Location = System::Drawing::Point(62, 346);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(233, 123);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"2)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(234, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"¿Porqué  Marte se ve de color rojo\?";
			this->label4->Click += gcnew System::EventHandler(this, &Evaluacion::label4_Click);
			// 
			// correct5
			// 
			this->correct5->AutoSize = true;
			this->correct5->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct5->ForeColor = System::Drawing::Color::Navy;
			this->correct5->Location = System::Drawing::Point(19, 96);
			this->correct5->Name = L"correct5";
			this->correct5->Size = System::Drawing::Size(163, 21);
			this->correct5->TabIndex = 2;
			this->correct5->TabStop = true;
			this->correct5->Text = L"por el óxido de hierro";
			this->correct5->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton12->ForeColor = System::Drawing::Color::Navy;
			this->radioButton12->Location = System::Drawing::Point(19, 76);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(182, 21);
			this->radioButton12->TabIndex = 1;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"porque esta lejos del Sol";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton13->ForeColor = System::Drawing::Color::Navy;
			this->radioButton13->Location = System::Drawing::Point(19, 56);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(167, 21);
			this->radioButton13->TabIndex = 0;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Por falta de atmosfera";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::Transparent;
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Controls->Add(this->radioButton14);
			this->groupBox6->Controls->Add(this->radioButton15);
			this->groupBox6->Controls->Add(this->correct6);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox6->Location = System::Drawing::Point(336, 346);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(233, 123);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"AngryBirds", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 15);
			this->label5->TabIndex = 3;
			this->label5->Text = L"¿Cúal es el planeta más pequeño de todos\?";
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton14->ForeColor = System::Drawing::Color::Navy;
			this->radioButton14->Location = System::Drawing::Point(19, 96);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(63, 21);
			this->radioButton14->TabIndex = 2;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"Venus";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton15->ForeColor = System::Drawing::Color::Navy;
			this->radioButton15->Location = System::Drawing::Point(19, 76);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(65, 21);
			this->radioButton15->TabIndex = 1;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"Marte";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// correct6
			// 
			this->correct6->AutoSize = true;
			this->correct6->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct6->ForeColor = System::Drawing::Color::Navy;
			this->correct6->Location = System::Drawing::Point(19, 56);
			this->correct6->Name = L"correct6";
			this->correct6->Size = System::Drawing::Size(85, 21);
			this->correct6->TabIndex = 0;
			this->correct6->TabStop = true;
			this->correct6->Text = L"Mercurio";
			this->correct6->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::Transparent;
			this->groupBox7->Controls->Add(this->label11);
			this->groupBox7->Controls->Add(this->radioButton10);
			this->groupBox7->Controls->Add(this->radioButton7);
			this->groupBox7->Controls->Add(this->label6);
			this->groupBox7->Controls->Add(this->correct07);
			this->groupBox7->Controls->Add(this->correct7);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox7->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox7->Location = System::Drawing::Point(611, 346);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(233, 123);
			this->groupBox7->TabIndex = 6;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"2)";
			// 
			// correct07
			// 
			this->correct07->AutoSize = true;
			this->correct07->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct07->ForeColor = System::Drawing::Color::Navy;
			this->correct07->Location = System::Drawing::Point(20, 58);
			this->correct07->Name = L"correct07";
			this->correct07->Size = System::Drawing::Size(78, 21);
			this->correct07->TabIndex = 5;
			this->correct07->TabStop = true;
			this->correct07->Text = L"Neptuno";
			this->correct07->UseVisualStyleBackColor = true;
			// 
			// correct7
			// 
			this->correct7->Location = System::Drawing::Point(0, 0);
			this->correct7->Name = L"correct7";
			this->correct7->Size = System::Drawing::Size(104, 24);
			this->correct7->TabIndex = 4;
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::Color::Transparent;
			this->groupBox8->Controls->Add(this->radioButton16);
			this->groupBox8->Controls->Add(this->radioButton11);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->correct8);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox8->Location = System::Drawing::Point(887, 346);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(233, 123);
			this->groupBox8->TabIndex = 6;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"2)";
			// 
			// correct8
			// 
			this->correct8->AutoSize = true;
			this->correct8->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct8->ForeColor = System::Drawing::Color::Navy;
			this->correct8->Location = System::Drawing::Point(19, 56);
			this->correct8->Name = L"correct8";
			this->correct8->Size = System::Drawing::Size(65, 21);
			this->correct8->TabIndex = 0;
			this->correct8->TabStop = true;
			this->correct8->Text = L"-224°C";
			this->correct8->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::Color::Transparent;
			this->groupBox9->Controls->Add(this->radioButton18);
			this->groupBox9->Controls->Add(this->radioButton17);
			this->groupBox9->Controls->Add(this->label8);
			this->groupBox9->Controls->Add(this->correct9);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox9->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox9->Location = System::Drawing::Point(62, 496);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(233, 123);
			this->groupBox9->TabIndex = 6;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"2)";
			// 
			// correct9
			// 
			this->correct9->AutoSize = true;
			this->correct9->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct9->ForeColor = System::Drawing::Color::Navy;
			this->correct9->Location = System::Drawing::Point(19, 74);
			this->correct9->Name = L"correct9";
			this->correct9->Size = System::Drawing::Size(78, 21);
			this->correct9->TabIndex = 1;
			this->correct9->TabStop = true;
			this->correct9->Text = L"Saturno";
			this->correct9->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->BackColor = System::Drawing::Color::Transparent;
			this->groupBox10->Controls->Add(this->radioButton20);
			this->groupBox10->Controls->Add(this->radioButton19);
			this->groupBox10->Controls->Add(this->label9);
			this->groupBox10->Controls->Add(this->correct10);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"Samba", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox10->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox10->Location = System::Drawing::Point(336, 496);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(233, 123);
			this->groupBox10->TabIndex = 6;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"2)";
			// 
			// correct10
			// 
			this->correct10->AutoSize = true;
			this->correct10->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->correct10->ForeColor = System::Drawing::Color::Navy;
			this->correct10->Location = System::Drawing::Point(19, 96);
			this->correct10->Name = L"correct10";
			this->correct10->Size = System::Drawing::Size(106, 21);
			this->correct10->TabIndex = 2;
			this->correct10->TabStop = true;
			this->correct10->Text = L"Una estrella";
			this->correct10->UseVisualStyleBackColor = true;
			// 
			// buttonEvaluar
			// 
			this->buttonEvaluar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonEvaluar.BackgroundImage")));
			this->buttonEvaluar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonEvaluar->Location = System::Drawing::Point(660, 550);
			this->buttonEvaluar->Name = L"buttonEvaluar";
			this->buttonEvaluar->Size = System::Drawing::Size(90, 35);
			this->buttonEvaluar->TabIndex = 7;
			this->buttonEvaluar->UseVisualStyleBackColor = true;
			this->buttonEvaluar->Click += gcnew System::EventHandler(this, &Evaluacion::buttonEvaluar_Click);
			// 
			// buttonGuardar
			// 
			this->buttonGuardar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGuardar.BackgroundImage")));
			this->buttonGuardar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonGuardar->Location = System::Drawing::Point(800, 550);
			this->buttonGuardar->Name = L"buttonGuardar";
			this->buttonGuardar->Size = System::Drawing::Size(90, 35);
			this->buttonGuardar->TabIndex = 8;
			this->buttonGuardar->UseVisualStyleBackColor = true;
			this->buttonGuardar->Click += gcnew System::EventHandler(this, &Evaluacion::buttonGuardar_Click);
			// 
			// buttonResultados
			// 
			this->buttonResultados->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonResultados.BackgroundImage")));
			this->buttonResultados->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonResultados->Location = System::Drawing::Point(935, 550);
			this->buttonResultados->Name = L"buttonResultados";
			this->buttonResultados->Size = System::Drawing::Size(90, 35);
			this->buttonResultados->TabIndex = 9;
			this->buttonResultados->UseVisualStyleBackColor = true;
			this->buttonResultados->Click += gcnew System::EventHandler(this, &Evaluacion::buttonResultados_Click);
			// 
			// textBoxPunteo
			// 
			this->textBoxPunteo->Location = System::Drawing::Point(1001, 100);
			this->textBoxPunteo->Multiline = true;
			this->textBoxPunteo->Name = L"textBoxPunteo";
			this->textBoxPunteo->Size = System::Drawing::Size(49, 30);
			this->textBoxPunteo->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"AngryBirds", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(6, 38);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(183, 16);
			this->label10->TabIndex = 4;
			this->label10->Text = L"una vuelta al rededor del sol\?";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"AngryBirds", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-3, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(224, 15);
			this->label6->TabIndex = 6;
			this->label6->Text = L"¿Cúal es el planeta que tiene los vientos ";
			this->label6->Click += gcnew System::EventHandler(this, &Evaluacion::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"AngryBirds", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(182, 15);
			this->label7->TabIndex = 4;
			this->label7->Text = L"La temperatura de urano es de....";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"AngryBirds", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(208, 15);
			this->label8->TabIndex = 4;
			this->label8->Text = L"¿Cúal es el planeta que posee anillos\?";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"AngryBirds", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 15);
			this->label9->TabIndex = 4;
			this->label9->Text = L"¿Qué es el Sol\?";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton7->ForeColor = System::Drawing::Color::Navy;
			this->radioButton7->Location = System::Drawing::Point(20, 78);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(73, 21);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Júpiter";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton10->ForeColor = System::Drawing::Color::Navy;
			this->radioButton10->Location = System::Drawing::Point(20, 96);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(78, 21);
			this->radioButton10->TabIndex = 8;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Saturno";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton11->ForeColor = System::Drawing::Color::Navy;
			this->radioButton11->Location = System::Drawing::Point(19, 76);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(59, 21);
			this->radioButton11->TabIndex = 8;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"-64°C";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton16->ForeColor = System::Drawing::Color::Navy;
			this->radioButton16->Location = System::Drawing::Point(19, 96);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(61, 21);
			this->radioButton16->TabIndex = 9;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"150°C";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton17->ForeColor = System::Drawing::Color::Navy;
			this->radioButton17->Location = System::Drawing::Point(19, 49);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(66, 21);
			this->radioButton17->TabIndex = 8;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"Tierra";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton18->ForeColor = System::Drawing::Color::Navy;
			this->radioButton18->Location = System::Drawing::Point(19, 96);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(63, 21);
			this->radioButton18->TabIndex = 9;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"Venus";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton19->ForeColor = System::Drawing::Color::Navy;
			this->radioButton19->Location = System::Drawing::Point(19, 49);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(93, 21);
			this->radioButton19->TabIndex = 8;
			this->radioButton19->TabStop = true;
			this->radioButton19->Text = L"Un planeta";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Font = (gcnew System::Drawing::Font(L"AngryBirds", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton20->ForeColor = System::Drawing::Color::Navy;
			this->radioButton20->Location = System::Drawing::Point(19, 71);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(88, 21);
			this->radioButton20->TabIndex = 9;
			this->radioButton20->TabStop = true;
			this->radioButton20->Text = L"Un cometa";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"AngryBirds", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(28, 37);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(174, 15);
			this->label11->TabIndex = 9;
			this->label11->Text = L"más fuertes del Sistema solar\?";
			// 
			// Evaluacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 676);
			this->Controls->Add(this->textBoxPunteo);
			this->Controls->Add(this->buttonResultados);
			this->Controls->Add(this->buttonGuardar);
			this->Controls->Add(this->buttonEvaluar);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Clave);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Seccion);
			this->Controls->Add(this->Grado);
			this->Controls->Add(this->Apellido);
			this->Controls->Add(this->Nombre);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Evaluacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Evaluacion";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int punteo;
	private: System::Void Evaluacion_Load(System::Object^  sender, System::EventArgs^  e) {
				 System::Drawing::Rectangle workingRectangle = Screen::PrimaryScreen->WorkingArea;
				 this->Size = System::Drawing::Size(workingRectangle.Width - 5, workingRectangle.Height - 5);
				 this->Location = System::Drawing::Point(5, 5);
	}
private: System::Void buttonEvaluar_Click(System::Object^  sender, System::EventArgs^  e) {
			 punteo = 0;
			 if (correct1->Checked){
				 correct1->Checked = true;
				 punteo++;
			 } if (correct2->Checked){
				 correct2->Checked = true;
				 punteo++;
			 } if (correct3->Checked){
				 correct3->Checked = true;
				 punteo++;
			 } if (correct4->Checked){
				 correct4->Checked = true;
				 punteo++;
			 } if (correct5->Checked){
				 correct5->Checked = true;
				 punteo++;
			 }if (correct6->Checked){
				 correct6->Checked = true;
				 punteo++;
			 }if (correct07->Checked){
				 correct07->Checked = true;
				 punteo++;
			 }if (correct8->Checked){
				 correct8->Checked = true;
				 punteo++;
			 }if (correct9->Checked){
				 correct9->Checked = true;
				 punteo++;
			 }if (correct10->Checked){
				 correct10->Checked = true;
				 punteo++;
			 }
			 this->textBoxPunteo->Text = this->textBoxPunteo->Text + punteo;
}
private: System::Void buttonGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamWriter^datos = gcnew StreamWriter("info.txt", "a+");

			 if (Nombre->Text == " ")
			 {
				 MessageBox::Show("Debes escribir tu  Nombre...", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else if (Apellido->Text == " ")
			 {
				 MessageBox::Show("Debes escribir tu Apellido...", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else if (Grado->Text == " ")
			 {
				 MessageBox::Show("Debes escribir tu Grado...", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else if (Seccion->Text == " ")
			 {
				 MessageBox::Show("Debes escribir tu Seccion...", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else if (Clave->Text == " ")
			 {
				 MessageBox::Show("Debes escribir tu clave...", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else {
				 datos->Write("\r\n");
				 datos->Write(Nombre->Text); datos->Write(";");
				 datos->Write(Apellido->Text); datos->Write(";");
				 datos->Write(Grado->Text); datos->Write(";");
				 datos->Write(Seccion->Text); datos->Write(";");
				 datos->Write(Clave->Text); datos->Write(";");
				 datos->Write(textBoxPunteo->Text); datos->Write(";");
				 datos->Write("A");


				 this->Nombre->Text = L""; this->Apellido->Text = ""; this->Grado->Text = ""; this->Seccion->Text = ""; this->Clave->Text = "";
				 this->textBoxPunteo->Text = "";
				 MessageBox::Show("HAZ INGRESADO CORRECTAMENTE....", "DATOS ALUMNO", MessageBoxButtons::OK, MessageBoxIcon::Information);

			 }
			 datos->Close();

}


private: System::Void buttonResultados_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Mostrar();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
