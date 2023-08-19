#pragma once
#include <string.h> 
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

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
	/// Resumen de Sol
	/// </summary>
	public ref class Sol : public System::Windows::Forms::Form
	{
	public:
		Sol(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~Sol()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonVolver;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Sol::typeid));
			this->buttonVolver = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonVolver
			// 
			this->buttonVolver->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonVolver.BackgroundImage")));
			this->buttonVolver->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonVolver->Location = System::Drawing::Point(547, 598);
			this->buttonVolver->Name = L"buttonVolver";
			this->buttonVolver->Size = System::Drawing::Size(90, 35);
			this->buttonVolver->TabIndex = 2;
			this->buttonVolver->UseVisualStyleBackColor = true;
			this->buttonVolver->Click += gcnew System::EventHandler(this, &Sol::buttonVolver_Click);
			// 
			// Sol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 676);
			this->Controls->Add(this->buttonVolver);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Sol";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sol";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonVolver_Click(System::Object^  sender, System::EventArgs^  e) {
				 this, Close();
	}
	};
}
