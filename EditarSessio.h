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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonEditar;
	private: System::Windows::Forms::Button^ buttonTornar;

	private: String^ grup;
	private: String^ data;
	private: String^ hora_inici;
	private: String^ hora_fi = "";

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
			Sistema^ sist = Sistema::getInstance();
			String^ username = sist->obteEstudiant()->obteUsername();

			MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");

			DataTable^ dt = gcnew DataTable();
			String^ sql = "SELECT * FROM sessio ";
			sql += "WHERE grup IN(SELECT grup FROM pertany WHERE estudiant = '" + username + "') ";
			sql += " and ((data > CURDATE()) or (data = CURDATE() and hora_inici > CURTIME()));";

			MySqlDataAdapter^ da = gcnew MySqlDataAdapter(sql, cn);
			da->Fill(dt);
			this->dataGridView1->DataSource = dt;
		}
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonEditar = (gcnew System::Windows::Forms::Button());
			this->buttonTornar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(142, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Editar Sessio d\'Estudi";
			this->label1->Click += gcnew System::EventHandler(this, &EditarSessio::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(42, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(521, 184);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditarSessio::dataGridView1_CellClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(37, 270);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(258, 26);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Nova hora de fi de sessió:";
			this->label2->Click += gcnew System::EventHandler(this, &EditarSessio::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(42, 298);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 20);
			this->textBox1->TabIndex = 8;
			// 
			// buttonEditar
			// 
			this->buttonEditar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonEditar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonEditar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonEditar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonEditar->Location = System::Drawing::Point(301, 298);
			this->buttonEditar->Name = L"buttonEditar";
			this->buttonEditar->Size = System::Drawing::Size(144, 36);
			this->buttonEditar->TabIndex = 7;
			this->buttonEditar->Text = L"Editar";
			this->buttonEditar->UseVisualStyleBackColor = false;
			this->buttonEditar->Click += gcnew System::EventHandler(this, &EditarSessio::buttonEditar_Click);
			// 
			// buttonTornar
			// 
			this->buttonTornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonTornar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonTornar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonTornar->Location = System::Drawing::Point(451, 298);
			this->buttonTornar->Name = L"buttonTornar";
			this->buttonTornar->Size = System::Drawing::Size(144, 36);
			this->buttonTornar->TabIndex = 7;
			this->buttonTornar->Text = L"Tornar";
			this->buttonTornar->UseVisualStyleBackColor = false;
			this->buttonTornar->Click += gcnew System::EventHandler(this, &EditarSessio::buttonTornar_Click);
			// 
			// EditarSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->buttonTornar);
			this->Controls->Add(this->buttonEditar);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EditarSessio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudyHub";
			this->Load += gcnew System::EventHandler(this, &EditarSessio::EditarSessio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonTornar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || hora_fi == "") {
			MessageBox::Show("Selecciona una sessio per editar.");
		}
		else {
			TxEditarSessio^ tx = gcnew TxEditarSessio(grup, data, hora_inici, hora_fi);

			if (hora_fi == textBox1->Text) MessageBox::Show("Posa una nova hora de fi.");
			else {
				tx->posaNovaHoraFi(textBox1->Text);

				try {
					tx->executar();
					MessageBox::Show("Hora de fi de sessio modificada correctament.");
					this->omplir();
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
		}
	}
private: System::Void EditarSessio_Load(System::Object^ sender, System::EventArgs^ e) {
	this->omplir();
}

private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int index = e->RowIndex;
	dataGridView1->Rows[index]->Selected = true;

	grup = Convert::ToString(dataGridView1->Rows[index]->Cells[0]->Value);

	DateTime^ d = Convert::ToDateTime(dataGridView1->Rows[index]->Cells[1]->Value);
	data = d->ToString("yyyy-MM-dd");

	hora_inici = Convert::ToString(dataGridView1->Rows[index]->Cells[2]->Value);
	hora_fi = Convert::ToString(dataGridView1->Rows[index]->Cells[3]->Value);

	textBox1->Text = hora_fi;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
