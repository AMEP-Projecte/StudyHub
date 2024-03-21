#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConsultarEstudiant
	/// </summary>
	public ref class ConsultarEstudiant : public System::Windows::Forms::Form
	{
	public:
		ConsultarEstudiant(void)
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
		~ConsultarEstudiant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label7;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ listBox1;
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
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(186, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Crear Perfil d\'Estudiant";
			this->label1->Click += gcnew System::EventHandler(this, &ConsultarEstudiant::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom i Cognoms";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correu Electronic";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Nom d\'usuari";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(69, 339);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Idioma Preferit";
			this->label7->Click += gcnew System::EventHandler(this, &ConsultarEstudiant::label7_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(646, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 13;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(478, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 20);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Grups als que pertany";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(73, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L".";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(69, 251);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L".";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(73, 303);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L".";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(73, 359);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L".";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(482, 190);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(239, 264);
			this->listBox1->TabIndex = 19;
			// 
			// ConsultarEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 574);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ConsultarEstudiant";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &ConsultarEstudiant::ConsultarEstudiant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
#pragma endregion
	private: System::Void ConsultarEstudiant_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
