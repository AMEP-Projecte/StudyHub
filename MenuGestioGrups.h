#pragma once
#include "EliminarGrupEstudi.h"
#include "EditarGrup.h"
#include "ConsultarGrup.h"
#include "CrearNouGrupEstudi.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGestioGrups
	/// </summary>
	public ref class MenuGestioGrups : public System::Windows::Forms::Form
	{
	public:
		MenuGestioGrups(void)
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
		~MenuGestioGrups()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ tornar;
	private: System::Windows::Forms::Button^ elimina;
	private: System::Windows::Forms::Button^ edita;
	private: System::Windows::Forms::Button^ consulta;
	private: System::Windows::Forms::Button^ crea;


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
			this->tornar = (gcnew System::Windows::Forms::Button());
			this->elimina = (gcnew System::Windows::Forms::Button());
			this->edita = (gcnew System::Windows::Forms::Button());
			this->consulta = (gcnew System::Windows::Forms::Button());
			this->crea = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(117, 9);
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
			this->label2->Location = System::Drawing::Point(83, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Gestionar Grups d\'Estudi";
			// 
			// tornar
			// 
			this->tornar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tornar->Location = System::Drawing::Point(138, 385);
			this->tornar->Name = L"tornar";
			this->tornar->Size = System::Drawing::Size(128, 55);
			this->tornar->TabIndex = 2;
			this->tornar->Text = L"Tornar";
			this->tornar->UseVisualStyleBackColor = true;
			this->tornar->Click += gcnew System::EventHandler(this, &MenuGestioGrups::tornar_Click);
			// 
			// elimina
			// 
			this->elimina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->elimina->Location = System::Drawing::Point(138, 300);
			this->elimina->Name = L"elimina";
			this->elimina->Size = System::Drawing::Size(128, 61);
			this->elimina->TabIndex = 3;
			this->elimina->Text = L"Eliminar Grup";
			this->elimina->UseVisualStyleBackColor = true;
			this->elimina->Click += gcnew System::EventHandler(this, &MenuGestioGrups::elimina_Click);
			// 
			// edita
			// 
			this->edita->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edita->Location = System::Drawing::Point(138, 240);
			this->edita->Name = L"edita";
			this->edita->Size = System::Drawing::Size(128, 54);
			this->edita->TabIndex = 4;
			this->edita->Text = L"Editar Grup";
			this->edita->UseVisualStyleBackColor = true;
			this->edita->Click += gcnew System::EventHandler(this, &MenuGestioGrups::edita_Click);
			// 
			// consulta
			// 
			this->consulta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consulta->Location = System::Drawing::Point(138, 176);
			this->consulta->Name = L"consulta";
			this->consulta->Size = System::Drawing::Size(128, 58);
			this->consulta->TabIndex = 5;
			this->consulta->Text = L"Consultar Grup";
			this->consulta->UseVisualStyleBackColor = true;
			this->consulta->Click += gcnew System::EventHandler(this, &MenuGestioGrups::consulta_Click);
			// 
			// crea
			// 
			this->crea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crea->Location = System::Drawing::Point(138, 108);
			this->crea->Name = L"crea";
			this->crea->Size = System::Drawing::Size(128, 62);
			this->crea->TabIndex = 6;
			this->crea->Text = L"Crear Grup";
			this->crea->UseVisualStyleBackColor = true;
			this->crea->Click += gcnew System::EventHandler(this, &MenuGestioGrups::crea_Click);
			// 
			// MenuGestioGrups
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 452);
			this->Controls->Add(this->crea);
			this->Controls->Add(this->consulta);
			this->Controls->Add(this->edita);
			this->Controls->Add(this->elimina);
			this->Controls->Add(this->tornar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MenuGestioGrups";
			this->Text = L"MenuGestioGrups";
			this->Load += gcnew System::EventHandler(this, &MenuGestioGrups::MenuGestioGrups_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tornar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void elimina_Click(System::Object^ sender, System::EventArgs^ e) {
		StudyHub::EliminarGrupEstudi^ eliminar = gcnew StudyHub::EliminarGrupEstudi();
		this->Visible = false;
		eliminar->ShowDialog();
		this->Visible = true;
	}
private: System::Void edita_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::EditarGrup^ editar = gcnew StudyHub::EditarGrup();
	this->Visible = false;
	editar->ShowDialog();
	this->Visible = true;
}
private: System::Void consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::ConsultarGrup^ consultar = gcnew StudyHub::ConsultarGrup();
	this->Visible = false;
	consultar->ShowDialog();
	this->Visible = true;
}
private: System::Void crea_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::CrearNouGrupEstudi^ crear = gcnew StudyHub::CrearNouGrupEstudi();
	this->Visible = false;
	crear->ShowDialog();
	this->Visible = true;
}
private: System::Void MenuGestioGrups_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
