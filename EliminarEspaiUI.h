#pragma once
#include "TxEliminarEspai.h"
#include "Sistema.h"
#include "MenuPrincipal.h"
#include "MenuGestioEspais.h"
#include "CercadoraSessio.h"
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
	/// Summary for EliminarEspai
	/// </summary>
	public ref class EliminarEspai : public System::Windows::Forms::Form
	{

	public:

		String^ _espai_ = "";
		String^ _adreca_ = "";
		String^ _capacitat_ = "";

		EliminarEspai(void)
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
		~EliminarEspai()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ButtonTornar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;





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
		// Post: Hem creat una Data Table amb l'inforamaci� dels espais creats 
		void omplir() {
			Sistema^ sist = Sistema::getInstance();
			MySqlConnection^ cn = gcnew MySqlConnection(Sistema::getInstance()->obteCadenaDeConnexio());
			DataTable^ dt = gcnew DataTable();
			String^ sql = String::Format("SELECT * FROM grup WHERE creador = '{0}';", sist->obteProveidor()->obteNomUsuari());
			MySqlDataAdapter^ da = gcnew MySqlDataAdapter(sql, cn);


		}
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ButtonTornar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->ForeColor = System::Drawing::Color::DarkCyan;
			this->button3->Location = System::Drawing::Point(355, 283);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 36);
			this->button3->TabIndex = 6;
			this->button3->Text = L"S\u00ed";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EliminarEspai::button3_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(195, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 22);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nom:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(193, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 36);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Eliminar Espai";
			// 
			// ButtonTornar
			// 
			this->ButtonTornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonTornar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonTornar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->ButtonTornar->Location = System::Drawing::Point(67, 283);
			this->ButtonTornar->Name = L"ButtonTornar";
			this->ButtonTornar->Size = System::Drawing::Size(144, 36);
			this->ButtonTornar->TabIndex = 7;
			this->ButtonTornar->Text = L"Tornar";
			this->ButtonTornar->UseVisualStyleBackColor = false;
			this->ButtonTornar->Click += gcnew System::EventHandler(this, &EliminarEspai::ButtonTornar_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(334, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 22);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(195, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Adre\u00e7a:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(334, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 22);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(195, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Capacitat";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(334, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 22);
			this->label7->TabIndex = 12;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(62, 77);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(445, 29);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Segur que vols eliminar l\'espai seg\u00Fcent\?";
			// this->label8->Click += gcnew System::EventHandler(this, &EliminarEspai::label8_Click);
			// 
			// EliminarEspai
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ButtonTornar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EliminarEspai";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudyHub";
			this->Load += gcnew System::EventHandler(this, &EliminarEspai::EliminarEspai_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Sistema^ sist = Sistema::getInstance();
		try {
			if (_adreca_ != "") {
				List<PassarellaSessio^>^ busca = CercadoraSessio::cercaSessionsProximesDelEspai(_adreca_);
				if (busca->Count != 0) {
					MessageBox::Show("Hi ha sessions programades per aquest espai, no pots eliminar en aquest moment.");
				}
				else{
					TxEliminarEspai EliminarEspai(_adreca_, sist->obteProveidor()->obteNomUsuari());
					EliminarEspai.executar();
					omplir();

					MenuGestioEspais^ espai = gcnew MenuGestioEspais();
					MenuPrincipal^ menu = MenuPrincipal::getInstance();
					menu->AbrirFormularioEnPanel(espai);
				}
				
			}
			else {
				MessageBox::Show("Selecciona el nom de l'espai a eliminar.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void EliminarEspai_Load(System::Object^ sender, System::EventArgs^ e) {

		label5->Text = _adreca_;
		label7->Text = _capacitat_;
		label1->Text = _espai_;


	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e);
		
};
}
