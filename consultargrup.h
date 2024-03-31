#pragma once
#include "TxConsultarGrup.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultarGrup
	/// </summary>
	public ref class ConsultarGrup : public System::Windows::Forms::Form
	{
	public:
		ConsultarGrup(void)
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
		~ConsultarGrup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ nomGrup;

	private: System::Windows::Forms::Label^ theme;
	private: System::Windows::Forms::Label^ participants;
	private: System::Windows::Forms::Button^ cencel;
	private: System::Windows::Forms::Button^ consulta;
	private: System::Windows::Forms::Label^ labelTematica;
	private: System::Windows::Forms::Label^ labelParticipants;













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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nomGrup = (gcnew System::Windows::Forms::TextBox());
			this->theme = (gcnew System::Windows::Forms::Label());
			this->participants = (gcnew System::Windows::Forms::Label());
			this->cencel = (gcnew System::Windows::Forms::Button());
			this->consulta = (gcnew System::Windows::Forms::Button());
			this->labelTematica = (gcnew System::Windows::Forms::Label());
			this->labelParticipants = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"StudyHub";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Consultar Grup d\'Estudi";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gainsboro;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(306, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nom del grup que es vol consultar";
			this->label3->Click += gcnew System::EventHandler(this, &ConsultarGrup::label3_Click);
			// 
			// nomGrup
			// 
			this->nomGrup->Location = System::Drawing::Point(348, 127);
			this->nomGrup->Name = L"nomGrup";
			this->nomGrup->Size = System::Drawing::Size(320, 26);
			this->nomGrup->TabIndex = 3;
			this->nomGrup->TextChanged += gcnew System::EventHandler(this, &ConsultarGrup::textBox1_TextChanged);
			// 
			// theme
			// 
			this->theme->AutoSize = true;
			this->theme->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->theme->Location = System::Drawing::Point(196, 239);
			this->theme->Name = L"theme";
			this->theme->Size = System::Drawing::Size(99, 25);
			this->theme->TabIndex = 4;
			this->theme->Text = L"Tem�tica:";
			// 
			// participants
			// 
			this->participants->AutoSize = true;
			this->participants->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->participants->Location = System::Drawing::Point(75, 286);
			this->participants->Name = L"participants";
			this->participants->Size = System::Drawing::Size(220, 25);
			this->participants->TabIndex = 5;
			this->participants->Text = L"Nombre de Participants:";
			// 
			// cencel
			// 
			this->cencel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cencel->Location = System::Drawing::Point(19, 368);
			this->cencel->Name = L"cencel";
			this->cencel->Size = System::Drawing::Size(130, 44);
			this->cencel->TabIndex = 6;
			this->cencel->Text = L"Tornar";
			this->cencel->UseVisualStyleBackColor = true;
			this->cencel->Click += gcnew System::EventHandler(this, &ConsultarGrup::cencel_Click);
			// 
			// consulta
			// 
			this->consulta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consulta->Location = System::Drawing::Point(570, 368);
			this->consulta->Name = L"consulta";
			this->consulta->Size = System::Drawing::Size(114, 44);
			this->consulta->TabIndex = 7;
			this->consulta->Text = L"Consultar";
			this->consulta->UseVisualStyleBackColor = true;
			this->consulta->Click += gcnew System::EventHandler(this, &ConsultarGrup::consulta_Click);
			// 
			// labelTematica
			// 
			this->labelTematica->AutoSize = true;
			this->labelTematica->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTematica->Location = System::Drawing::Point(314, 239);
			this->labelTematica->Name = L"labelTematica";
			this->labelTematica->Size = System::Drawing::Size(19, 25);
			this->labelTematica->TabIndex = 8;
			this->labelTematica->Text = L"-";
			// 
			// labelParticipants
			// 
			this->labelParticipants->AutoSize = true;
			this->labelParticipants->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelParticipants->Location = System::Drawing::Point(314, 291);
			this->labelParticipants->Name = L"labelParticipants";
			this->labelParticipants->Size = System::Drawing::Size(19, 25);
			this->labelParticipants->TabIndex = 9;
			this->labelParticipants->Text = L"-";
			// 
			// ConsultarGrup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 424);
			this->Controls->Add(this->labelParticipants);
			this->Controls->Add(this->labelTematica);
			this->Controls->Add(this->consulta);
			this->Controls->Add(this->cencel);
			this->Controls->Add(this->participants);
			this->Controls->Add(this->theme);
			this->Controls->Add(this->nomGrup);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultarGrup";
			this->Text = L"ConsultarGrup";
			this->Load += gcnew System::EventHandler(this, &ConsultarGrup::ConsultarGrup_Load);
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

private: System::Void consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom = this->nomGrup->Text;

	try {
		if (nom == "") {
			MessageBox::Show("Posa un nom de grup, si us plau.");
		}
		else {
			TxConsultaGrup^ tx = gcnew TxConsultaGrup(nom);
			tx->executar();

			labelTematica->Text = tx->_tematica;

			int p = tx->_nombreParticipants;
			labelParticipants->Text = p.ToString();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
