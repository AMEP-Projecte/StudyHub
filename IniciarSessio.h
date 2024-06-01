#pragma once



namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IniciarSessio::typeid));
			this->textBenvinguda = (gcnew System::Windows::Forms::Label());
			this->ButtonIniciarSessio = (gcnew System::Windows::Forms::Button());
			this->registrar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBenvinguda
			// 
			this->textBenvinguda->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBenvinguda->AutoSize = true;
			this->textBenvinguda->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->textBenvinguda->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textBenvinguda->Location = System::Drawing::Point(143, 29);
			this->textBenvinguda->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textBenvinguda->Name = L"textBenvinguda";
			this->textBenvinguda->Size = System::Drawing::Size(493, 52);
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
			this->ButtonIniciarSessio->Location = System::Drawing::Point(617, 136);
			this->ButtonIniciarSessio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ButtonIniciarSessio->Name = L"ButtonIniciarSessio";
			this->ButtonIniciarSessio->Size = System::Drawing::Size(136, 49);
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
			this->registrar->Location = System::Drawing::Point(617, 189);
			this->registrar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->registrar->Name = L"registrar";
			this->registrar->Size = System::Drawing::Size(136, 50);
			this->registrar->TabIndex = 7;
			this->registrar->Text = L"Registrar-se";
			this->registrar->UseVisualStyleBackColor = true;
			this->registrar->Click += gcnew System::EventHandler(this, &IniciarSessio::registrar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-9, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(566, 442);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(201, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"La unió fa la força.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(563, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(220, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Uneix-te a la comunitat gratuïtament!";
			this->label2->Click += gcnew System::EventHandler(this, &IniciarSessio::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(600, 327);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Atenció al usuari:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(600, 359);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Studyhub@studyhub.com";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(600, 343);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"+34 632758914";
			// 
			// IniciarSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBenvinguda);
			this->Controls->Add(this->ButtonIniciarSessio);
			this->Controls->Add(this->registrar);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"IniciarSessio";
			this->Text = L"IniciarSessio";
			this->Load += gcnew System::EventHandler(this, &IniciarSessio::IniciarSessio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ButtonIniciarSessio_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void registrar_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void IniciarSessio_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
