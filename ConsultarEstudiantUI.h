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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(194, 62);
			this->label1->Margin = System::Windows::Forms::Padding(30, 0, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(938, 84);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Consultar Informació Estudiant";
			this->label1->Click += gcnew System::EventHandler(this, &ConsultarEstudiantUI::label1_Click);
			// 
			// Label
			// 
			this->Label->AutoSize = true;
			this->Label->Location = System::Drawing::Point(108, 185);
			this->Label->Name = L"Label";
			this->Label->Size = System::Drawing::Size(81, 32);
			this->Label->TabIndex = 1;
			this->Label->Text = L"Nom:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(108, 255);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cognom:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(108, 339);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(201, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nom d\'usuari:  ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(108, 413);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 32);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Correu Electronic:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(108, 489);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 32);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Idioma Preferit: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(108, 568);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 32);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Localitat: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(108, 653);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(325, 32);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Numero de Valoracions: ";
			// 
			// nomLabel
			// 
			this->nomLabel->AutoSize = true;
			this->nomLabel->Location = System::Drawing::Point(443, 185);
			this->nomLabel->Name = L"nomLabel";
			this->nomLabel->Size = System::Drawing::Size(0, 32);
			this->nomLabel->TabIndex = 8;
			// 
			// cognomLabel
			// 
			this->cognomLabel->AutoSize = true;
			this->cognomLabel->Location = System::Drawing::Point(443, 255);
			this->cognomLabel->Name = L"cognomLabel";
			this->cognomLabel->Size = System::Drawing::Size(0, 32);
			this->cognomLabel->TabIndex = 9;
			// 
			// nomUsuariLabel
			// 
			this->nomUsuariLabel->AutoSize = true;
			this->nomUsuariLabel->Location = System::Drawing::Point(443, 330);
			this->nomUsuariLabel->Name = L"nomUsuariLabel";
			this->nomUsuariLabel->Size = System::Drawing::Size(0, 32);
			this->nomUsuariLabel->TabIndex = 10;
			// 
			// correuLabel
			// 
			this->correuLabel->AutoSize = true;
			this->correuLabel->Location = System::Drawing::Point(443, 413);
			this->correuLabel->Name = L"correuLabel";
			this->correuLabel->Size = System::Drawing::Size(0, 32);
			this->correuLabel->TabIndex = 11;
			// 
			// idiomaLabel
			// 
			this->idiomaLabel->AutoSize = true;
			this->idiomaLabel->Location = System::Drawing::Point(443, 489);
			this->idiomaLabel->Name = L"idiomaLabel";
			this->idiomaLabel->Size = System::Drawing::Size(0, 32);
			this->idiomaLabel->TabIndex = 12;
			// 
			// localitatLabel
			// 
			this->localitatLabel->AutoSize = true;
			this->localitatLabel->Location = System::Drawing::Point(437, 558);
			this->localitatLabel->Name = L"localitatLabel";
			this->localitatLabel->Size = System::Drawing::Size(0, 32);
			this->localitatLabel->TabIndex = 13;
			// 
			// valoracionsLabel
			// 
			this->valoracionsLabel->AutoSize = true;
			this->valoracionsLabel->Location = System::Drawing::Point(443, 644);
			this->valoracionsLabel->Name = L"valoracionsLabel";
			this->valoracionsLabel->Size = System::Drawing::Size(0, 32);
			this->valoracionsLabel->TabIndex = 14;
			// 
			// ConsultarEstudiantUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1162, 809);
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
		try
		{
			tx.executar();
			nomLabel->Text = tx.nom;
			cognomLabel->Text = tx.cognom;
			nomUsuariLabel->Text = tx.nomUsuari;
			correuLabel->Text = tx.correu;
			idiomaLabel->Text = tx.idioma;
			localitatLabel->Text = tx.localitat;
			valoracionsLabel->Text = tx.numValoracions.ToString();
		}
		catch (Exception^ e)
		{
			

		}
		
	}
};
}
