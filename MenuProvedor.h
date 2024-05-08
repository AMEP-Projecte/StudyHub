#pragma once
#include "Sistema.h"
#include "PassarellaProveidor.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuProvedor
	/// </summary>
	public ref class MenuProvedor : public System::Windows::Forms::Form
	{
	public:
		MenuProvedor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuProvedor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ tancaSessio;
	private: System::Windows::Forms::Button^ gestionaEspais;


	protected:

	private: System::Windows::Forms::Button^ gestionaPerfil;
	private: System::Windows::Forms::Label^ menuEstudiantt;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tancaSessio = (gcnew System::Windows::Forms::Button());
			this->gestionaEspais = (gcnew System::Windows::Forms::Button());
			this->gestionaPerfil = (gcnew System::Windows::Forms::Button());
			this->menuEstudiantt = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tancaSessio
			// 
			this->tancaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tancaSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->tancaSessio->Location = System::Drawing::Point(289, 294);
			this->tancaSessio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tancaSessio->Name = L"tancaSessio";
			this->tancaSessio->Size = System::Drawing::Size(204, 59);
			this->tancaSessio->TabIndex = 12;
			this->tancaSessio->Text = L"Tancar Sessió";
			this->tancaSessio->UseVisualStyleBackColor = true;
			// 
			// gestionaEspais
			// 
			this->gestionaEspais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaEspais->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaEspais->Location = System::Drawing::Point(440, 149);
			this->gestionaEspais->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gestionaEspais->Name = L"gestionaEspais";
			this->gestionaEspais->Size = System::Drawing::Size(204, 63);
			this->gestionaEspais->TabIndex = 11;
			this->gestionaEspais->Text = L"Gestionar Espais";
			this->gestionaEspais->UseVisualStyleBackColor = true;
			this->gestionaEspais->Click += gcnew System::EventHandler(this, &MenuProvedor::gestionaEspais_Click);
			// 
			// gestionaPerfil
			// 
			this->gestionaPerfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaPerfil->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaPerfil->Location = System::Drawing::Point(144, 149);
			this->gestionaPerfil->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gestionaPerfil->Name = L"gestionaPerfil";
			this->gestionaPerfil->Size = System::Drawing::Size(204, 63);
			this->gestionaPerfil->TabIndex = 10;
			this->gestionaPerfil->Text = L"Gestionar Perfil";
			this->gestionaPerfil->UseVisualStyleBackColor = true;
			this->gestionaPerfil->Click += gcnew System::EventHandler(this, &MenuProvedor::gestionaPerfil_Click);
			// 
			// menuEstudiantt
			// 
			this->menuEstudiantt->AutoSize = true;
			this->menuEstudiantt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->menuEstudiantt->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->menuEstudiantt->Location = System::Drawing::Point(204, 53);
			this->menuEstudiantt->Name = L"menuEstudiantt";
			this->menuEstudiantt->Size = System::Drawing::Size(348, 52);
			this->menuEstudiantt->TabIndex = 9;
			this->menuEstudiantt->Text = L"Menu ProveÏdor";
			this->menuEstudiantt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MenuProvedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->tancaSessio);
			this->Controls->Add(this->gestionaEspais);
			this->Controls->Add(this->gestionaPerfil);
			this->Controls->Add(this->menuEstudiantt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MenuProvedor";
			this->Text = L"MenuProvedor";
			this->Load += gcnew System::EventHandler(this, &MenuProvedor::MenuProvedor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuProvedor_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void gestionaEspais_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
