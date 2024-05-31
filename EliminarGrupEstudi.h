#pragma once
#include "TxEliminarGrup.h"
#include "Sistema.h"
#include "MenuPrincipal.h"

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
	/// Summary for EliminarGrupEstudi
	/// </summary>
	public ref class EliminarGrupEstudi : public System::Windows::Forms::Form
	{

	public:
		EliminarGrupEstudi(void)
		{
			InitializeComponent();
			omplir();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EliminarGrupEstudi()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ButtonTornar;





	protected:


























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 

		// Pre: Cert
		// Post: Hem creat una Data Table amb l'inforamació dels grups creats per l'usuari actual 
		void omplir() {
			Sistema^ sist = Sistema::getInstance();
			MySqlConnection^ cn = gcnew MySqlConnection("Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;");
			DataTable^ dt = gcnew DataTable();
			String^ sql = String::Format("SELECT * FROM grup WHERE creador = '{0}';", sist->obteEstudiant()->obteUsername());
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter(sql, cn);

			da->Fill(dt);

			this->dataGridView1->DataSource = dt;
		}
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ButtonTornar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->ForeColor = System::Drawing::Color::DarkCyan;
			this->button3->Location = System::Drawing::Point(438, 295);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 36);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(70, 308);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(8, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 22);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nom";
			this->label3->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(7, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 30);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Eliminar Grup:";
			this->label4->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::label4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(12, 76);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(583, 176);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EliminarGrupEstudi::dataGridView1_CellContentClick);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(200, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 36);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Grups Actuals:";
			this->label2->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::label2_Click);
			// 
			// ButtonTornar
			// 
			this->ButtonTornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonTornar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonTornar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->ButtonTornar->Location = System::Drawing::Point(288, 295);
			this->ButtonTornar->Name = L"ButtonTornar";
			this->ButtonTornar->Size = System::Drawing::Size(144, 36);
			this->ButtonTornar->TabIndex = 7;
			this->ButtonTornar->Text = L"Tornar";
			this->ButtonTornar->UseVisualStyleBackColor = false;
			this->ButtonTornar->Click += gcnew System::EventHandler(this, &EliminarGrupEstudi::ButtonTornar_Click);
			// 
			// EliminarGrupEstudi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->ButtonTornar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EliminarGrupEstudi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudyHub";
			this->Load += gcnew System::EventHandler(this, &EliminarGrupEstudi::EliminarGrupEstudi_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sist = Sistema::getInstance();
	try {
		if (this->textBox1->Text != "") {
			TxEliminarGrup EliminarGrup(this->textBox1->Text, sist->obteEstudiant()->obteUsername()); 
			EliminarGrup.executar();
			omplir();
			this->Close();
		}
		else {
			MessageBox::Show("Escriu el nom del grup a eliminar.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void EliminarGrupEstudi_Load(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuEstudiant->Visible = true;
	menu->ButtonMenuGrups->Visible = true;
	menu->buttonMenuSessions->Visible = true;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e);

};
}
