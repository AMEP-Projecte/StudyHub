
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;



           // Agregar PictureBox


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IniciarSessio::typeid));
			this->textBenvinguda = (gcnew System::Windows::Forms::Label());
			this->ButtonIniciarSessio = (gcnew System::Windows::Forms::Button());
			this->registrar = (gcnew System::Windows::Forms::Button());
			this->sortir = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBenvinguda
			// 
			this->textBenvinguda->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBenvinguda->AutoSize = true;
			this->textBenvinguda->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->textBenvinguda->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textBenvinguda->Location = System::Drawing::Point(153, 47);
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
			this->ButtonIniciarSessio->Location = System::Drawing::Point(12, 127);
			this->ButtonIniciarSessio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ButtonIniciarSessio->Name = L"ButtonIniciarSessio";
			this->ButtonIniciarSessio->Size = System::Drawing::Size(146, 45);
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
			this->registrar->Location = System::Drawing::Point(12, 190);
			this->registrar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->registrar->Name = L"registrar";
			this->registrar->Size = System::Drawing::Size(146, 87);
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
			this->sortir->Location = System::Drawing::Point(30, 296);
			this->sortir->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->sortir->Name = L"sortir";
			this->sortir->Size = System::Drawing::Size(103, 27);
			this->sortir->TabIndex = 8;
			this->sortir->Text = L"Sortir";
			this->sortir->UseVisualStyleBackColor = true;
			this->sortir->Click += gcnew System::EventHandler(this, &IniciarSessio::sortir_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(83, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;

			// 
			// IniciarSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBenvinguda);
			this->Controls->Add(this->ButtonIniciarSessio);
			this->Controls->Add(this->registrar);
			this->Controls->Add(this->sortir);
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
    private: System::Void sortir_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void IniciarSessio_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
