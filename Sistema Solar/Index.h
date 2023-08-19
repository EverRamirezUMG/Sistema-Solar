#pragma once

#include <string.h> 
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Interfaz0.h"

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
	/// Resumen de Index
	/// </summary>
	public ref class Index : public System::Windows::Forms::Form
	{
	public:
		Index(void)
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
		~Index()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Iniciar;
	protected:
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Index::typeid));
			this->Iniciar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Iniciar
			// 
			this->Iniciar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Iniciar.BackgroundImage")));
			this->Iniciar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Iniciar->Location = System::Drawing::Point(503, 538);
			this->Iniciar->Name = L"Iniciar";
			this->Iniciar->Size = System::Drawing::Size(90, 35);
			this->Iniciar->TabIndex = 0;
			this->Iniciar->UseVisualStyleBackColor = true;
			this->Iniciar->Click += gcnew System::EventHandler(this, &Index::Iniciar_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(632, 538);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 35);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Index::button1_Click);
			// 
			// Index
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 676);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Iniciar);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Index";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistema Solar";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Iniciar_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form ^ f = gcnew Interfaz0();
				 this->Hide();
				 f->ShowDialog();
				 this->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this, Close();
	}
	};
}
