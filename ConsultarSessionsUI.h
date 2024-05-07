#pragma once
#include "Sistema.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Resumen de ConsultarSessionsUI
	/// </summary>
	public ref class ConsultarSessionsUI : public System::Windows::Forms::Form
	{
	public:
		ConsultarSessionsUI(void)
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
		~ConsultarSessionsUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonTornar;

	protected:

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
		void omplir() {
			Sistema^ sist = Sistema::getInstance();
			String^ username = sist->obteEstudiant()->obteUsername();

			MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");

			DataTable^ dt = gcnew DataTable();
			String^ sql = "SELECT * FROM sessio ";
			sql += "WHERE grup IN(SELECT grup FROM pertany WHERE estudiant = '" + username + "') ";
			sql += " AND ((data < CURDATE()) OR (data = CURDATE() and hora_inici > CURTIME()));";

			MySqlDataAdapter^ da = gcnew MySqlDataAdapter(sql, cn);
			da->Fill(dt);
			this->dataGridView1->DataSource = dt;
		}
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->label1->Location = System::Drawing::Point(115, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pr�ximes Sessions d\'Estudi";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(9, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(589, 249);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ConsultarSessionsUI::dataGridView1_CellContentClick);
			// 
			// buttonTornar
			// 
			this->buttonTornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonTornar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonTornar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonTornar->Location = System::Drawing::Point(227, 325);
			this->buttonTornar->Name = L"buttonTornar";
			this->buttonTornar->Size = System::Drawing::Size(144, 36);
			this->buttonTornar->TabIndex = 7;
			this->buttonTornar->Text = L"Tornar";
			this->buttonTornar->UseVisualStyleBackColor = false;
			this->buttonTornar->Click += gcnew System::EventHandler(this, &ConsultarSessionsUI::button1_Click);
			// 
			// ConsultarSessionsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->buttonTornar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ConsultarSessionsUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudyHub";
			this->Load += gcnew System::EventHandler(this, &ConsultarSessionsUI::ConsultarSessionsUI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void ConsultarSessionsUI_Load(System::Object^ sender, System::EventArgs^ e) {
	this->omplir();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}