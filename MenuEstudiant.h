#pragma once
#include "TancarSessio.h"
#include "Sistema.h"
#include "MenuGestioEstudiant.h"
#include "MenuGestioGrups.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuEstudiant
	/// </summary>
	public ref class MenuEstudiant : public System::Windows::Forms::Form
	{
	public:
		MenuEstudiant(void)
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
		~MenuEstudiant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ studyHub;
	private: System::Windows::Forms::Label^ menuEstudiantt;
	private: System::Windows::Forms::Button^ gestionaPerfil;
	private: System::Windows::Forms::Button^ gestionaGrups;
	private: System::Windows::Forms::Button^ tancaSessio;
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
			this->studyHub = (gcnew System::Windows::Forms::Label());
			this->menuEstudiantt = (gcnew System::Windows::Forms::Label());
			this->gestionaPerfil = (gcnew System::Windows::Forms::Button());
			this->gestionaGrups = (gcnew System::Windows::Forms::Button());
			this->tancaSessio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// studyHub
			// 
			this->studyHub->AutoSize = true;
			this->studyHub->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studyHub->Location = System::Drawing::Point(114, 18);
			this->studyHub->Name = L"studyHub";
			this->studyHub->Size = System::Drawing::Size(178, 42);
			this->studyHub->TabIndex = 0;
			this->studyHub->Text = L"StudyHub";
			// 
			// menuEstudiant
			// 
			this->menuEstudiantt->AutoSize = true;
			this->menuEstudiantt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuEstudiantt->Location = System::Drawing::Point(116, 75);
			this->menuEstudiantt->Name = L"menuEstudiant";
			this->menuEstudiantt->Size = System::Drawing::Size(171, 27);
			this->menuEstudiantt->TabIndex = 1;
			this->menuEstudiantt->Text = L"Menú Estudiant";
			// 
			// gestionaPerfil
			// 
			this->gestionaPerfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaPerfil->Location = System::Drawing::Point(116, 149);
			this->gestionaPerfil->Name = L"gestionaPerfil";
			this->gestionaPerfil->Size = System::Drawing::Size(171, 88);
			this->gestionaPerfil->TabIndex = 2;
			this->gestionaPerfil->Text = L"Gestionar Perfil d\'Estudiant";
			this->gestionaPerfil->UseVisualStyleBackColor = true;
			this->gestionaPerfil->Click += gcnew System::EventHandler(this, &MenuEstudiant::gestionaPerfil_Click);
			// 
			// gestionaGrups
			// 
			this->gestionaGrups->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaGrups->Location = System::Drawing::Point(121, 243);
			this->gestionaGrups->Name = L"gestionaGrups";
			this->gestionaGrups->Size = System::Drawing::Size(166, 92);
			this->gestionaGrups->TabIndex = 3;
			this->gestionaGrups->Text = L"Gestionar Grups d\'Estudi";
			this->gestionaGrups->UseVisualStyleBackColor = true;
			this->gestionaGrups->Click += gcnew System::EventHandler(this, &MenuEstudiant::gestionaGrups_Click);
			// 
			// tancaSessio
			// 
			this->tancaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tancaSessio->Location = System::Drawing::Point(121, 367);
			this->tancaSessio->Name = L"tancaSessio";
			this->tancaSessio->Size = System::Drawing::Size(166, 53);
			this->tancaSessio->TabIndex = 4;
			this->tancaSessio->Text = L"Tancar Sessió";
			this->tancaSessio->UseVisualStyleBackColor = true;
			this->tancaSessio->Click += gcnew System::EventHandler(this, &MenuEstudiant::tancaSessio_Click);
			// 
			// MenuEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 432);
			this->Controls->Add(this->tancaSessio);
			this->Controls->Add(this->gestionaGrups);
			this->Controls->Add(this->gestionaPerfil);
			this->Controls->Add(this->menuEstudiantt);
			this->Controls->Add(this->studyHub);
			this->Name = L"MenuEstudiant";
			this->Text = L"MenuEstudiant";
			this->Load += gcnew System::EventHandler(this, &MenuEstudiant::MenuEstudiant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tancaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
		// Crear una nova instancia del nou formulari
		StudyHub::TancarSessio^ tancarSes = gcnew StudyHub::TancarSessio();

		// Fem invisible el formulari actual, en aquest cas MenuEstudiant;
		this->Visible = false;

		// Mostrar el nou formulari
		tancarSes->ShowDialog();

		Sistema^ sist = Sistema::getInstance();

		if (sist->obteEstatSessio()) {
			this->Visible = true;
		}
		else {
			// Si la sessió s'ha tancat, tanquem MenuEstudiant
			Close();
		}
	}
private: System::Void gestionaGrups_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::MenuGestioGrups^ gestionaGrups = gcnew StudyHub::MenuGestioGrups();
	this->Visible = false;
	gestionaGrups->ShowDialog();
	this->Visible = true;
}
private: System::Void MenuEstudiant_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::MenuGestioEstudiant^ gestionaEstudiant = gcnew StudyHub::MenuGestioEstudiant();
	this->Visible = false;
	gestionaEstudiant->ShowDialog();

	Sistema^ sistema = Sistema::getInstance();
	if (sistema->obteEstatSessio()) {
		this->Visible = true;
	}
	else {
		this->Close();
	}
}
};
}
