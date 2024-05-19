#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuSessionsUI
	/// </summary>
	public ref class MenuSessionsUI : public System::Windows::Forms::Form
	{
	public:
		MenuSessionsUI(void)
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
		~MenuSessionsUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textBenvinguda;
	private: System::Windows::Forms::Button^ consultaSessions;
	private: System::Windows::Forms::Button^ editaSessions;
	private: System::Windows::Forms::Button^ programaSessio;

	private: System::Windows::Forms::Button^ esborraSessio;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;



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
			this->textBenvinguda = (gcnew System::Windows::Forms::Label());
			this->consultaSessions = (gcnew System::Windows::Forms::Button());
			this->editaSessions = (gcnew System::Windows::Forms::Button());
			this->programaSessio = (gcnew System::Windows::Forms::Button());
			this->esborraSessio = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBenvinguda
			// 
			this->textBenvinguda->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBenvinguda->AutoSize = true;
			this->textBenvinguda->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->textBenvinguda->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textBenvinguda->Location = System::Drawing::Point(200, 34);
			this->textBenvinguda->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textBenvinguda->Name = L"textBenvinguda";
			this->textBenvinguda->Size = System::Drawing::Size(481, 64);
			this->textBenvinguda->TabIndex = 10;
			this->textBenvinguda->Text = L"Gestionar Sessions";
			this->textBenvinguda->Click += gcnew System::EventHandler(this, &MenuSessionsUI::textBenvinguda_Click);
			// 
			// consultaSessions
			// 
			this->consultaSessions->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->consultaSessions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consultaSessions->ForeColor = System::Drawing::Color::DarkCyan;
			this->consultaSessions->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->consultaSessions->Location = System::Drawing::Point(36, 111);
			this->consultaSessions->Name = L"consultaSessions";
			this->consultaSessions->Size = System::Drawing::Size(207, 71);
			this->consultaSessions->TabIndex = 11;
			this->consultaSessions->Text = L"Consultar Sessions i Participa";
			this->consultaSessions->UseVisualStyleBackColor = true;
			this->consultaSessions->Click += gcnew System::EventHandler(this, &MenuSessionsUI::consultaSessions_Click);
			// 
			// editaSessions
			// 
			this->editaSessions->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->editaSessions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editaSessions->ForeColor = System::Drawing::Color::DarkCyan;
			this->editaSessions->Location = System::Drawing::Point(36, 299);
			this->editaSessions->Name = L"editaSessions";
			this->editaSessions->Size = System::Drawing::Size(212, 71);
			this->editaSessions->TabIndex = 12;
			this->editaSessions->Text = L"Editar Sessions";
			this->editaSessions->UseVisualStyleBackColor = true;
			this->editaSessions->Click += gcnew System::EventHandler(this, &MenuSessionsUI::editaSessions_Click);
			// 
			// programaSessio
			// 
			this->programaSessio->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->programaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->programaSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->programaSessio->Location = System::Drawing::Point(36, 202);
			this->programaSessio->Name = L"programaSessio";
			this->programaSessio->Size = System::Drawing::Size(207, 72);
			this->programaSessio->TabIndex = 13;
			this->programaSessio->Text = L"Programar Sessió";
			this->programaSessio->UseVisualStyleBackColor = true;
			this->programaSessio->Click += gcnew System::EventHandler(this, &MenuSessionsUI::programaSessio_Click);
			// 
			// esborraSessio
			// 
			this->esborraSessio->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->esborraSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->esborraSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->esborraSessio->Location = System::Drawing::Point(36, 391);
			this->esborraSessio->Name = L"esborraSessio";
			this->esborraSessio->Size = System::Drawing::Size(212, 72);
			this->esborraSessio->TabIndex = 14;
			this->esborraSessio->Text = L"Esborrar Sessió";
			this->esborraSessio->UseVisualStyleBackColor = true;
			this->esborraSessio->Click += gcnew System::EventHandler(this, &MenuSessionsUI::esborraSessio_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(294, 114);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(576, 329);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(4, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(568, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sessions participables";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuSessionsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 512);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->esborraSessio);
			this->Controls->Add(this->consultaSessions);
			this->Controls->Add(this->editaSessions);
			this->Controls->Add(this->programaSessio);
			this->Controls->Add(this->textBenvinguda);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MenuSessionsUI";
			this->Text = L"MenuSessionsUI";
			this->Load += gcnew System::EventHandler(this, &MenuSessionsUI::MenuSessionsUI_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void consultaSessions_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void editaSessions_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void esborraSessio_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void programaSessio_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBenvinguda_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MenuSessionsUI_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}