#pragma once
#include "TxParticipacioSessio.h"

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
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(140, 164);
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
			// ParticipaSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 512);
			this->Controls->Add(this->confirmar);
			this->Controls->Add(this->cencel);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ParticipaSessio";
			this->Text = L"confirmar";
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

	private: System::Void confirmar_Click(System::Object^ sender, System::EventArgs^ e) {
		Sistema^ sist = Sistema::getInstance();
		TxParticipacioSessio participa(sist->obteEstudiant()->obteUsername(), );
			participa.executar();



		
	}
	private: System::Void theme_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
