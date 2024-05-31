#pragma once
#include "pch.h"
#include "MenuPrincipal.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EliminarPerfilEstudiantUI
	/// </summary>
	public ref class EliminarPerfilEstudiantUI : public System::Windows::Forms::Form
	{
	public:
		EliminarPerfilEstudiantUI(void)
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
		~EliminarPerfilEstudiantUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ eliminarcompte;
	private: System::Windows::Forms::Label^ infoeliminarcompte;
	private: System::Windows::Forms::Label^ infoeliminarcompte2;
	private: System::Windows::Forms::Label^ etiquetacontrasenya;
	private: System::Windows::Forms::TextBox^ txt_contra;
	private: System::Windows::Forms::Button^ btn_eliminar_compte;



	private: System::Windows::Forms::Button^ button2;

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
			this->eliminarcompte = (gcnew System::Windows::Forms::Label());
			this->infoeliminarcompte = (gcnew System::Windows::Forms::Label());
			this->infoeliminarcompte2 = (gcnew System::Windows::Forms::Label());
			this->etiquetacontrasenya = (gcnew System::Windows::Forms::Label());
			this->txt_contra = (gcnew System::Windows::Forms::TextBox());
			this->btn_eliminar_compte = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// eliminarcompte
			// 
			this->eliminarcompte->AutoSize = true;
			this->eliminarcompte->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->eliminarcompte->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->eliminarcompte->Location = System::Drawing::Point(126, 29);
			this->eliminarcompte->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->eliminarcompte->Name = L"eliminarcompte";
			this->eliminarcompte->Size = System::Drawing::Size(332, 42);
			this->eliminarcompte->TabIndex = 0;
			this->eliminarcompte->Text = L"ELIMINAR COMPTE";
			this->eliminarcompte->Click += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::label1_Click);
			// 
			// infoeliminarcompte
			// 
			this->infoeliminarcompte->AutoSize = true;
			this->infoeliminarcompte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->infoeliminarcompte->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->infoeliminarcompte->Location = System::Drawing::Point(32, 94);
			this->infoeliminarcompte->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->infoeliminarcompte->Name = L"infoeliminarcompte";
			this->infoeliminarcompte->Size = System::Drawing::Size(257, 17);
			this->infoeliminarcompte->TabIndex = 1;
			this->infoeliminarcompte->Text = L"Segur que vols eliminar el teu compte\? ";
			// 
			// infoeliminarcompte2
			// 
			this->infoeliminarcompte2->AutoSize = true;
			this->infoeliminarcompte2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->infoeliminarcompte2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->infoeliminarcompte2->Location = System::Drawing::Point(32, 124);
			this->infoeliminarcompte2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->infoeliminarcompte2->Name = L"infoeliminarcompte2";
			this->infoeliminarcompte2->Size = System::Drawing::Size(513, 17);
			this->infoeliminarcompte2->TabIndex = 2;
			this->infoeliminarcompte2->Text = L"Això tancarà la teva sessió immediatament i no podràs tornar a iniciar-la de nou."
				L"";
			// 
			// etiquetacontrasenya
			// 
			this->etiquetacontrasenya->AutoSize = true;
			this->etiquetacontrasenya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->etiquetacontrasenya->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->etiquetacontrasenya->Location = System::Drawing::Point(234, 170);
			this->etiquetacontrasenya->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->etiquetacontrasenya->Name = L"etiquetacontrasenya";
			this->etiquetacontrasenya->Size = System::Drawing::Size(116, 17);
			this->etiquetacontrasenya->TabIndex = 3;
			this->etiquetacontrasenya->Text = L"CONTRASENYA:";
			this->etiquetacontrasenya->Click += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::label1_Click_1);
			// 
			// txt_contra
			// 
			this->txt_contra->Location = System::Drawing::Point(133, 199);
			this->txt_contra->Margin = System::Windows::Forms::Padding(2);
			this->txt_contra->Name = L"txt_contra";
			this->txt_contra->PasswordChar = '*';
			this->txt_contra->Size = System::Drawing::Size(325, 20);
			this->txt_contra->TabIndex = 4;
			this->txt_contra->TextChanged += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::txt_contra_TextChanged);
			// 
			// btn_eliminar_compte
			// 
			this->btn_eliminar_compte->ForeColor = System::Drawing::Color::DarkCyan;
			this->btn_eliminar_compte->Location = System::Drawing::Point(351, 267);
			this->btn_eliminar_compte->Margin = System::Windows::Forms::Padding(2);
			this->btn_eliminar_compte->Name = L"btn_eliminar_compte";
			this->btn_eliminar_compte->Size = System::Drawing::Size(106, 32);
			this->btn_eliminar_compte->TabIndex = 5;
			this->btn_eliminar_compte->Text = L"Eliminar";
			this->btn_eliminar_compte->UseVisualStyleBackColor = true;
			this->btn_eliminar_compte->Click += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::DarkCyan;
			this->button2->Location = System::Drawing::Point(133, 267);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 32);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Tornar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::button2_Click);
			// 
			// EliminarPerfilEstudiantUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(591, 331);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_eliminar_compte);
			this->Controls->Add(this->txt_contra);
			this->Controls->Add(this->etiquetacontrasenya);
			this->Controls->Add(this->infoeliminarcompte2);
			this->Controls->Add(this->infoeliminarcompte);
			this->Controls->Add(this->eliminarcompte);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EliminarPerfilEstudiantUI";
			this->Text = L"StudyHub";
			this->Load += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::EliminarPerfilEstudiantUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_contra_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void EliminarPerfilEstudiantUI_Load(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuEstudiant->Visible = true;
	menu->ButtonMenuGrups->Visible = true;
	menu->buttonMenuSessions->Visible = true;
}
};
}
