#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuAdministrador
	/// </summary>
	public ref class MenuAdministrador : public System::Windows::Forms::Form
	{
	public:
		MenuAdministrador(void)
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
		~MenuAdministrador()
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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ labelEspais;
	private: System::Windows::Forms::Label^ labelGrups;
	private: System::Windows::Forms::Label^ labelEstudiants;
	private: System::Windows::Forms::Label^ labelNumEspais;
	private: System::Windows::Forms::Label^ labelNumGrups;
	private: System::Windows::Forms::Label^ labelNumEstudiants;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelNumEspais = (gcnew System::Windows::Forms::Label());
			this->labelNumGrups = (gcnew System::Windows::Forms::Label());
			this->labelNumEstudiants = (gcnew System::Windows::Forms::Label());
			this->labelEspais = (gcnew System::Windows::Forms::Label());
			this->labelGrups = (gcnew System::Windows::Forms::Label());
			this->labelEstudiants = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tancaSessio
			// 
			this->tancaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tancaSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->tancaSessio->Location = System::Drawing::Point(90, 257);
			this->tancaSessio->Margin = System::Windows::Forms::Padding(2);
			this->tancaSessio->Name = L"tancaSessio";
			this->tancaSessio->Size = System::Drawing::Size(153, 48);
			this->tancaSessio->TabIndex = 8;
			this->tancaSessio->Text = L"Tancar Sessi�";
			this->tancaSessio->UseVisualStyleBackColor = true;
			this->tancaSessio->Click += gcnew System::EventHandler(this, &MenuAdministrador::tancaSessio_Click);
			// 
			// gestionaGrups
			// 
			this->gestionaGrups->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaGrups->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaGrups->Location = System::Drawing::Point(90, 121);
			this->gestionaGrups->Margin = System::Windows::Forms::Padding(2);
			this->gestionaGrups->Name = L"gestionaGrups";
			this->gestionaGrups->Size = System::Drawing::Size(153, 51);
			this->gestionaGrups->TabIndex = 7;
			this->gestionaGrups->Text = L"Gestionar Estudiants";
			this->gestionaGrups->UseVisualStyleBackColor = true;
			this->gestionaGrups->Click += gcnew System::EventHandler(this, &MenuAdministrador::gestionaGrups_Click);
			// 
			// gestionaPerfil
			// 
			this->gestionaPerfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaPerfil->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaPerfil->Location = System::Drawing::Point(90, 188);
			this->gestionaPerfil->Margin = System::Windows::Forms::Padding(2);
			this->gestionaPerfil->Name = L"gestionaPerfil";
			this->gestionaPerfil->Size = System::Drawing::Size(153, 51);
			this->gestionaPerfil->TabIndex = 6;
			this->gestionaPerfil->Text = L"Gestionar Prove�dors";
			this->gestionaPerfil->UseVisualStyleBackColor = true;
			this->gestionaPerfil->Click += gcnew System::EventHandler(this, &MenuAdministrador::gestionaPerfil_Click);
			// 
			// menuEstudiantt
			// 
			this->menuEstudiantt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->menuEstudiantt->AutoSize = true;
			this->menuEstudiantt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->menuEstudiantt->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->menuEstudiantt->Location = System::Drawing::Point(126, 41);
			this->menuEstudiantt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->menuEstudiantt->Name = L"menuEstudiantt";
			this->menuEstudiantt->Size = System::Drawing::Size(354, 42);
			this->menuEstudiantt->TabIndex = 5;
			this->menuEstudiantt->Text = L"Men� Administrador";
			this->menuEstudiantt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->Controls->Add(this->labelNumEspais, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelNumGrups, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelNumEstudiants, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelEspais, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelGrups, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelEstudiants, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(248, 121);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(264, 184);
			this->tableLayoutPanel1->TabIndex = 9;
			// 
			// labelNumEspais
			// 
			this->labelNumEspais->AutoSize = true;
			this->labelNumEspais->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelNumEspais->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumEspais->ForeColor = System::Drawing::Color::White;
			this->labelNumEspais->Location = System::Drawing::Point(187, 122);
			this->labelNumEspais->Name = L"labelNumEspais";
			this->labelNumEspais->Size = System::Drawing::Size(74, 62);
			this->labelNumEspais->TabIndex = 7;
			this->labelNumEspais->Text = L"0";
			this->labelNumEspais->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelNumGrups
			// 
			this->labelNumGrups->AutoSize = true;
			this->labelNumGrups->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelNumGrups->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumGrups->ForeColor = System::Drawing::Color::White;
			this->labelNumGrups->Location = System::Drawing::Point(187, 61);
			this->labelNumGrups->Name = L"labelNumGrups";
			this->labelNumGrups->Size = System::Drawing::Size(74, 61);
			this->labelNumGrups->TabIndex = 6;
			this->labelNumGrups->Text = L"0";
			this->labelNumGrups->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelNumEstudiants
			// 
			this->labelNumEstudiants->AutoSize = true;
			this->labelNumEstudiants->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelNumEstudiants->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumEstudiants->ForeColor = System::Drawing::Color::White;
			this->labelNumEstudiants->Location = System::Drawing::Point(187, 0);
			this->labelNumEstudiants->Name = L"labelNumEstudiants";
			this->labelNumEstudiants->Size = System::Drawing::Size(74, 61);
			this->labelNumEstudiants->TabIndex = 5;
			this->labelNumEstudiants->Text = L"0";
			this->labelNumEstudiants->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelEspais
			// 
			this->labelEspais->AutoSize = true;
			this->labelEspais->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelEspais->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEspais->ForeColor = System::Drawing::Color::White;
			this->labelEspais->Location = System::Drawing::Point(3, 122);
			this->labelEspais->Name = L"labelEspais";
			this->labelEspais->Size = System::Drawing::Size(178, 62);
			this->labelEspais->TabIndex = 4;
			this->labelEspais->Text = L"N�mero d\'espais:";
			this->labelEspais->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelGrups
			// 
			this->labelGrups->AutoSize = true;
			this->labelGrups->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelGrups->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGrups->ForeColor = System::Drawing::Color::White;
			this->labelGrups->Location = System::Drawing::Point(3, 61);
			this->labelGrups->Name = L"labelGrups";
			this->labelGrups->Size = System::Drawing::Size(178, 61);
			this->labelGrups->TabIndex = 2;
			this->labelGrups->Text = L"N�mero de grups:";
			this->labelGrups->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelEstudiants
			// 
			this->labelEstudiants->AutoSize = true;
			this->labelEstudiants->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelEstudiants->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEstudiants->ForeColor = System::Drawing::Color::White;
			this->labelEstudiants->Location = System::Drawing::Point(3, 0);
			this->labelEstudiants->Name = L"labelEstudiants";
			this->labelEstudiants->Size = System::Drawing::Size(178, 61);
			this->labelEstudiants->TabIndex = 0;
			this->labelEstudiants->Text = L"N�mero d\'estudiants:";
			this->labelEstudiants->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tancaSessio);
			this->Controls->Add(this->gestionaGrups);
			this->Controls->Add(this->gestionaPerfil);
			this->Controls->Add(this->menuEstudiantt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuAdministrador";
			this->Text = L"MenuAdministrador";
			this->Load += gcnew System::EventHandler(this, &MenuAdministrador::MenuAdministrador_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MenuAdministrador_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void gestionaGrups_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void tancaSessio_Click(System::Object^ sender, System::EventArgs^ e);
};
}
