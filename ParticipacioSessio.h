#pragma once
#include "TxParticipacioSessio.h"
#include "MenuPrincipal.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	
	/// </summary>
	public ref class ParticipaSessio : public System::Windows::Forms::Form
	{
	public:
		ParticipaSessio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		String^ grup="";
		String^ data="";
		String^ horaInici="";
		String^ horaFi = "";
		String^ adreca = "";

	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
		   

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ParticipaSessio()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::TextBox^ horasessio;
	private: System::Windows::Forms::Button^ cencel;
	private: System::Windows::Forms::Button^ confirmar;








	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->horasessio = (gcnew System::Windows::Forms::TextBox());
			this->cencel = (gcnew System::Windows::Forms::Button());
			this->confirmar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(125, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(659, 64);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Vols participar a la sessió\?";
			// 
			// horasessio
			// 
			this->horasessio->Location = System::Drawing::Point(194, 133);
			this->horasessio->Margin = System::Windows::Forms::Padding(2);
			this->horasessio->Name = L"horasessio";
			this->horasessio->Size = System::Drawing::Size(300, 28);
			this->horasessio->TabIndex = 3;
			this->horasessio->TextChanged += gcnew System::EventHandler(this, &ParticipaSessio::textBox1_TextChanged);
			// 
			// cencel
			// 
			this->cencel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cencel->ForeColor = System::Drawing::Color::DarkCyan;
			this->cencel->Location = System::Drawing::Point(162, 360);
			this->cencel->Name = L"cencel";
			this->cencel->Size = System::Drawing::Size(195, 48);
			this->cencel->TabIndex = 6;
			this->cencel->Text = L"Tornar";
			this->cencel->UseVisualStyleBackColor = true;
			this->cencel->Click += gcnew System::EventHandler(this, &ParticipaSessio::cencel_Click);
			// 
			// confirmar
			// 
			this->confirmar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmar->ForeColor = System::Drawing::Color::DarkCyan;
			this->confirmar->Location = System::Drawing::Point(555, 360);
			this->confirmar->Name = L"confirmar";
			this->confirmar->Size = System::Drawing::Size(195, 48);
			this->confirmar->TabIndex = 7;
			this->confirmar->Text = L"Sí";
			this->confirmar->UseVisualStyleBackColor = true;
			this->confirmar->Click += gcnew System::EventHandler(this, &ParticipaSessio::confirmar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(130, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(324, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 31);
			this->label3->TabIndex = 1;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(513, 265);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 31);
			this->label4->TabIndex = 1;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(697, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 31);
			this->label5->TabIndex = 1;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(129, 213);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 37);
			this->label6->TabIndex = 8;
			this->label6->Text = L"grup:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(323, 213);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 37);
			this->label7->TabIndex = 9;
			this->label7->Text = L"data:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(478, 213);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 37);
			this->label8->TabIndex = 10;
			this->label8->Text = L"hora inici:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(687, 213);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 37);
			this->label9->TabIndex = 11;
			this->label9->Text = L"hora fi:";
			// 
			// ParticipaSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 512);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->confirmar);
			this->Controls->Add(this->cencel);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ParticipaSessio";
			this->Text = L"confirmar";
			this->Load += gcnew System::EventHandler(this, &ParticipaSessio::Participa_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Participa_Load(System::Object^ sender, System::EventArgs^ e) {
		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		menu->ButtonMenuEstudiant->Visible = true;
		menu->ButtonMenuGrups->Visible = true;
		menu->buttonMenuSessions->Visible = true;

		label1->Text = grup;
		label3->Text = data;
		label4->Text = horaInici;
		label5->Text = horaFi;
	}
	private: System::Void cencel_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void confirmar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void theme_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
