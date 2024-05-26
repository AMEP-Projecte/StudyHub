#pragma once
#include "Sistema.h"
#include "TxEditarSessio.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EditarSessio
	/// </summary>
	public ref class EditarSessio : public System::Windows::Forms::Form
	{
	public:
		EditarSessio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		String^ _grup="";
		String^ _data = "";
		String^ _adreca = "";
		String^ _hora_inici = "";
		String^ _hora_fi = "";

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EditarSessio()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonEditar;
	private: System::Windows::Forms::Button^ buttonTornar;

	
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

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
		void omplir() {
		
		}
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonEditar = (gcnew System::Windows::Forms::Button());
			this->buttonTornar = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(124, 372);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 31);
			this->label2->TabIndex = 7;
			this->label2->Text = L"canviar hora fi :";
			this->label2->Click += gcnew System::EventHandler(this, &EditarSessio::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(345, 375);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(368, 28);
			this->textBox1->TabIndex = 8;
			// 
			// buttonEditar
			// 
			this->buttonEditar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonEditar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonEditar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonEditar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonEditar->Location = System::Drawing::Point(742, 442);
			this->buttonEditar->Margin = System::Windows::Forms::Padding(4);
			this->buttonEditar->Name = L"buttonEditar";
			this->buttonEditar->Size = System::Drawing::Size(152, 34);
			this->buttonEditar->TabIndex = 7;
			this->buttonEditar->Text = L"Canviar";
			this->buttonEditar->UseVisualStyleBackColor = false;
			this->buttonEditar->Click += gcnew System::EventHandler(this, &EditarSessio::buttonEditar_Click);
			// 
			// buttonTornar
			// 
			this->buttonTornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonTornar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonTornar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonTornar->Location = System::Drawing::Point(23, 441);
			this->buttonTornar->Margin = System::Windows::Forms::Padding(4);
			this->buttonTornar->Name = L"buttonTornar";
			this->buttonTornar->Size = System::Drawing::Size(150, 37);
			this->buttonTornar->TabIndex = 7;
			this->buttonTornar->Text = L"Tornar";
			this->buttonTornar->UseVisualStyleBackColor = false;
			this->buttonTornar->Click += gcnew System::EventHandler(this, &EditarSessio::buttonTornar_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 64);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(886, 305);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(4, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(878, 41);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Les meves sessions";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(96, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(719, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestionar Les Meves Sessions d\'Estudi";
			
			// 
			// EditarSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 512);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->buttonTornar);
			this->Controls->Add(this->buttonEditar);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EditarSessio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudyHub";
			this->Load += gcnew System::EventHandler(this, &EditarSessio::EditarSessio_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonTornar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEditar_Click(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void EditarSessio_Load(System::Object^ sender, System::EventArgs^ e);

/*private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int index = e->RowIndex;
	dataGridView1->Rows[index]->Selected = true;

	grup = Convert::ToString(dataGridView1->Rows[index]->Cells[0]->Value);

	DateTime^ d = Convert::ToDateTime(dataGridView1->Rows[index]->Cells[1]->Value);
	data = d->ToString("yyyy-MM-dd");

	hora_inici = Convert::ToString(dataGridView1->Rows[index]->Cells[2]->Value);
	hora_fi = Convert::ToString(dataGridView1->Rows[index]->Cells[3]->Value);

	textBox1->Text = hora_fi;
}*/


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void labelenfila_Click(Object^ sender, EventArgs^ e);
	private: System::Void fila_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void selecciona(TableLayoutPanel^ table);

};
}
