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

	private: System::Windows::Forms::Label^ menuProveidor;
	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Button^ editar;


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
			this->menuProveidor = (gcnew System::Windows::Forms::Label());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tancaSessio
			// 
			this->tancaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tancaSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->tancaSessio->Location = System::Drawing::Point(108, 188);
			this->tancaSessio->Margin = System::Windows::Forms::Padding(2);
			this->tancaSessio->Name = L"tancaSessio";
			this->tancaSessio->Size = System::Drawing::Size(153, 48);
			this->tancaSessio->TabIndex = 12;
			this->tancaSessio->Text = L"Tancar Sessi\u00F3";
			this->tancaSessio->UseVisualStyleBackColor = true;
			this->tancaSessio->Click += gcnew System::EventHandler(this, &MenuProvedor::tancaSessio_Click);
			// 
			// gestionaEspais
			// 
			this->gestionaEspais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaEspais->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaEspais->Location = System::Drawing::Point(108, 123);
			this->gestionaEspais->Margin = System::Windows::Forms::Padding(2);
			this->gestionaEspais->Name = L"gestionaEspais";
			this->gestionaEspais->Size = System::Drawing::Size(153, 51);
			this->gestionaEspais->TabIndex = 11;
			this->gestionaEspais->Text = L"Gestionar Espais";
			this->gestionaEspais->UseVisualStyleBackColor = true;
			this->gestionaEspais->Click += gcnew System::EventHandler(this, &MenuProvedor::gestionaEspais_Click);
			// 
			// menuProveidor
			// 
			this->menuProveidor->AutoSize = true;
			this->menuProveidor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->menuProveidor->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->menuProveidor->Location = System::Drawing::Point(153, 43);
			this->menuProveidor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->menuProveidor->Name = L"menuProveidor";
			this->menuProveidor->Size = System::Drawing::Size(280, 42);
			this->menuProveidor->TabIndex = 9;
			this->menuProveidor->Text = L"Men\u00Fa Prove\u00efdor";
			this->menuProveidor->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labelNom
			// 
			this->labelNom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelNom->Location = System::Drawing::Point(290, 148);
			this->labelNom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(64, 26);
			this->labelNom->TabIndex = 13;
			this->labelNom->Text = L"Nom:";
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelUsername->AutoSize = true;
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelUsername->Location = System::Drawing::Point(358, 151);
			this->labelUsername->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(91, 22);
			this->labelUsername->TabIndex = 14;
			this->labelUsername->Text = L"prove\u00efdor";
			// 
			// editar
			// 
			this->editar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editar->ForeColor = System::Drawing::Color::DarkCyan;
			this->editar->Location = System::Drawing::Point(295, 188);
			this->editar->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(154, 48);
			this->editar->TabIndex = 15;
			this->editar->Text = L"Canviar Contrasenya";
			this->editar->UseVisualStyleBackColor = true;
			this->editar->Click += gcnew System::EventHandler(this, &MenuProvedor::editar_Click);
			// 
			// MenuProvedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->editar);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->labelNom);
			this->Controls->Add(this->tancaSessio);
			this->Controls->Add(this->gestionaEspais);
			this->Controls->Add(this->menuProveidor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuProvedor";
			this->Text = L"MenuProvedor";
			this->Load += gcnew System::EventHandler(this, &MenuProvedor::MenuProvedor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuProvedor_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void gestionaEspais_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void tancaSessio_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void editar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
