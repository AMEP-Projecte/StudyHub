#pragma once



namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IniciarSessio
	/// </summary>
	public ref class IniciarSessio : public System::Windows::Forms::Form
	{
	public:
		IniciarSessio(void)
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
		~IniciarSessio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textBenvinguda;
	private: System::Windows::Forms::Button^ ButtonIniciarSessio;
	protected:

	private: System::Windows::Forms::Button^ registrar;
	private: System::Windows::Forms::Button^ sortir;

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
			this->textBenvinguda->Location = System::Drawing::Point(107, 59);
			this->textBenvinguda->Name = L"textBenvinguda";
			this->textBenvinguda->Size = System::Drawing::Size(392, 42);
			this->textBenvinguda->TabIndex = 9;
			this->textBenvinguda->Text = L"Benvingut a StudyHub!";
			// 
			// ButtonIniciarSessio
			// 
			this->ButtonIniciarSessio->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ButtonIniciarSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ButtonIniciarSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->ButtonIniciarSessio->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->ButtonIniciarSessio->Location = System::Drawing::Point(120, 141);
			this->ButtonIniciarSessio->Margin = System::Windows::Forms::Padding(2);
			this->ButtonIniciarSessio->Name = L"ButtonIniciarSessio";
			this->ButtonIniciarSessio->Size = System::Drawing::Size(138, 51);
			this->ButtonIniciarSessio->TabIndex = 6;
			this->ButtonIniciarSessio->Text = L"Iniciar Sessió";
			this->ButtonIniciarSessio->UseVisualStyleBackColor = true;
			this->ButtonIniciarSessio->Click += gcnew System::EventHandler(this, &IniciarSessio::ButtonIniciarSessio_Click);
			// 
			// registrar
			// 
			this->registrar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->registrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registrar->ForeColor = System::Drawing::Color::DarkCyan;
			this->registrar->Location = System::Drawing::Point(345, 141);
			this->registrar->Margin = System::Windows::Forms::Padding(2);
			this->registrar->Name = L"registrar";
			this->registrar->Size = System::Drawing::Size(141, 51);
			this->registrar->TabIndex = 7;
			this->registrar->Text = L"Registrar-se";
			this->registrar->UseVisualStyleBackColor = true;
			this->registrar->Click += gcnew System::EventHandler(this, &IniciarSessio::registrar_Click);
			// 
			// sortir
			// 
			this->sortir->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->sortir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sortir->ForeColor = System::Drawing::Color::DarkCyan;
			this->sortir->Location = System::Drawing::Point(223, 261);
			this->sortir->Margin = System::Windows::Forms::Padding(2);
			this->sortir->Name = L"sortir";
			this->sortir->Size = System::Drawing::Size(156, 51);
			this->sortir->TabIndex = 8;
			this->sortir->Text = L"Sortir";
			this->sortir->UseVisualStyleBackColor = true;
			this->sortir->Click += gcnew System::EventHandler(this, &IniciarSessio::sortir_Click);
			// 
			// IniciarSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->textBenvinguda);
			this->Controls->Add(this->ButtonIniciarSessio);
			this->Controls->Add(this->registrar);
			this->Controls->Add(this->sortir);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"IniciarSessio";
			this->Text = L"IniciarSessio";
			this->Load += gcnew System::EventHandler(this, &IniciarSessio::IniciarSessio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ButtonIniciarSessio_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void registrar_Click(System::Object^ sender, System::EventArgs^ e) {
	//StudyHub::CrearEstudiant^ registraEstudiant = gcnew StudyHub::CrearEstudiant();
}
private: System::Void sortir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void IniciarSessio_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
