#pragma once
#include "TxEditarEstudiant.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EditarEstudiant
	/// </summary>
	public ref class EditarEstudiant : public System::Windows::Forms::Form
	{
	public:
		EditarEstudiant(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EditarEstudiant()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Label^ editStudent;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ surnames;
	private: System::Windows::Forms::Label^ language;
	private: System::Windows::Forms::Label^ location;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::TextBox^ textSurnames;
	private: System::Windows::Forms::TextBox^ textLanguage;
	private: System::Windows::Forms::TextBox^ textLocation;
	private: System::Windows::Forms::TextBox^ textPassword;
	private: String^ nom;
	private: String^ cognoms;
	private: String^ idioma;
	private: String^ localitat;
	private: String^ contrasenya;



	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->editStudent = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->surnames = (gcnew System::Windows::Forms::Label());
			this->language = (gcnew System::Windows::Forms::Label());
			this->location = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textSurnames = (gcnew System::Windows::Forms::TextBox());
			this->textLanguage = (gcnew System::Windows::Forms::TextBox());
			this->textLocation = (gcnew System::Windows::Forms::TextBox());
			this->textPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::DarkCyan;
			this->cancel->Location = System::Drawing::Point(72, 266);
			this->cancel->Margin = System::Windows::Forms::Padding(2);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(109, 37);
			this->cancel->TabIndex = 1;
			this->cancel->Text = L"Tornar";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &EditarEstudiant::cancel_Click);
			// 
			// edit
			// 
			this->edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::Color::DarkCyan;
			this->edit->Location = System::Drawing::Point(386, 266);
			this->edit->Margin = System::Windows::Forms::Padding(2);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(109, 37);
			this->edit->TabIndex = 2;
			this->edit->Text = L"Editar";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &EditarEstudiant::edit_Click);
			// 
			// editStudent
			// 
			this->editStudent->AutoSize = true;
			this->editStudent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->editStudent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->editStudent->Location = System::Drawing::Point(155, 18);
			this->editStudent->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->editStudent->Name = L"editStudent";
			this->editStudent->Size = System::Drawing::Size(280, 42);
			this->editStudent->TabIndex = 3;
			this->editStudent->Text = L"Editar Estudiant:";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->name->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->name->Location = System::Drawing::Point(67, 82);
			this->name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 22);
			this->name->TabIndex = 4;
			this->name->Text = L"Nom";
			this->name->Click += gcnew System::EventHandler(this, &EditarEstudiant::label1_Click_1);
			// 
			// surnames
			// 
			this->surnames->AutoSize = true;
			this->surnames->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->surnames->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->surnames->Location = System::Drawing::Point(68, 111);
			this->surnames->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->surnames->Name = L"surnames";
			this->surnames->Size = System::Drawing::Size(86, 22);
			this->surnames->TabIndex = 5;
			this->surnames->Text = L"Cognoms";
			// 
			// language
			// 
			this->language->AutoSize = true;
			this->language->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->language->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->language->Location = System::Drawing::Point(68, 143);
			this->language->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->language->Name = L"language";
			this->language->Size = System::Drawing::Size(62, 22);
			this->language->TabIndex = 6;
			this->language->Text = L"Idioma";
			// 
			// location
			// 
			this->location->AutoSize = true;
			this->location->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->location->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->location->Location = System::Drawing::Point(68, 173);
			this->location->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(77, 22);
			this->location->TabIndex = 7;
			this->location->Text = L"Localitat";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->password->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->password->Location = System::Drawing::Point(68, 203);
			this->password->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(112, 22);
			this->password->TabIndex = 8;
			this->password->Text = L"Contrasenya";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(202, 84);
			this->textName->Margin = System::Windows::Forms::Padding(2);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(293, 20);
			this->textName->TabIndex = 9;
			// 
			// textSurnames
			// 
			this->textSurnames->Location = System::Drawing::Point(202, 113);
			this->textSurnames->Margin = System::Windows::Forms::Padding(2);
			this->textSurnames->Name = L"textSurnames";
			this->textSurnames->Size = System::Drawing::Size(293, 20);
			this->textSurnames->TabIndex = 10;
			// 
			// textLanguage
			// 
			this->textLanguage->Location = System::Drawing::Point(202, 143);
			this->textLanguage->Margin = System::Windows::Forms::Padding(2);
			this->textLanguage->Name = L"textLanguage";
			this->textLanguage->Size = System::Drawing::Size(293, 20);
			this->textLanguage->TabIndex = 11;
			// 
			// textLocation
			// 
			this->textLocation->Location = System::Drawing::Point(202, 173);
			this->textLocation->Margin = System::Windows::Forms::Padding(2);
			this->textLocation->Name = L"textLocation";
			this->textLocation->Size = System::Drawing::Size(293, 20);
			this->textLocation->TabIndex = 12;
			// 
			// textPassword
			// 
			this->textPassword->Location = System::Drawing::Point(202, 205);
			this->textPassword->Margin = System::Windows::Forms::Padding(2);
			this->textPassword->Name = L"textPassword";
			this->textPassword->Size = System::Drawing::Size(293, 20);
			this->textPassword->TabIndex = 13;
			// 
			// EditarEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(591, 331);
			this->Controls->Add(this->textPassword);
			this->Controls->Add(this->textLocation);
			this->Controls->Add(this->textLanguage);
			this->Controls->Add(this->textSurnames);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->password);
			this->Controls->Add(this->location);
			this->Controls->Add(this->language);
			this->Controls->Add(this->surnames);
			this->Controls->Add(this->name);
			this->Controls->Add(this->editStudent);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->cancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EditarEstudiant";
			this->Text = L"EditarEstudiant";
			this->Load += gcnew System::EventHandler(this, &EditarEstudiant::EditarEstudiant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ n = textName->Text;     
	String^ cg = textSurnames->Text;    
	String^ i = textLanguage->Text;     
	String^ l = textLocation->Text;     
	String^ c = textPassword->Text;    

	try {
		if (n == nom && cg == cognoms && i == idioma && l == localitat && c == contrasenya) {
			MessageBox::Show("Modifica un camp al menys, si us plau.");
		}
		else {
			TxEditarEstudiant^ tx = gcnew TxEditarEstudiant(n, cg, i, l, c);
			tx->executar();
			MessageBox::Show("Dades modificades correctament.");
			this->Close();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void EditarEstudiant_Load(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sistema = Sistema::getInstance();

	nom = sistema->obteEstudiant()->obteNom();
	cognoms = sistema->obteEstudiant()->obteCognoms();
	idioma = sistema->obteEstudiant()->obteIdioma();
	localitat = sistema->obteEstudiant()->obteLocalitat();
	contrasenya = sistema->obteContrasenya();

	textName->Text = nom;
	textSurnames->Text = cognoms;
	textLanguage->Text = idioma;
	textLocation->Text = localitat;
	textPassword->Text = contrasenya;
}
};
}
