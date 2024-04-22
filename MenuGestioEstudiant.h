#pragma once
// #include "ConsultarEstudiantUI.h"
#include "EditarEstudiant.h"
#include "EliminarPerfilEstudiantUI.h"
#include "ConsultarEstudiantUI.h"
#include "Sistema.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGestioEstudiant
	/// </summary>
	public ref class MenuGestioEstudiant : public System::Windows::Forms::Form
	{
	public:
		MenuGestioEstudiant(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MenuGestioEstudiant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ consulta;
	private: System::Windows::Forms::Button^ editar;
	private: System::Windows::Forms::Button^ eliminar;
	private: System::Windows::Forms::Button^ tornar;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->consulta = (gcnew System::Windows::Forms::Button());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->tornar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(131, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"StudyHub";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(83, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Gestionar Perfil d\'Estudiant";
			// 
			// consulta
			// 
			this->consulta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consulta->Location = System::Drawing::Point(88, 145);
			this->consulta->Name = L"consulta";
			this->consulta->Size = System::Drawing::Size(268, 44);
			this->consulta->TabIndex = 2;
			this->consulta->Text = L"Consultar Perfil";
			this->consulta->UseVisualStyleBackColor = true;
			this->consulta->Click += gcnew System::EventHandler(this, &MenuGestioEstudiant::consulta_Click);
			// 
			// editar
			// 
			this->editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editar->Location = System::Drawing::Point(88, 195);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(268, 43);
			this->editar->TabIndex = 3;
			this->editar->Text = L"Editar Perfil";
			this->editar->UseVisualStyleBackColor = true;
			this->editar->Click += gcnew System::EventHandler(this, &MenuGestioEstudiant::editar_Click);
			// 
			// eliminar
			// 
			this->eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminar->Location = System::Drawing::Point(88, 244);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(268, 39);
			this->eliminar->TabIndex = 4;
			this->eliminar->Text = L"Eliminar Perfil";
			this->eliminar->UseVisualStyleBackColor = true;
			this->eliminar->Click += gcnew System::EventHandler(this, &MenuGestioEstudiant::eliminar_Click);
			// 
			// tornar
			// 
			this->tornar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tornar->Location = System::Drawing::Point(88, 313);
			this->tornar->Name = L"tornar";
			this->tornar->Size = System::Drawing::Size(268, 53);
			this->tornar->TabIndex = 5;
			this->tornar->Text = L"Tornar";
			this->tornar->UseVisualStyleBackColor = true;
			this->tornar->Click += gcnew System::EventHandler(this, &MenuGestioEstudiant::tornar_Click);
			// 
			// MenuGestioEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 415);
			this->Controls->Add(this->tornar);
			this->Controls->Add(this->eliminar);
			this->Controls->Add(this->editar);
			this->Controls->Add(this->consulta);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MenuGestioEstudiant";
			this->Text = L"MenuGestioEstudiant";
			this->Load += gcnew System::EventHandler(this, &MenuGestioEstudiant::MenuGestioEstudiant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tornar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void MenuGestioEstudiant_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	
	StudyHub::ConsultarEstudiantUI^ consultar = gcnew StudyHub::ConsultarEstudiantUI();
	this->Visible = false;
	consultar->ShowDialog();
	this->Visible = true;
	
}
private: System::Void editar_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::EditarEstudiant^ editar = gcnew StudyHub::EditarEstudiant();
	this->Visible = false;
	editar->ShowDialog();
	this->Visible = true;
}
private: System::Void eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::EliminarPerfilEstudiantUI^ eliminar = gcnew StudyHub::EliminarPerfilEstudiantUI();
	this->Visible = false;
	eliminar->ShowDialog();

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
