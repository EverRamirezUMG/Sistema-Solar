#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

namespace SistemaSolar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Mostrar
	/// </summary>
	public ref class Mostrar : public System::Windows::Forms::Form
	{
	public:
		Mostrar(void)
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
		~Mostrar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonMostrar;
	private: System::Windows::Forms::Button^  buttonSalir;
	protected:

	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  Nombre;
	private: System::Windows::Forms::ColumnHeader^  Apellido;
	private: System::Windows::Forms::ColumnHeader^  Grado;
	private: System::Windows::Forms::ColumnHeader^  Seccion;
	private: System::Windows::Forms::ColumnHeader^  Clave;
	private: System::Windows::Forms::ColumnHeader^  Punteo;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Mostrar::typeid));
			this->buttonMostrar = (gcnew System::Windows::Forms::Button());
			this->buttonSalir = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Apellido = (gcnew System::Windows::Forms::ColumnHeader());
			this->Grado = (gcnew System::Windows::Forms::ColumnHeader());
			this->Seccion = (gcnew System::Windows::Forms::ColumnHeader());
			this->Clave = (gcnew System::Windows::Forms::ColumnHeader());
			this->Punteo = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// buttonMostrar
			// 
			this->buttonMostrar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMostrar.BackgroundImage")));
			this->buttonMostrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonMostrar->Location = System::Drawing::Point(497, 586);
			this->buttonMostrar->Name = L"buttonMostrar";
			this->buttonMostrar->Size = System::Drawing::Size(90, 35);
			this->buttonMostrar->TabIndex = 3;
			this->buttonMostrar->UseVisualStyleBackColor = true;
			this->buttonMostrar->Click += gcnew System::EventHandler(this, &Mostrar::buttonMostrar_Click);
			// 
			// buttonSalir
			// 
			this->buttonSalir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSalir.BackgroundImage")));
			this->buttonSalir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonSalir->Location = System::Drawing::Point(650, 586);
			this->buttonSalir->Name = L"buttonSalir";
			this->buttonSalir->Size = System::Drawing::Size(90, 35);
			this->buttonSalir->TabIndex = 4;
			this->buttonSalir->UseVisualStyleBackColor = true;
			this->buttonSalir->Click += gcnew System::EventHandler(this, &Mostrar::buttonImprimir_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->Nombre, this->Apellido,
					this->Grado, this->Seccion, this->Clave, this->Punteo
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Samba", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listView1->Location = System::Drawing::Point(213, 165);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(772, 385);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Nombre
			// 
			this->Nombre->Text = L"Nombre";
			this->Nombre->Width = 200;
			// 
			// Apellido
			// 
			this->Apellido->Text = L"Apellido";
			this->Apellido->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Apellido->Width = 200;
			// 
			// Grado
			// 
			this->Grado->Text = L"Grado";
			this->Grado->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Grado->Width = 100;
			// 
			// Seccion
			// 
			this->Seccion->Text = L"Seccion";
			this->Seccion->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Seccion->Width = 85;
			// 
			// Clave
			// 
			this->Clave->Text = L"Clave";
			this->Clave->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Clave->Width = 85;
			// 
			// Punteo
			// 
			this->Punteo->Text = L"Punteo";
			this->Punteo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Punteo->Width = 100;
			// 
			// Mostrar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 676);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->buttonSalir);
			this->Controls->Add(this->buttonMostrar);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Mostrar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Resultados";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonMostrar_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 char mystring[100];
				 FILE *fe;
				 fe = fopen("info.txt", "r");
				 char cadena[50], *dato1, *dato2, *dato3, *dato4, *dato5, *dato6, *dato7;
				 rewind(fe);
				 listView1->Items->Clear();
				 bool found = false;
				 do{
					 fgets(mystring, 100, fe);
					 dato1 = strtok(mystring, ";");
					 dato2 = strtok(NULL, ";");
					 dato3 = strtok(NULL, ";");
					 dato4 = strtok(NULL, ";");
					 dato5 = strtok(NULL, ";");
					 dato6 = strtok(NULL, ";");
					 dato7 = strtok(NULL, ";");


					 String^srtNew1 = gcnew String(dato1);
					 String^srtNew2 = gcnew String(dato2);
					 String^srtNew3 = gcnew String(dato3);
					 String^srtNew4 = gcnew String(dato4);
					 String^srtNew5 = gcnew String(dato5);
					 String^srtNew6 = gcnew String(dato6);
					 String^srtNew7 = gcnew String(dato7);


					 ListViewItem^listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
					 listView1->SubItems->Add(srtNew2);
					 listView1->SubItems->Add(srtNew3);
					 listView1->SubItems->Add(srtNew4);
					 listView1->SubItems->Add(srtNew5);
					 listView1->SubItems->Add(srtNew6);
					 listView1->SubItems->Add(srtNew7);

					 this->listView1->Items->Add(listView1);


				 } while (feof(fe) == 0);

	}
private: System::Void buttonImprimir_Click(System::Object^  sender, System::EventArgs^  e) {
			 this, Close();
}
};
}
