#pragma once

#include <string.h> 
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Evaluacion.h"
#include "Sol.h"
#include "Mercurio.h"
#include "Venus.h"
#include "Tierra.h"
#include "Luna.h"
#include "Marte.h"
#include "Jupiter.h"
#include "Saturno.h"
#include "Urano.h"
#include "Neptuno.h"
#include "Halley.h"
#include "SistemaSolarDef.h"
//#include "Sistema Solar.h"

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
	/// Resumen de Interfaz0
	/// </summary>
	public ref class Interfaz0 : public System::Windows::Forms::Form
	{
	public:
		Interfaz0(void)
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
		~Interfaz0()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  buttonEvaluar;
	private: System::Windows::Forms::Button^  buttonSalir;
	private: System::Windows::Forms::PictureBox^  pictureBoxSol;

	private: System::Windows::Forms::PictureBox^  pictureBoxMercurio;

	private: System::Windows::Forms::PictureBox^  pictureBoxVenus;
	private: System::Windows::Forms::PictureBox^  pictureBoxTierra;
	private: System::Windows::Forms::PictureBox^  pictureBoxLuna;
	private: System::Windows::Forms::PictureBox^  pictureBoxMarte;
	private: System::Windows::Forms::PictureBox^  pictureBoxJupiter;
	private: System::Windows::Forms::PictureBox^  pictureBoxSaturno;
	private: System::Windows::Forms::PictureBox^  pictureBoxUrano;
	private: System::Windows::Forms::PictureBox^  pictureBoxNeptuno;
	private: System::Windows::Forms::PictureBox^  pictureBoxHalley;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Interfaz0::typeid));
			this->buttonEvaluar = (gcnew System::Windows::Forms::Button());
			this->buttonSalir = (gcnew System::Windows::Forms::Button());
			this->pictureBoxSol = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxMercurio = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxVenus = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTierra = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLuna = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxMarte = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxJupiter = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxSaturno = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxUrano = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxNeptuno = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxHalley = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSol))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxMercurio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxVenus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTierra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLuna))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxMarte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxJupiter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSaturno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUrano))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNeptuno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxHalley))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonEvaluar
			// 
			this->buttonEvaluar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonEvaluar.BackgroundImage")));
			this->buttonEvaluar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonEvaluar->Location = System::Drawing::Point(457, 582);
			this->buttonEvaluar->Name = L"buttonEvaluar";
			this->buttonEvaluar->Size = System::Drawing::Size(90, 35);
			this->buttonEvaluar->TabIndex = 2;
			this->buttonEvaluar->UseVisualStyleBackColor = true;
			this->buttonEvaluar->Click += gcnew System::EventHandler(this, &Interfaz0::buttonEvaluar_Click);
			// 
			// buttonSalir
			// 
			this->buttonSalir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.BackgroundImage")));
			this->buttonSalir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonSalir->Location = System::Drawing::Point(605, 582);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(90, 35);
			this->buttonSalir->TabIndex = 3;
			this->buttonSalir->UseVisualStyleBackColor = true;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &Interfaz0::buttonSalir_Click);
			// 
			// pictureBoxSol
			// 
			this->pictureBoxSol->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxSol->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxSol.BackgroundImage")));
			this->pictureBoxSol->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxSol->Location = System::Drawing::Point(416, 231);
			this->pictureBoxSol->Name = L"pictureBoxSol";
			this->pictureBoxSol->Size = System::Drawing::Size(307, 235);
			this->pictureBoxSol->TabIndex = 4;
			this->pictureBoxSol->TabStop = false;
			this->pictureBoxSol->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBox1_Click);
			// 
			// pictureBoxMercurio
			// 
			this->pictureBoxMercurio->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxMercurio->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxMercurio.BackgroundImage")));
			this->pictureBoxMercurio->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxMercurio->Location = System::Drawing::Point(502, 165);
			this->pictureBoxMercurio->Name = L"pictureBoxMercurio";
			this->pictureBoxMercurio->Size = System::Drawing::Size(77, 60);
			this->pictureBoxMercurio->TabIndex = 5;
			this->pictureBoxMercurio->TabStop = false;
			this->pictureBoxMercurio->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxMercurio_Click);
			// 
			// pictureBoxVenus
			// 
			this->pictureBoxVenus->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxVenus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxVenus.BackgroundImage")));
			this->pictureBoxVenus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxVenus->Location = System::Drawing::Point(673, 153);
			this->pictureBoxVenus->Name = L"pictureBoxVenus";
			this->pictureBoxVenus->Size = System::Drawing::Size(81, 60);
			this->pictureBoxVenus->TabIndex = 6;
			this->pictureBoxVenus->TabStop = false;
			this->pictureBoxVenus->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxVenus_Click);
			// 
			// pictureBoxTierra
			// 
			this->pictureBoxTierra->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxTierra->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTierra.BackgroundImage")));
			this->pictureBoxTierra->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxTierra->Location = System::Drawing::Point(328, 314);
			this->pictureBoxTierra->Name = L"pictureBoxTierra";
			this->pictureBoxTierra->Size = System::Drawing::Size(82, 66);
			this->pictureBoxTierra->TabIndex = 7;
			this->pictureBoxTierra->TabStop = false;
			this->pictureBoxTierra->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxTierra_Click_1);
			// 
			// pictureBoxLuna
			// 
			this->pictureBoxLuna->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxLuna->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLuna.BackgroundImage")));
			this->pictureBoxLuna->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxLuna->Location = System::Drawing::Point(390, 268);
			this->pictureBoxLuna->Name = L"pictureBoxLuna";
			this->pictureBoxLuna->Size = System::Drawing::Size(51, 40);
			this->pictureBoxLuna->TabIndex = 8;
			this->pictureBoxLuna->TabStop = false;
			this->pictureBoxLuna->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxLuna_Click);
			// 
			// pictureBoxMarte
			// 
			this->pictureBoxMarte->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxMarte->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxMarte.BackgroundImage")));
			this->pictureBoxMarte->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxMarte->Location = System::Drawing::Point(796, 314);
			this->pictureBoxMarte->Name = L"pictureBoxMarte";
			this->pictureBoxMarte->Size = System::Drawing::Size(62, 46);
			this->pictureBoxMarte->TabIndex = 9;
			this->pictureBoxMarte->TabStop = false;
			this->pictureBoxMarte->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxMarte_Click);
			// 
			// pictureBoxJupiter
			// 
			this->pictureBoxJupiter->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxJupiter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxJupiter.BackgroundImage")));
			this->pictureBoxJupiter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxJupiter->Location = System::Drawing::Point(848, 434);
			this->pictureBoxJupiter->Name = L"pictureBoxJupiter";
			this->pictureBoxJupiter->Size = System::Drawing::Size(172, 127);
			this->pictureBoxJupiter->TabIndex = 10;
			this->pictureBoxJupiter->TabStop = false;
			this->pictureBoxJupiter->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxJupiter_Click_1);
			// 
			// pictureBoxSaturno
			// 
			this->pictureBoxSaturno->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxSaturno->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxSaturno.BackgroundImage")));
			this->pictureBoxSaturno->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxSaturno->Location = System::Drawing::Point(123, 434);
			this->pictureBoxSaturno->Name = L"pictureBoxSaturno";
			this->pictureBoxSaturno->Size = System::Drawing::Size(208, 161);
			this->pictureBoxSaturno->TabIndex = 11;
			this->pictureBoxSaturno->TabStop = false;
			this->pictureBoxSaturno->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxSaturno_Click);
			// 
			// pictureBoxUrano
			// 
			this->pictureBoxUrano->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxUrano->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxUrano.BackgroundImage")));
			this->pictureBoxUrano->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxUrano->Location = System::Drawing::Point(848, 71);
			this->pictureBoxUrano->Name = L"pictureBoxUrano";
			this->pictureBoxUrano->Size = System::Drawing::Size(134, 104);
			this->pictureBoxUrano->TabIndex = 12;
			this->pictureBoxUrano->TabStop = false;
			this->pictureBoxUrano->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxUrano_Click);
			// 
			// pictureBoxNeptuno
			// 
			this->pictureBoxNeptuno->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxNeptuno->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxNeptuno.BackgroundImage")));
			this->pictureBoxNeptuno->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxNeptuno->Location = System::Drawing::Point(123, 165);
			this->pictureBoxNeptuno->Name = L"pictureBoxNeptuno";
			this->pictureBoxNeptuno->Size = System::Drawing::Size(134, 104);
			this->pictureBoxNeptuno->TabIndex = 13;
			this->pictureBoxNeptuno->TabStop = false;
			this->pictureBoxNeptuno->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxNeptuno_Click);
			// 
			// pictureBoxHalley
			// 
			this->pictureBoxHalley->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxHalley->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxHalley.BackgroundImage")));
			this->pictureBoxHalley->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxHalley->Location = System::Drawing::Point(810, 208);
			this->pictureBoxHalley->Name = L"pictureBoxHalley";
			this->pictureBoxHalley->Size = System::Drawing::Size(154, 70);
			this->pictureBoxHalley->TabIndex = 14;
			this->pictureBoxHalley->TabStop = false;
			this->pictureBoxHalley->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBoxHalley_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(416, 491);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(321, 70);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Interfaz0::pictureBox1_Click_1);
			// 
			// Interfaz0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 676);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBoxHalley);
			this->Controls->Add(this->pictureBoxNeptuno);
			this->Controls->Add(this->pictureBoxUrano);
			this->Controls->Add(this->pictureBoxSaturno);
			this->Controls->Add(this->pictureBoxJupiter);
			this->Controls->Add(this->pictureBoxMarte);
			this->Controls->Add(this->pictureBoxLuna);
			this->Controls->Add(this->pictureBoxTierra);
			this->Controls->Add(this->pictureBoxVenus);
			this->Controls->Add(this->pictureBoxMercurio);
			this->Controls->Add(this->pictureBoxSol);
			this->Controls->Add(this->buttonSalir);
			this->Controls->Add(this->buttonEvaluar);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Interfaz0";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistema Solar";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSol))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxMercurio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxVenus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTierra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLuna))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxMarte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxJupiter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSaturno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUrano))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNeptuno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxHalley))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonSalir_Click(System::Object^  sender, System::EventArgs^  e) {
				 this, Close();
	}
	private: System::Void buttonEvaluar_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form ^ f = gcnew Evaluacion();
				 this->Hide();
				 f->ShowDialog();
				 this->Show();
	
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form ^ f = gcnew Sol();
				 this->Hide();
				 f->ShowDialog();
				 this->Show();
	
	}
private: System::Void pictureBoxMercurio_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Mercurio();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void pictureBoxVenus_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Venus();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
/*private: System::Void pictureBoxTierra_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Tierra();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}*/
private: System::Void pictureBoxLuna_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Luna();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void pictureBoxMarte_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Marte();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
/*private: System::Void pictureBoxJupiter_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Jupiter();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}*/
private: System::Void pictureBoxSaturno_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Saturno();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void pictureBoxUrano_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Urano();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void pictureBoxNeptuno_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Neptuno();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void pictureBoxHalley_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Halley();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void pictureBoxTierra_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Tierra();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void pictureBoxJupiter_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew Jupiter();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();
}
private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Form ^ f = gcnew SistemaSolarDef();
			 this->Hide();
			 f->ShowDialog();
			 this->Show();

}
};
}
