#pragma once

namespace SistemaSolar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Neptuno
	/// </summary>
	public ref class Neptuno : public System::Windows::Forms::Form
	{
	public:
		Neptuno(void)
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
		~Neptuno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Iniciar;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Neptuno::typeid));
			this->Iniciar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Iniciar
			// 
			this->Iniciar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Iniciar.BackgroundImage")));
			this->Iniciar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Iniciar->Location = System::Drawing::Point(550, 600);
			this->Iniciar->Name = L"Iniciar";
			this->Iniciar->Size = System::Drawing::Size(90, 35);
			this->Iniciar->TabIndex = 2;
			this->Iniciar->UseVisualStyleBackColor = true;
			this->Iniciar->Click += gcnew System::EventHandler(this, &Neptuno::Iniciar_Click);
			// 
			// Neptuno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 676);
			this->Controls->Add(this->Iniciar);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Neptuno";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Neptuno";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Iniciar_Click(System::Object^  sender, System::EventArgs^  e) {
				 this, Close();
	}
	};
}
