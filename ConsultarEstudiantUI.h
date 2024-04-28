#pragma once
#include"TxConsultarEstudiant.h"
namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConsultarEstudiantUI
	/// </summary>
	public ref class ConsultarEstudiantUI : public System::Windows::Forms::Form
	{
	public:
		ConsultarEstudiantUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ConsultarEstudiantUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Label;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ nomLabel;
	private: System::Windows::Forms::Label^ cognomLabel;
	private: System::Windows::Forms::Label^ nomUsuariLabel;
	private: System::Windows::Forms::Label^ correuLabel;
	private: System::Windows::Forms::Label^ idiomaLabel;
	private: System::Windows::Forms::Label^ localitatLabel;
	private: System::Windows::Forms::Label^ valoracionsLabel;
	private: System::Windows::Forms::Button^ TancarButton;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nomLabel = (gcnew System::Windows::Forms::Label());
			this->cognomLabel = (gcnew System::Windows::Forms::Label());
			this->nomUsuariLabel = (gcnew System::Windows::Forms::Label());
			this->correuLabel = (gcnew System::Windows::Forms::Label());
			this->idiomaLabel = (gcnew System::Windows::Forms::Label());
			this->localitatLabel = (gcnew System::Windows::Forms::Label());
			this->valoracionsLabel = (gcnew System::Windows::Forms::Label());
			this->TancarButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(124, 9);
			this->label1->Margin = System::Windows::Forms::Padding(11, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Consultar Informació Estudiant";
			this->label1->Click += gcnew System::EventHandler(this, &ConsultarEstudiantUI::label1_Click);
			// 
			// Label
			// 
			this->Label->AutoSize = true;
			this->Label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Label->Location = System::Drawing::Point(128, 59);
			this->Label->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->Label->Name = L"Label";
			this->Label->Size = System::Drawing::Size(32, 13);
			this->Label->TabIndex = 1;
			this->Label->Text = L"Nom:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(128, 89);
			this->label2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cognom:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(128, 121);
			this->label3->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nom d\'usuari:  ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(128, 153);
			this->label4->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Correu Electronic:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(128, 186);
			this->label5->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Idioma Preferit: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(128, 220);
			this->label6->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Localitat: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(128, 252);
			this->label7->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Numero de Valoracions: ";
			// 
			// nomLabel
			// 
			this->nomLabel->AutoSize = true;
			this->nomLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nomLabel->Location = System::Drawing::Point(251, 59);
			this->nomLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->nomLabel->Name = L"nomLabel";
			this->nomLabel->Size = System::Drawing::Size(53, 13);
			this->nomLabel->TabIndex = 8;
			this->nomLabel->Text = L"nomLabel";
			// 
			// cognomLabel
			// 
			this->cognomLabel->AutoSize = true;
			this->cognomLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cognomLabel->Location = System::Drawing::Point(251, 89);
			this->cognomLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->cognomLabel->Name = L"cognomLabel";
			this->cognomLabel->Size = System::Drawing::Size(71, 13);
			this->cognomLabel->TabIndex = 9;
			this->cognomLabel->Text = L"cognomLabel";
			this->cognomLabel->Click += gcnew System::EventHandler(this, &ConsultarEstudiantUI::cognomLabel_Click);
			// 
			// nomUsuariLabel
			// 
			this->nomUsuariLabel->AutoSize = true;
			this->nomUsuariLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nomUsuariLabel->Location = System::Drawing::Point(251, 121);
			this->nomUsuariLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->nomUsuariLabel->Name = L"nomUsuariLabel";
			this->nomUsuariLabel->Size = System::Drawing::Size(83, 13);
			this->nomUsuariLabel->TabIndex = 10;
			this->nomUsuariLabel->Text = L"nomUsuariLabel";
			// 
			// correuLabel
			// 
			this->correuLabel->AutoSize = true;
			this->correuLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->correuLabel->Location = System::Drawing::Point(251, 153);
			this->correuLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->correuLabel->Name = L"correuLabel";
			this->correuLabel->Size = System::Drawing::Size(63, 13);
			this->correuLabel->TabIndex = 11;
			this->correuLabel->Text = L"correuLabel";
			// 
			// idiomaLabel
			// 
			this->idiomaLabel->AutoSize = true;
			this->idiomaLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->idiomaLabel->Location = System::Drawing::Point(251, 186);
			this->idiomaLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->idiomaLabel->Name = L"idiomaLabel";
			this->idiomaLabel->Size = System::Drawing::Size(63, 13);
			this->idiomaLabel->TabIndex = 12;
			this->idiomaLabel->Text = L"idiomaLabel";
			// 
			// localitatLabel
			// 
			this->localitatLabel->AutoSize = true;
			this->localitatLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->localitatLabel->Location = System::Drawing::Point(251, 220);
			this->localitatLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->localitatLabel->Name = L"localitatLabel";
			this->localitatLabel->Size = System::Drawing::Size(69, 13);
			this->localitatLabel->TabIndex = 13;
			this->localitatLabel->Text = L"localitatLabel";
			// 
			// valoracionsLabel
			// 
			this->valoracionsLabel->AutoSize = true;
			this->valoracionsLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->valoracionsLabel->Location = System::Drawing::Point(251, 252);
			this->valoracionsLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->valoracionsLabel->Name = L"valoracionsLabel";
			this->valoracionsLabel->Size = System::Drawing::Size(87, 13);
			this->valoracionsLabel->TabIndex = 14;
			this->valoracionsLabel->Text = L"valoracionsLabel";
			// 
			// TancarButton
			// 
			this->TancarButton->ForeColor = System::Drawing::Color::DarkCyan;
			this->TancarButton->Location = System::Drawing::Point(229, 280);
			this->TancarButton->Name = L"TancarButton";
			this->TancarButton->Size = System::Drawing::Size(150, 35);
			this->TancarButton->TabIndex = 15;
			this->TancarButton->Text = L"Tancar";
			this->TancarButton->UseVisualStyleBackColor = true;
			this->TancarButton->Click += gcnew System::EventHandler(this, &ConsultarEstudiantUI::TancarButton_Click);
			// 
			// ConsultarEstudiantUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->TancarButton);
			this->Controls->Add(this->valoracionsLabel);
			this->Controls->Add(this->localitatLabel);
			this->Controls->Add(this->idiomaLabel);
			this->Controls->Add(this->correuLabel);
			this->Controls->Add(this->nomUsuariLabel);
			this->Controls->Add(this->cognomLabel);
			this->Controls->Add(this->nomLabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Label);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"ConsultarEstudiantUI";
			this->Text = L"ConsultarEstudiantUI";
			this->Load += gcnew System::EventHandler(this, &ConsultarEstudiantUI::ConsultarEstudiantUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ConsultarEstudiantUI_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultarEstudiant tx("");
		//try
		//{
			tx.executar();
			nomLabel->Text = tx.nom;
			cognomLabel->Text = tx.cognom;
			nomUsuariLabel->Text = tx.nomUsuari;
			correuLabel->Text = tx.correu;
			idiomaLabel->Text = tx.idioma;
			localitatLabel->Text = tx.localitat;
			valoracionsLabel->Text = tx.numValoracions.ToString();
		/* }
		catch (Exception^ e)
		{
			

		}*/
		
	}
private: System::Void cognomLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TancarButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
