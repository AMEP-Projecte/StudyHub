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
			this->tancaSessio->Location = System::Drawing::Point(299, 294);
			this->tancaSessio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tancaSessio->Name = L"tancaSessio";
			this->tancaSessio->Size = System::Drawing::Size(204, 59);
			this->tancaSessio->TabIndex = 8;
			this->tancaSessio->Text = L"Tancar Sessi\u00f3";
			this->tancaSessio->UseVisualStyleBackColor = true;
			// 
			// gestionaGrups
			// 
			this->gestionaGrups->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaGrups->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaGrups->Location = System::Drawing::Point(449, 149);
			this->gestionaGrups->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gestionaGrups->Name = L"gestionaGrups";
			this->gestionaGrups->Size = System::Drawing::Size(204, 63);
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
			this->gestionaPerfil->Location = System::Drawing::Point(153, 149);
			this->gestionaPerfil->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gestionaPerfil->Name = L"gestionaPerfil";
			this->gestionaPerfil->Size = System::Drawing::Size(204, 63);
			this->gestionaPerfil->TabIndex = 6;
			this->gestionaPerfil->Text = L"Gestionar Prove\u00efdors";
			this->gestionaPerfil->UseVisualStyleBackColor = true;
			this->gestionaPerfil->Click += gcnew System::EventHandler(this, &MenuAdministrador::gestionaPerfil_Click);
			// 
			// menuEstudiantt
			// 
			this->menuEstudiantt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->menuEstudiantt->AutoSize = true;
			this->menuEstudiantt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->menuEstudiantt->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->menuEstudiantt->Location = System::Drawing::Point(168, 50);
			this->menuEstudiantt->Name = L"menuEstudiantt";
			this->menuEstudiantt->Size = System::Drawing::Size(443, 52);
			this->menuEstudiantt->TabIndex = 5;
			this->menuEstudiantt->Text = L"Men\u00fa Administrador";
			this->menuEstudiantt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MenuAdministrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->tancaSessio);
			this->Controls->Add(this->gestionaGrups);
			this->Controls->Add(this->gestionaPerfil);
			this->Controls->Add(this->menuEstudiantt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MenuAdministrador";
			this->Text = L"MenuAdministrador";
			this->Load += gcnew System::EventHandler(this, &MenuAdministrador::MenuAdministrador_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MenuAdministrador_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gestionaGrups_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
