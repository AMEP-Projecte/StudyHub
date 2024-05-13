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
			this->textBenvinguda = (gcnew System::Windows::Forms::Label());
			this->consultaSessions = (gcnew System::Windows::Forms::Button());
			this->editaSessions = (gcnew System::Windows::Forms::Button());
			this->programaSessio = (gcnew System::Windows::Forms::Button());
			this->esborraSessio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBenvinguda
			// 
			this->textBenvinguda->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBenvinguda->AutoSize = true;
			this->textBenvinguda->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->textBenvinguda->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textBenvinguda->Location = System::Drawing::Point(174, 40);
			this->textBenvinguda->Name = L"textBenvinguda";
			this->textBenvinguda->Size = System::Drawing::Size(259, 42);
			this->textBenvinguda->TabIndex = 10;
			this->textBenvinguda->Text = L"Menu Sessions";
			// 
			// consultaSessions
			// 
			this->consultaSessions->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->consultaSessions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consultaSessions->ForeColor = System::Drawing::Color::DarkCyan;
			this->consultaSessions->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->consultaSessions->Location = System::Drawing::Point(117, 141);
			this->consultaSessions->Margin = System::Windows::Forms::Padding(2);
			this->consultaSessions->Name = L"consultaSessions";
			this->consultaSessions->Size = System::Drawing::Size(138, 51);
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
			this->editaSessions->Location = System::Drawing::Point(364, 141);
			this->editaSessions->Margin = System::Windows::Forms::Padding(2);
			this->editaSessions->Name = L"editaSessions";
			this->editaSessions->Size = System::Drawing::Size(141, 51);
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
			this->programaSessio->Location = System::Drawing::Point(117, 223);
			this->programaSessio->Margin = System::Windows::Forms::Padding(2);
			this->programaSessio->Name = L"programaSessio";
			this->programaSessio->Size = System::Drawing::Size(138, 52);
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
			this->esborraSessio->Location = System::Drawing::Point(364, 223);
			this->esborraSessio->Margin = System::Windows::Forms::Padding(2);
			this->esborraSessio->Name = L"esborraSessio";
			this->esborraSessio->Size = System::Drawing::Size(141, 52);
			this->esborraSessio->TabIndex = 14;
			this->esborraSessio->Text = L"Esborrar Sessió";
			this->esborraSessio->UseVisualStyleBackColor = true;
			this->esborraSessio->Click += gcnew System::EventHandler(this, &MenuSessionsUI::esborraSessio_Click);
			// 
			// MenuSessionsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->esborraSessio);
			this->Controls->Add(this->consultaSessions);
			this->Controls->Add(this->editaSessions);
			this->Controls->Add(this->programaSessio);
			this->Controls->Add(this->textBenvinguda);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuSessionsUI";
			this->Text = L"MenuSessionsUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void consultaSessions_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void editaSessions_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void esborraSessio_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void programaSessio_Click(System::Object^ sender, System::EventArgs^ e);
};
}
