#pragma once
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

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ consulta;
	private: System::Windows::Forms::Button^ editar;
	private: System::Windows::Forms::Button^ eliminar;
	private: System::Windows::Forms::Button^ tornar;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->consulta = (gcnew System::Windows::Forms::Button());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->eliminar = (gcnew System::Windows::Forms::Button());
			this->tornar = (gcnew System::Windows::Forms::Button());
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
			this->label2->Location = System::Drawing::Point(82, 9);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(402, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Gestionar Perfil d\'Estudiant";
			// 
			// consulta
			// 
			this->consulta->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->consulta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consulta->ForeColor = System::Drawing::Color::DarkCyan;
			this->consulta->Location = System::Drawing::Point(27, 96);
			this->consulta->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->consulta->Name = L"consulta";
			this->consulta->Size = System::Drawing::Size(120, 35);
			this->consulta->TabIndex = 2;
			this->consulta->Text = L"Consultar Perfil";
			this->consulta->UseVisualStyleBackColor = true;
			this->consulta->Click += gcnew System::EventHandler(this, &MenuGestioEstudiant::consulta_Click);
			// 
			// editar
			// 
			this->editar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editar->ForeColor = System::Drawing::Color::DarkCyan;
			this->editar->Location = System::Drawing::Point(27, 135);
			this->editar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(120, 38);
			this->editar->TabIndex = 3;
			this->editar->Text = L"Editar Perfil";
			this->editar->UseVisualStyleBackColor = true;
			this->editar->Click += gcnew System::EventHandler(this, &MenuGestioEstudiant::editar_Click);
			// 
			// eliminar
			// 
			this->eliminar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eliminar->ForeColor = System::Drawing::Color::DarkCyan;
			this->eliminar->Location = System::Drawing::Point(27, 177);
			this->eliminar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->eliminar->Name = L"eliminar";
			this->eliminar->Size = System::Drawing::Size(120, 39);
			this->eliminar->TabIndex = 4;
			this->eliminar->Text = L"Eliminar Perfil";
			this->eliminar->UseVisualStyleBackColor = true;
			this->eliminar->Click += gcnew System::EventHandler(this, &MenuGestioEstudiant::eliminar_Click);
			// 
			// tornar
			// 
			this->tornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tornar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->tornar->Location = System::Drawing::Point(27, 220);
			this->tornar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tornar->Name = L"tornar";
			this->tornar->Size = System::Drawing::Size(120, 38);
			this->tornar->TabIndex = 5;
			this->tornar->Text = L"Tancar Sessio";
			this->tornar->UseVisualStyleBackColor = true;
			this->tornar->Click += gcnew System::EventHandler(this, &MenuGestioEstudiant::tornar_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(164, 61);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 72)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(384, 238);
			this->tableLayoutPanel1->TabIndex = 8;
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
			this->label1->Text = L"Les meves valoracions grup";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuGestioEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(591, 331);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tornar);
			this->Controls->Add(this->eliminar);
			this->Controls->Add(this->editar);
			this->Controls->Add(this->consulta);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MenuGestioEstudiant";
			this->Text = L"MenuGestioEstudiant";
			this->Load += gcnew System::EventHandler(this, &MenuGestioEstudiant::MenuGestioEstudiant_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void tornar_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void MenuGestioEstudiant_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void consulta_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void editar_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void eliminar_Click(System::Object^ sender, System::EventArgs^ e);

};
}
