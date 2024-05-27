#pragma once


namespace StudyHub {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CrearValoracioUI
	/// </summary>
	public ref class CrearValoracioUI : public System::Windows::Forms::Form
	{
	private:
		int _valoracio = 5;
		String^ _estudiant = "";
		String^ _grup = "";
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	public:
		Image^ ResizeImage(Image^ imgToResize, int width, int height) {
			Bitmap^ b = gcnew Bitmap(width, height);
			Graphics^ g = Graphics::FromImage(b);
			g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
			g->DrawImage(imgToResize, 0, 0, width, height);
			delete g;
			return (Image^)b;
		}
		CrearValoracioUI(void)
		{
			InitializeComponent();
			Load_inicial();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		CrearValoracioUI(int Valoracio, String^ Estudiant, String^ Grup)
		{
			_valoracio = Valoracio;
			_estudiant = Estudiant;
			_grup = Grup;
			InitializeComponent();
			Load_inicial();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CrearValoracioUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Usuari;
	private: System::Windows::Forms::RichTextBox^ CaixaComentari;
	protected:

	private: System::Windows::Forms::Label^ Comentari;
	private: System::Windows::Forms::Label^ NomUsuari;
	private: System::Windows::Forms::FlowLayoutPanel^ ValoracioLayout;
	private: System::Windows::Forms::Button^ ButtonEnviar;
	private: System::Windows::Forms::Label^ nomGrup;
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::Windows::Forms::FlowLayoutPanel^ LayoutEstrellas;






	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->CaixaComentari = (gcnew System::Windows::Forms::RichTextBox());
			this->Comentari = (gcnew System::Windows::Forms::Label());
			this->NomUsuari = (gcnew System::Windows::Forms::Label());
			this->ValoracioLayout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->ButtonEnviar = (gcnew System::Windows::Forms::Button());
			this->nomGrup = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->LayoutEstrellas = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CaixaComentari
			// 
			this->CaixaComentari->Location = System::Drawing::Point(16, 56);
			this->CaixaComentari->MaxLength = 250;
			this->CaixaComentari->Name = L"CaixaComentari";
			this->CaixaComentari->Size = System::Drawing::Size(382, 103);
			this->CaixaComentari->TabIndex = 1;
			this->CaixaComentari->Text = L"";
			// 
			// Comentari
			// 
			this->Comentari->AutoSize = true;
			this->Comentari->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Comentari->Location = System::Drawing::Point(13, 13);
			this->Comentari->Name = L"Comentari";
			this->Comentari->Size = System::Drawing::Size(40, 13);
			this->Comentari->TabIndex = 10;
			this->Comentari->Text = L"Usuari:";
			// 
			// NomUsuari
			// 
			this->NomUsuari->AutoSize = true;
			this->NomUsuari->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->NomUsuari->Location = System::Drawing::Point(52, 13);
			this->NomUsuari->Name = L"NomUsuari";
			this->NomUsuari->Size = System::Drawing::Size(11, 13);
			this->NomUsuari->TabIndex = 3;
			this->NomUsuari->Text = L"\'\'";
			// 
			// ValoracioLayout
			// 
			this->ValoracioLayout->AutoSize = true;
			this->ValoracioLayout->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ValoracioLayout->Location = System::Drawing::Point(16, 165);
			this->ValoracioLayout->Name = L"ValoracioLayout";
			this->ValoracioLayout->Size = System::Drawing::Size(0, 0);
			this->ValoracioLayout->TabIndex = 4;
			// 
			// ButtonEnviar
			// 
			this->ButtonEnviar->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->ButtonEnviar->Location = System::Drawing::Point(290, 168);
			this->ButtonEnviar->Name = L"ButtonEnviar";
			this->ButtonEnviar->Size = System::Drawing::Size(108, 28);
			this->ButtonEnviar->TabIndex = 5;
			this->ButtonEnviar->Text = L"Enviar";
			this->ButtonEnviar->UseVisualStyleBackColor = true;
			this->ButtonEnviar->Click += gcnew System::EventHandler(this, &CrearValoracioUI::ButtonEnviar_Click);
			// 
			// nomGrup
			// 
			this->nomGrup->AutoSize = true;
			this->nomGrup->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nomGrup->Location = System::Drawing::Point(302, 13);
			this->nomGrup->Name = L"nomGrup";
			this->nomGrup->Size = System::Drawing::Size(11, 13);
			this->nomGrup->TabIndex = 7;
			this->nomGrup->Text = L"\'\'";
			// 
			// buttonClose
			// 
			this->buttonClose->AutoSize = true;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->buttonClose->Location = System::Drawing::Point(406, 0);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(23, 18);
			this->buttonClose->TabIndex = 8;
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &CrearValoracioUI::buttonClose_Click);
			// 
			// LayoutEstrellas
			// 
			this->LayoutEstrellas->Location = System::Drawing::Point(102, 12);
			this->LayoutEstrellas->Name = L"LayoutEstrellas";
			this->LayoutEstrellas->Size = System::Drawing::Size(140, 30);
			this->LayoutEstrellas->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(13, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Comentari:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(270, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Grup:";
			// 
			// CrearValoracioUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(429, 205);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LayoutEstrellas);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->nomGrup);
			this->Controls->Add(this->ButtonEnviar);
			this->Controls->Add(this->ValoracioLayout);
			this->Controls->Add(this->NomUsuari);
			this->Controls->Add(this->Comentari);
			this->Controls->Add(this->CaixaComentari);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(261, 13);
			this->Name = L"CrearValoracioUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CrearValoracioUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonEnviar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Load_inicial();
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
