#pragma once
#include "pch.h"
#include "ConsultarProveidorUI.h"
#include "TxConsultarProveidor.h"
namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGestioProveidor
	/// </summary>
	public ref class MenuGestioProveidor : public System::Windows::Forms::Form
	{
	public:
		MenuGestioProveidor(void)
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
		~MenuGestioProveidor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ editar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(250, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(369, 56);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Perfil  Proveïdor";
			// 
			// editar
			// 
			this->editar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editar->ForeColor = System::Drawing::Color::DarkCyan;
			this->editar->Location = System::Drawing::Point(302, 335);
			this->editar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(269, 60);
			this->editar->TabIndex = 5;
			this->editar->Text = L"Canviar Contrasenya";
			this->editar->UseVisualStyleBackColor = true;
			this->editar->Click += gcnew System::EventHandler(this, &MenuGestioProveidor::editar_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(295, 216);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 37);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nom:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(416, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 31);
			this->label3->TabIndex = 7;
			this->label3->Text = L"proveidor";
			// 
			// MenuGestioProveidor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 512);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->editar);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuGestioProveidor";
			this->Text = L"MenuGestioProveidor";
			this->Load += gcnew System::EventHandler(this, &MenuGestioProveidor::MenuGestioProveidor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void editar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MenuGestioProveidor_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultarProveidor tx;
		tx.executar();
		label3->Text = tx.obteUsername();

	}

};
}
