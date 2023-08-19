#pragma once

namespace SistemaSolar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Luna
	/// </summary>
	public ref class Luna : public System::Windows::Forms::Form
	{
	public:
		Luna(void)
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
		~Luna()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Tierra;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Luna::typeid));
			this->Tierra = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Tierra
			// 
			this->Tierra->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Tierra.BackgroundImage")));
			this->Tierra->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Tierra->Location = System::Drawing::Point(550, 620);
			this->Tierra->Name = L"Tierra";
			this->Tierra->Size = System::Drawing::Size(90, 35);
			this->Tierra->TabIndex = 2;
			this->Tierra->UseVisualStyleBackColor = true;
			this->Tierra->Click += gcnew System::EventHandler(this, &Luna::Tierra_Click);
			// 
			// Luna
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 676);
			this->Controls->Add(this->Tierra);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Luna";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Luna";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Tierra_Click(System::Object^  sender, System::EventArgs^  e) {
				 this, Close();
	}
	};
}
