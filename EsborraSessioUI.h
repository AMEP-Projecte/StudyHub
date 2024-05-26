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
			
			//
			//TODO: Add the constructor code here
			//
		}
		String^ _grup = "";
		String^ _data = "";
		String^ _adreca = "";
		String^ _hora_inici = "";
		String^ _hora_fi = "";
		int _llocs;

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

	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ButtonTornar
			// 
			this->ButtonTornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonTornar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonTornar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonTornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->ButtonTornar->Location = System::Drawing::Point(49, 422);
			this->ButtonTornar->Margin = System::Windows::Forms::Padding(4);
			this->ButtonTornar->Name = L"ButtonTornar";
			this->ButtonTornar->Size = System::Drawing::Size(216, 50);
			this->ButtonTornar->TabIndex = 14;
			this->ButtonTornar->Text = L"Tornar";
			this->ButtonTornar->UseVisualStyleBackColor = false;
			this->ButtonTornar->Click += gcnew System::EventHandler(this, &EsborraSessioUI::ButtonTornar_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->ForeColor = System::Drawing::Color::DarkCyan;
			this->button3->Location = System::Drawing::Point(649, 422);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(216, 50);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EsborraSessioUI::button3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(262, 9);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(380, 52);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Eliminar Sessions:";
			
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 64);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(886, 305);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(4, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(878, 41);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Les meves sessions";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// EsborraSessioUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 512);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->ButtonTornar);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"EsborraSessioUI";
			this->Text = L"EsborraSessioUI";
			this->Load += gcnew System::EventHandler(this, &EsborraSessioUI::EsborraSessio_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EsborraSessio_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void labelenfila_Click(Object^ sender, EventArgs^ e);
	private: System::Void fila_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void selecciona(TableLayoutPanel^ table);
};
}
