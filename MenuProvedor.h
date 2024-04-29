#pragma once

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
	protected:
	private: System::Windows::Forms::Button^ gestionaGrups;
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
			this->gestionaGrups = (gcnew System::Windows::Forms::Button());
			this->gestionaPerfil = (gcnew System::Windows::Forms::Button());
			this->menuEstudiantt = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tancaSessio
			// 
			this->tancaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tancaSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->tancaSessio->Location = System::Drawing::Point(326, 331);
			this->tancaSessio->Name = L"tancaSessio";
			this->tancaSessio->Size = System::Drawing::Size(230, 66);
			this->tancaSessio->TabIndex = 12;
			this->tancaSessio->Text = L"Tancar Sessi\u00F3";
			this->tancaSessio->UseVisualStyleBackColor = true;
			// 
			// gestionaGrups
			// 
			this->gestionaGrups->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaGrups->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaGrups->Location = System::Drawing::Point(495, 168);
			this->gestionaGrups->Name = L"gestionaGrups";
			this->gestionaGrups->Size = System::Drawing::Size(230, 71);
			this->gestionaGrups->TabIndex = 11;
			this->gestionaGrups->Text = L"Gestionar Espais";
			this->gestionaGrups->UseVisualStyleBackColor = true;
			// 
			// gestionaPerfil
			// 
			this->gestionaPerfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaPerfil->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaPerfil->Location = System::Drawing::Point(162, 168);
			this->gestionaPerfil->Name = L"gestionaPerfil";
			this->gestionaPerfil->Size = System::Drawing::Size(230, 71);
			this->gestionaPerfil->TabIndex = 10;
			this->gestionaPerfil->Text = L"Gestionar Perfil";
			this->gestionaPerfil->UseVisualStyleBackColor = true;
			// 
			// menuEstudiantt
			// 
			this->menuEstudiantt->AutoSize = true;
			this->menuEstudiantt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->menuEstudiantt->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->menuEstudiantt->Location = System::Drawing::Point(230, 60);
			this->menuEstudiantt->Name = L"menuEstudiantt";
			this->menuEstudiantt->Size = System::Drawing::Size(420, 64);
			this->menuEstudiantt->TabIndex = 9;
			this->menuEstudiantt->Text = L"Men\u00fa Prove\u00efdor";
			this->menuEstudiantt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MenuProvedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 512);
			this->Controls->Add(this->tancaSessio);
			this->Controls->Add(this->gestionaGrups);
			this->Controls->Add(this->gestionaPerfil);
			this->Controls->Add(this->menuEstudiantt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MenuProvedor";
			this->Text = L"MenuProvedor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}