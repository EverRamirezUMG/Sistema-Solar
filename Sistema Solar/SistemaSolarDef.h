#pragma once

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
	/// Resumen de SistemaSolarDef
	/// </summary>
	public ref class SistemaSolarDef : public System::Windows::Forms::Form
	{
	public:
		SistemaSolarDef(void)
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
		~SistemaSolarDef()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonVoler;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SistemaSolarDef::typeid));
			this->buttonVoler = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonVoler
			// 
			this->buttonVoler->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonVoler.BackgroundImage")));
			this->buttonVoler->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonVoler->Location = System::Drawing::Point(550, 600);
			this->buttonVoler->Name = L"buttonVoler";
			this->buttonVoler->Size = System::Drawing::Size(90, 35);
			this->buttonVoler->TabIndex = 3;
			this->buttonVoler->UseVisualStyleBackColor = true;
			this->buttonVoler->Click += gcnew System::EventHandler(this, &SistemaSolarDef::buttonVoler_Click);
			// 
			// SistemaSolarDef
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 676);
			this->Controls->Add(this->buttonVoler);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"SistemaSolarDef";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SistemaSolarDef";
			this->Load += gcnew System::EventHandler(this, &SistemaSolarDef::SistemaSolarDef_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonVoler_Click(System::Object^  sender, System::EventArgs^  e) {
				 this, Close();
	}
	private: System::Void SistemaSolarDef_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
