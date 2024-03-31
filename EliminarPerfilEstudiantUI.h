#pragma once
#include "pch.h"

#include "TxEsborraUsuari.h"

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
			this->eliminarcompte->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->eliminarcompte->Location = System::Drawing::Point(357, 38);
			this->eliminarcompte->Name = L"eliminarcompte";
			this->eliminarcompte->Size = System::Drawing::Size(218, 26);
			this->eliminarcompte->TabIndex = 0;
			this->eliminarcompte->Text = L"ELIMINAR COMPTE";
			this->eliminarcompte->Click += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::label1_Click);
			// 
			// infoeliminarcompte
			// 
			this->infoeliminarcompte->AutoSize = true;
			this->infoeliminarcompte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->infoeliminarcompte->Location = System::Drawing::Point(43, 109);
			this->infoeliminarcompte->Name = L"infoeliminarcompte";
			this->infoeliminarcompte->Size = System::Drawing::Size(304, 20);
			this->infoeliminarcompte->TabIndex = 1;
			this->infoeliminarcompte->Text = L"Segur que vols eliminar el teu compte\? ";
			// 
			// infoeliminarcompte2
			// 
			this->infoeliminarcompte2->AutoSize = true;
			this->infoeliminarcompte2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->infoeliminarcompte2->Location = System::Drawing::Point(43, 147);
			this->infoeliminarcompte2->Name = L"infoeliminarcompte2";
			this->infoeliminarcompte2->Size = System::Drawing::Size(603, 20);
			this->infoeliminarcompte2->TabIndex = 2;
			this->infoeliminarcompte2->Text = L"Aixó tancarà la teva sessió inmediatament i no podràs tornar a iniciar-la de nou."
				L"";
			// 
			// etiquetacontrasenya
			// 
			this->etiquetacontrasenya->AutoSize = true;
			this->etiquetacontrasenya->Location = System::Drawing::Point(407, 213);
			this->etiquetacontrasenya->Name = L"etiquetacontrasenya";
			this->etiquetacontrasenya->Size = System::Drawing::Size(113, 16);
			this->etiquetacontrasenya->TabIndex = 3;
			this->etiquetacontrasenya->Text = L"CONTRASENYA:";
			this->etiquetacontrasenya->Click += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::label1_Click_1);
			// 
			// txt_contra
			// 
			this->txt_contra->Location = System::Drawing::Point(282, 246);
			this->txt_contra->Name = L"txt_contra";
			this->txt_contra->Size = System::Drawing::Size(364, 22);
			this->txt_contra->TabIndex = 4;
			this->txt_contra->TextChanged += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::txt_contra_TextChanged);
			// 
			// btn_eliminar_compte
			// 
			this->btn_eliminar_compte->Location = System::Drawing::Point(780, 342);
			this->btn_eliminar_compte->Name = L"btn_eliminar_compte";
			this->btn_eliminar_compte->Size = System::Drawing::Size(103, 39);
			this->btn_eliminar_compte->TabIndex = 5;
			this->btn_eliminar_compte->Text = L"Eliminar";
			this->btn_eliminar_compte->UseVisualStyleBackColor = true;
			this->btn_eliminar_compte->Click += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(598, 342);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 40);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancel·ar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EliminarPerfilEstudiantUI::button2_Click);
			// 
			// EliminarPerfilEstudiantUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(995, 472);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_eliminar_compte);
			this->Controls->Add(this->txt_contra);
			this->Controls->Add(this->etiquetacontrasenya);
			this->Controls->Add(this->infoeliminarcompte2);
			this->Controls->Add(this->infoeliminarcompte);
			this->Controls->Add(this->eliminarcompte);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ contrasenya= txt_contra->Text;

	try {
		if (contrasenya != "") {
			TxEsborraUsuari txEU(contrasenya);
			txEU.executar();
			this->Close();
		}
		else {
			MessageBox::Show("Has d'omplir el camp.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void EliminarPerfilEstudiantUI_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
