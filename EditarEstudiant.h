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
	private: System::Windows::Forms::Label^ StudyHub;
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
			this->StudyHub = (gcnew System::Windows::Forms::Label());
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
			// StudyHub
			// 
			this->StudyHub->AutoSize = true;
			this->StudyHub->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudyHub->Location = System::Drawing::Point(12, 25);
			this->StudyHub->Name = L"StudyHub";
			this->StudyHub->Size = System::Drawing::Size(202, 47);
			this->StudyHub->TabIndex = 0;
			this->StudyHub->Text = L"StudyHub";
			this->StudyHub->Click += gcnew System::EventHandler(this, &EditarEstudiant::label1_Click);
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->Location = System::Drawing::Point(20, 362);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(127, 40);
			this->cancel->TabIndex = 1;
			this->cancel->Text = L"Cancel·lar";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &EditarEstudiant::cancel_Click);
			// 
			// edit
			// 
			this->edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->Location = System::Drawing::Point(502, 362);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(117, 40);
			this->edit->TabIndex = 2;
			this->edit->Text = L"Editar";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &EditarEstudiant::edit_Click);
			// 
			// editStudent
			// 
			this->editStudent->AutoSize = true;
			this->editStudent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editStudent->Location = System::Drawing::Point(15, 94);
			this->editStudent->Name = L"editStudent";
			this->editStudent->Size = System::Drawing::Size(197, 30);
			this->editStudent->TabIndex = 3;
			this->editStudent->Text = L"Editar Estudiant:";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(16, 143);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 22);
			this->name->TabIndex = 4;
			this->name->Text = L"Nom";
			this->name->Click += gcnew System::EventHandler(this, &EditarEstudiant::label1_Click_1);
			// 
			// surnames
			// 
			this->surnames->AutoSize = true;
			this->surnames->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->surnames->Location = System::Drawing::Point(16, 182);
			this->surnames->Name = L"surnames";
			this->surnames->Size = System::Drawing::Size(86, 22);
			this->surnames->TabIndex = 5;
			this->surnames->Text = L"Cognoms";
			// 
			// language
			// 
			this->language->AutoSize = true;
			this->language->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->language->Location = System::Drawing::Point(16, 227);
			this->language->Name = L"language";
			this->language->Size = System::Drawing::Size(62, 22);
			this->language->TabIndex = 6;
			this->language->Text = L"Idioma";
			// 
			// location
			// 
			this->location->AutoSize = true;
			this->location->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->location->Location = System::Drawing::Point(16, 267);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(77, 22);
			this->location->TabIndex = 7;
			this->location->Text = L"Localitat";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(16, 311);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(112, 22);
			this->password->TabIndex = 8;
			this->password->Text = L"Contrasenya";
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(312, 139);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(307, 26);
			this->textName->TabIndex = 9;
			// 
			// textSurnames
			// 
			this->textSurnames->Location = System::Drawing::Point(312, 182);
			this->textSurnames->Name = L"textSurnames";
			this->textSurnames->Size = System::Drawing::Size(307, 26);
			this->textSurnames->TabIndex = 10;
			// 
			// textLanguage
			// 
			this->textLanguage->Location = System::Drawing::Point(312, 227);
			this->textLanguage->Name = L"textLanguage";
			this->textLanguage->Size = System::Drawing::Size(307, 26);
			this->textLanguage->TabIndex = 11;
			// 
			// textLocation
			// 
			this->textLocation->Location = System::Drawing::Point(312, 267);
			this->textLocation->Name = L"textLocation";
			this->textLocation->Size = System::Drawing::Size(307, 26);
			this->textLocation->TabIndex = 12;
			// 
			// textPassword
			// 
			this->textPassword->Location = System::Drawing::Point(312, 311);
			this->textPassword->Name = L"textPassword";
			this->textPassword->Size = System::Drawing::Size(307, 26);
			this->textPassword->TabIndex = 13;
			// 
			// EditarEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(651, 426);
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
			this->Controls->Add(this->StudyHub);
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
	String^ n = textName->Text;    // nom
	String^ cg = textSurnames->Text;   // cognoms
	String^ i = textLanguage->Text;    // idioma
	String^ l = textLocation->Text;    // localitat
	String^ c = textPassword->Text;    // contrasenya

	try {
		if (n == "" && cg == "" && i == "" && l == "" && c == "") {
			MessageBox::Show("Omple un camp al menys, si us plau.");
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
}
};
}
