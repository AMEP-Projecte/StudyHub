#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EsborraSessioUI
	/// </summary>
	public ref class EsborraSessioUI : public System::Windows::Forms::Form
	{
	public:
		EsborraSessioUI(void)
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
		~EsborraSessioUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonTornar;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;

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
			this->ButtonTornar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// ButtonTornar
			// 
			this->ButtonTornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonTornar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonTornar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->ButtonTornar->Location = System::Drawing::Point(290, 305);
			this->ButtonTornar->Name = L"ButtonTornar";
			this->ButtonTornar->Size = System::Drawing::Size(144, 36);
			this->ButtonTornar->TabIndex = 14;
			this->ButtonTornar->Text = L"Tornar";
			this->ButtonTornar->UseVisualStyleBackColor = false;
			this->ButtonTornar->Click += gcnew System::EventHandler(this, &EsborraSessioUI::ButtonTornar_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(10, 316);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Hora inici:";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->ForeColor = System::Drawing::Color::DarkCyan;
			this->button3->Location = System::Drawing::Point(440, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 36);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EsborraSessioUI::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(100, 318);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 20);
			this->textBox1->TabIndex = 9;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(14, 86);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(583, 176);
			this->dataGridView1->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(9, 274);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 30);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Eliminar Sessio:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(168, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 36);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Sessions Actuals:";
			// 
			// EsborraSessioUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->ButtonTornar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EsborraSessioUI";
			this->Text = L"EsborraSessioUI";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void omplir();

	private: System::Void ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

};
}
