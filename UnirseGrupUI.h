#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UnirseGrupUI
	/// </summary>
	public ref class UnirseGrupUI : public System::Windows::Forms::Form
	{
	public:
		UnirseGrupUI(void)
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
		~UnirseGrupUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonUnirse;
	private: System::Windows::Forms::Label^ Usuari;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
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
			this->ButtonUnirse = (gcnew System::Windows::Forms::Button());
			this->Usuari = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ButtonUnirse
			// 
			this->ButtonUnirse->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->ButtonUnirse->Location = System::Drawing::Point(400, 249);
			this->ButtonUnirse->Name = L"ButtonUnirse";
			this->ButtonUnirse->Size = System::Drawing::Size(108, 28);
			this->ButtonUnirse->TabIndex = 6;
			this->ButtonUnirse->Text = L"Unirse";
			this->ButtonUnirse->UseVisualStyleBackColor = true;
			// 
			// Usuari
			// 
			this->Usuari->AutoSize = true;
			this->Usuari->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Usuari->Location = System::Drawing::Point(30, 101);
			this->Usuari->Name = L"Usuari";
			this->Usuari->Size = System::Drawing::Size(40, 13);
			this->Usuari->TabIndex = 11;
			this->Usuari->Text = L"Usuari:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(134, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Comentari:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(247, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Valoracio:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(30, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Grup:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(134, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Temàtica:";
			// 
			// UnirseGrupUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(520, 289);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Usuari);
			this->Controls->Add(this->ButtonUnirse);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UnirseGrupUI";
			this->Text = L"UnirseGrupUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
