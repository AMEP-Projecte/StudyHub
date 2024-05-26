#pragma once
#include "TxEsborrarProveidor.h"
#include "TxObteProveidorsAmbEspaisCreats.h"

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
	public ref class MenuGestioProveidorAdmin : public System::Windows::Forms::Form
	{
	public:
		MenuGestioProveidorAdmin(void)
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
		~MenuGestioProveidorAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ editar;
	private: System::Windows::Forms::Button^ consultar;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: String^ usernameProveidor;

	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->consultar = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(167, 36);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(311, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Gestionar Proveïdors";
			// 
			// editar
			// 
			this->editar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editar->ForeColor = System::Drawing::Color::DarkCyan;
			this->editar->Location = System::Drawing::Point(22, 189);
			this->editar->Margin = System::Windows::Forms::Padding(2);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(116, 47);
			this->editar->TabIndex = 5;
			this->editar->Text = L"Eliminar Proveidor";
			this->editar->UseVisualStyleBackColor = true;
			this->editar->Click += gcnew System::EventHandler(this, &MenuGestioProveidorAdmin::eliminar_Click);
			// 
			// consultar
			// 
			this->consultar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->consultar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consultar->ForeColor = System::Drawing::Color::DarkCyan;
			this->consultar->Location = System::Drawing::Point(22, 147);
			this->consultar->Margin = System::Windows::Forms::Padding(2);
			this->consultar->Name = L"consultar";
			this->consultar->Size = System::Drawing::Size(116, 38);
			this->consultar->TabIndex = 4;
			this->consultar->Text = L"Crear Proveidor";
			this->consultar->UseVisualStyleBackColor = true;
			this->consultar->Click += gcnew System::EventHandler(this, &MenuGestioProveidorAdmin::crear_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(173, 88);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(384, 214);
			this->tableLayoutPanel1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 1);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Informació dels proveïdors";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuGestioProveidorAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->editar);
			this->Controls->Add(this->consultar);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuGestioProveidorAdmin";
			this->Text = L"MenuGestioProveidorAdmin";
			this->Load += gcnew System::EventHandler(this, &MenuGestioProveidorAdmin::MenuGestioProveidorAdmin_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void crear_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void eliminar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MenuGestioProveidorAdmin_Load(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void labelenfila_Click(Object^ sender, EventArgs^ e);
	private: System::Void fila_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void selecciona(TableLayoutPanel^ table);
	private: System::Void omplirInfoProveidors();


};
}