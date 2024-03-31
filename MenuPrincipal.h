#pragma once
#include "IniciSessio.h"
#include "CrearEstudiant.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ studyHyb;
	private: System::Windows::Forms::Label^ menuPrincipal;
	private: System::Windows::Forms::Button^ iniciarSessio;
	private: System::Windows::Forms::Button^ registrar;
	private: System::Windows::Forms::Button^ sortir;


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
			this->studyHyb = (gcnew System::Windows::Forms::Label());
			this->menuPrincipal = (gcnew System::Windows::Forms::Label());
			this->iniciarSessio = (gcnew System::Windows::Forms::Button());
			this->registrar = (gcnew System::Windows::Forms::Button());
			this->sortir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// studyHyb
			// 
			this->studyHyb->AutoSize = true;
			this->studyHyb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studyHyb->Location = System::Drawing::Point(71, 31);
			this->studyHyb->Name = L"studyHyb";
			this->studyHyb->Size = System::Drawing::Size(178, 42);
			this->studyHyb->TabIndex = 0;
			this->studyHyb->Text = L"StudyHub";
			this->studyHyb->Click += gcnew System::EventHandler(this, &MenuPrincipal::label1_Click);
			// 
			// menuPrincipal
			// 
			this->menuPrincipal->AutoSize = true;
			this->menuPrincipal->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuPrincipal->Location = System::Drawing::Point(85, 99);
			this->menuPrincipal->Name = L"menuPrincipal";
			this->menuPrincipal->Size = System::Drawing::Size(164, 27);
			this->menuPrincipal->TabIndex = 1;
			this->menuPrincipal->Text = L"Menú Principal";
			// 
			// iniciarSessio
			// 
			this->iniciarSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iniciarSessio->Location = System::Drawing::Point(78, 148);
			this->iniciarSessio->Name = L"iniciarSessio";
			this->iniciarSessio->Size = System::Drawing::Size(171, 62);
			this->iniciarSessio->TabIndex = 2;
			this->iniciarSessio->Text = L"Iniciar Sessió";
			this->iniciarSessio->UseVisualStyleBackColor = true;
			this->iniciarSessio->Click += gcnew System::EventHandler(this, &MenuPrincipal::iniciarSessio_Click);
			// 
			// registrar
			// 
			this->registrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registrar->Location = System::Drawing::Point(78, 245);
			this->registrar->Name = L"registrar";
			this->registrar->Size = System::Drawing::Size(171, 64);
			this->registrar->TabIndex = 3;
			this->registrar->Text = L"Registrar-se";
			this->registrar->UseVisualStyleBackColor = true;
			this->registrar->Click += gcnew System::EventHandler(this, &MenuPrincipal::registrar_Click);
			// 
			// sortir
			// 
			this->sortir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sortir->Location = System::Drawing::Point(78, 343);
			this->sortir->Name = L"sortir";
			this->sortir->Size = System::Drawing::Size(171, 56);
			this->sortir->TabIndex = 4;
			this->sortir->Text = L"Sortir";
			this->sortir->UseVisualStyleBackColor = true;
			this->sortir->Click += gcnew System::EventHandler(this, &MenuPrincipal::sortir_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 478);
			this->Controls->Add(this->sortir);
			this->Controls->Add(this->registrar);
			this->Controls->Add(this->iniciarSessio);
			this->Controls->Add(this->menuPrincipal);
			this->Controls->Add(this->studyHyb);
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void iniciarSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::IniciSessio^ iniciSessio = gcnew StudyHub::IniciSessio();
	this->Visible = false;
	iniciSessio->ShowDialog();
	this->Visible = true;
}
private: System::Void sortir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void registrar_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::CrearEstudiant^ registraEstudiant = gcnew StudyHub::CrearEstudiant();
	this->Visible = false;
	registraEstudiant->ShowDialog();
	this->Visible = true;
}
private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
