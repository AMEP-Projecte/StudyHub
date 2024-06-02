#pragma once
#include "MenuPrincipal.h"
#include "MenuGestioEspais.h"
namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de ConsultarEspaiUI
	/// </summary>
	public ref class ConsultarEspaiUI : public System::Windows::Forms::Form
	{
	public:
		ConsultarEspaiUI(void)
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
		~ConsultarEspaiUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1titulo;
	private: System::Windows::Forms::Label^ label2adr;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3nom;
	private: System::Windows::Forms::Label^ label4cap;


	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::Label^ labelCapacitat;
	private: System::Windows::Forms::Label^ label5prov;
	private: System::Windows::Forms::Label^ labelProveidor;
	private: System::Windows::Forms::Button^ tornar;
	private: System::Windows::Forms::Button^ botonetconsultar;







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
		void InitializeComponent(void)
		{
			this->label1titulo = (gcnew System::Windows::Forms::Label());
			this->label2adr = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3nom = (gcnew System::Windows::Forms::Label());
			this->label4cap = (gcnew System::Windows::Forms::Label());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->labelCapacitat = (gcnew System::Windows::Forms::Label());
			this->label5prov = (gcnew System::Windows::Forms::Label());
			this->labelProveidor = (gcnew System::Windows::Forms::Label());
			this->tornar = (gcnew System::Windows::Forms::Button());
			this->botonetconsultar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1titulo
			// 
			this->label1titulo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1titulo->AutoSize = true;
			this->label1titulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label1titulo->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1titulo->Location = System::Drawing::Point(225, 53);
			this->label1titulo->Name = L"label1titulo";
			this->label1titulo->Size = System::Drawing::Size(333, 52);
			this->label1titulo->TabIndex = 4;
			this->label1titulo->Text = L"Consultar Espai";
			this->label1titulo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2adr
			// 
			this->label2adr->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2adr->AutoSize = true;
			this->label2adr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label2adr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2adr->Location = System::Drawing::Point(88, 145);
			this->label2adr->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2adr->Name = L"label2adr";
			this->label2adr->Size = System::Drawing::Size(81, 26);
			this->label2adr->TabIndex = 5;
			this->label2adr->Text = L"Adre\u00e7a";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(199, 149);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(491, 22);
			this->textBox1->TabIndex = 9;
			// 
			// label3nom
			// 
			this->label3nom->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3nom->AutoSize = true;
			this->label3nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3nom->Location = System::Drawing::Point(110, 192);
			this->label3nom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3nom->Name = L"label3nom";
			this->label3nom->Size = System::Drawing::Size(59, 26);
			this->label3nom->TabIndex = 10;
			this->label3nom->Text = L"Nom";
			// 
			// label4cap
			// 
			this->label4cap->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4cap->AutoSize = true;
			this->label4cap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label4cap->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4cap->Location = System::Drawing::Point(65, 232);
			this->label4cap->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4cap->Name = L"label4cap";
			this->label4cap->Size = System::Drawing::Size(104, 26);
			this->label4cap->TabIndex = 11;
			this->label4cap->Text = L"Capacitat";
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelNom->Location = System::Drawing::Point(195, 165);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(15, 20);
			this->labelNom->TabIndex = 13;
			this->labelNom->Text = L"-";
			// 
			// labelCapacitat
			// 
			this->labelCapacitat->AutoSize = true;
			this->labelCapacitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCapacitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelCapacitat->Location = System::Drawing::Point(195, 209);
			this->labelCapacitat->Name = L"labelCapacitat";
			this->labelCapacitat->Size = System::Drawing::Size(15, 20);
			this->labelCapacitat->TabIndex = 14;
			this->labelCapacitat->Text = L"-";
			// 
			// label5prov
			// 
			this->label5prov->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5prov->AutoSize = true;
			this->label5prov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label5prov->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5prov->Location = System::Drawing::Point(64, 274);
			this->label5prov->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5prov->Name = L"label5prov";
			this->label5prov->Size = System::Drawing::Size(105, 26);
			this->label5prov->TabIndex = 15;
			this->label5prov->Text = L"Prove\u00efdor";
			// 
			// labelProveidor
			// 
			this->labelProveidor->AutoSize = true;
			this->labelProveidor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelProveidor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelProveidor->Location = System::Drawing::Point(195, 247);
			this->labelProveidor->Name = L"labelProveidor";
			this->labelProveidor->Size = System::Drawing::Size(15, 20);
			this->labelProveidor->TabIndex = 16;
			this->labelProveidor->Text = L"-";
			// 
			// tornar
			// 
			this->tornar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->tornar->Location = System::Drawing::Point(199, 315);
			this->tornar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tornar->Name = L"tornar";
			this->tornar->Size = System::Drawing::Size(186, 51);
			this->tornar->TabIndex = 17;
			this->tornar->Text = L"Tornar";
			this->tornar->UseVisualStyleBackColor = true;
			this->tornar->Click += gcnew System::EventHandler(this, &ConsultarEspaiUI::tornar_Click);
			// 
			// botonetconsultar
			// 
			this->botonetconsultar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonetconsultar->ForeColor = System::Drawing::Color::DarkCyan;
			this->botonetconsultar->Location = System::Drawing::Point(497, 315);
			this->botonetconsultar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botonetconsultar->Name = L"botonetconsultar";
			this->botonetconsultar->Size = System::Drawing::Size(193, 51);
			this->botonetconsultar->TabIndex = 18;
			this->botonetconsultar->Text = L"Consultar Espai";
			this->botonetconsultar->UseVisualStyleBackColor = true;
			this->botonetconsultar->Click += gcnew System::EventHandler(this, &ConsultarEspaiUI::botonetconsultar_Click);
			// 
			// ConsultarEspaiUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->botonetconsultar);
			this->Controls->Add(this->tornar);
			this->Controls->Add(this->labelProveidor);
			this->Controls->Add(this->label5prov);
			this->Controls->Add(this->labelCapacitat);
			this->Controls->Add(this->labelNom);
			this->Controls->Add(this->label4cap);
			this->Controls->Add(this->label3nom);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2adr);
			this->Controls->Add(this->label1titulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConsultarEspaiUI";
			this->Text = L"ConsultarEspaiUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tornar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void botonetconsultar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
