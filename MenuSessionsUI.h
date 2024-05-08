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
	private: System::Windows::Forms::Button^ ButtonIniciarSessio;
	private: System::Windows::Forms::Button^ registrar;
	private: System::Windows::Forms::Button^ sortir;
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
			this->ButtonIniciarSessio = (gcnew System::Windows::Forms::Button());
			this->registrar = (gcnew System::Windows::Forms::Button());
			this->sortir = (gcnew System::Windows::Forms::Button());
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
			// ButtonIniciarSessio
			// 
			this->ButtonIniciarSessio->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonIniciarSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ButtonIniciarSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->ButtonIniciarSessio->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->ButtonIniciarSessio->Location = System::Drawing::Point(120, 152);
			this->ButtonIniciarSessio->Margin = System::Windows::Forms::Padding(2);
			this->ButtonIniciarSessio->Name = L"ButtonIniciarSessio";
			this->ButtonIniciarSessio->Size = System::Drawing::Size(138, 51);
			this->ButtonIniciarSessio->TabIndex = 11;
			this->ButtonIniciarSessio->Text = L"1";
			this->ButtonIniciarSessio->UseVisualStyleBackColor = true;
			this->ButtonIniciarSessio->Click += gcnew System::EventHandler(this, &MenuSessionsUI::ButtonIniciarSessio_Click);
			// 
			// registrar
			// 
			this->registrar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->registrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registrar->ForeColor = System::Drawing::Color::DarkCyan;
			this->registrar->Location = System::Drawing::Point(345, 152);
			this->registrar->Margin = System::Windows::Forms::Padding(2);
			this->registrar->Name = L"registrar";
			this->registrar->Size = System::Drawing::Size(141, 51);
			this->registrar->TabIndex = 12;
			this->registrar->Text = L"2";
			this->registrar->UseVisualStyleBackColor = true;
			// 
			// sortir
			// 
			this->sortir->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sortir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sortir->ForeColor = System::Drawing::Color::DarkCyan;
			this->sortir->Location = System::Drawing::Point(223, 272);
			this->sortir->Margin = System::Windows::Forms::Padding(2);
			this->sortir->Name = L"sortir";
			this->sortir->Size = System::Drawing::Size(156, 51);
			this->sortir->TabIndex = 13;
			this->sortir->Text = L"3";
			this->sortir->UseVisualStyleBackColor = true;
			// 
			// MenuSessionsUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->ButtonIniciarSessio);
			this->Controls->Add(this->registrar);
			this->Controls->Add(this->sortir);
			this->Controls->Add(this->textBenvinguda);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuSessionsUI";
			this->Text = L"MenuSessionsUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonIniciarSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
