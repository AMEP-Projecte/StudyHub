#pragma once
#include "TxProgramarSessioEstudi.h"
#include "MenuSessionsUI.h"
#include "MenuPrincipal.h"
namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProgamarSessioEstudiUI
	/// </summary>
	public ref class ProgamarSessioEstudiUI : public System::Windows::Forms::Form
	{
	public:
		ProgamarSessioEstudiUI(void)
		{
			InitializeComponent();
			List<PassarellaGrup^>^ grups = ProgamarSessioEstudiUI::tx.obteResultat().grups;
			List<PassarellaEspai^>^ espais = ProgamarSessioEstudiUI::tx.obteResultat().espais;
			
			for each (PassarellaGrup ^ grup in grups)
			{
				grupComboBox->Items->Add(grup->obteNom());
			}
			for each (PassarellaEspai ^ espai in espais)
			{
				espaiComboBox->Items->Add(espai->obteAdreca());
			}


		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ProgamarSessioEstudiUI()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ grupComboBox;
	private: System::Windows::Forms::ComboBox^ espaiComboBox;


	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ direccioLabel;
	private: System::Windows::Forms::Button^ SessionButtob;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ horaINumeric;
	private: System::Windows::Forms::NumericUpDown^ horaFnumeric;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SessionButtob_Click(System::Object^ sender, System::EventArgs^ e);
	





















	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;
		TxProgramarSessioEstudi tx;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->grupComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->espaiComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->direccioLabel = (gcnew System::Windows::Forms::Label());
			this->SessionButtob = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->horaINumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->horaFnumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->horaINumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->horaFnumeric))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(101, 39);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(439, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Programar Sessio d\'Estudi";
			this->label2->Click += gcnew System::EventHandler(this, &ProgamarSessioEstudiUI::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(105, 115);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Grup";
			this->label3->Click += gcnew System::EventHandler(this, &ProgamarSessioEstudiUI::label3_Click);
			// 
			// grupComboBox
			// 
			this->grupComboBox->FormattingEnabled = true;
			this->grupComboBox->Location = System::Drawing::Point(182, 118);
			this->grupComboBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->grupComboBox->Name = L"grupComboBox";
			this->grupComboBox->Size = System::Drawing::Size(350, 21);
			this->grupComboBox->Sorted = true;
			this->grupComboBox->TabIndex = 3;
			// 
			// espaiComboBox
			// 
			this->espaiComboBox->FormattingEnabled = true;
			this->espaiComboBox->Location = System::Drawing::Point(182, 166);
			this->espaiComboBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->espaiComboBox->Name = L"espaiComboBox";
			this->espaiComboBox->Size = System::Drawing::Size(245, 21);
			this->espaiComboBox->Sorted = true;
			this->espaiComboBox->TabIndex = 5;
			this->espaiComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ProgamarSessioEstudiUI::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(105, 163);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Adreca";
			this->label1->Click += gcnew System::EventHandler(this, &ProgamarSessioEstudiUI::label1_Click);
			// 
			// direccioLabel
			// 
			this->direccioLabel->AutoSize = true;
			this->direccioLabel->BackColor = System::Drawing::Color::Transparent;
			this->direccioLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->direccioLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->direccioLabel->Location = System::Drawing::Point(215, 232);
			this->direccioLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->direccioLabel->Name = L"direccioLabel";
			this->direccioLabel->Size = System::Drawing::Size(0, 22);
			this->direccioLabel->TabIndex = 7;
			// 
			// SessionButtob
			// 
			this->SessionButtob->Location = System::Drawing::Point(457, 166);
			this->SessionButtob->Name = L"SessionButtob";
			this->SessionButtob->Size = System::Drawing::Size(75, 23);
			this->SessionButtob->TabIndex = 8;
			this->SessionButtob->Text = L"Sessions";
			this->SessionButtob->UseVisualStyleBackColor = true;
			this->SessionButtob->Click += gcnew System::EventHandler(this, &ProgamarSessioEstudiUI::SessionButtob_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(182, 214);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(208, 20);
			this->dateTimePicker1->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(105, 210);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Data";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(104, 257);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 22);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Hora Inici";
			// 
			// horaINumeric
			// 
			this->horaINumeric->Location = System::Drawing::Point(187, 257);
			this->horaINumeric->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->horaINumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->horaINumeric->Name = L"horaINumeric";
			this->horaINumeric->Size = System::Drawing::Size(50, 20);
			this->horaINumeric->TabIndex = 12;
			// 
			// horaFnumeric
			// 
			this->horaFnumeric->Location = System::Drawing::Point(340, 257);
			this->horaFnumeric->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->horaFnumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->horaFnumeric->Name = L"horaFnumeric";
			this->horaFnumeric->Size = System::Drawing::Size(50, 20);
			this->horaFnumeric->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(251, 257);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 22);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Hora Final";
			// 
			// buttonOK
			// 
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOK->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonOK->Location = System::Drawing::Point(422, 257);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(110, 46);
			this->buttonOK->TabIndex = 15;
			this->buttonOK->Text = L"Programa";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &ProgamarSessioEstudiUI::buttonOK_Click);
			// 
			// ProgamarSessioEstudiUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->horaFnumeric);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->horaINumeric);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->SessionButtob);
			this->Controls->Add(this->direccioLabel);
			this->Controls->Add(this->espaiComboBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->grupComboBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ProgamarSessioEstudiUI";
			this->Text = L"ConsultarGrup";
			this->Load += gcnew System::EventHandler(this, &ProgamarSessioEstudiUI::ConsultarGrup_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->horaINumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->horaFnumeric))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ConsultarGrup_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cencel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	
	};
};
