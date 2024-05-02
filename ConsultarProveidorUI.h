#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultarProveidorUI
	/// </summary>
	public ref class ConsultarProveidorUI : public System::Windows::Forms::Form
	{
	public:
		ConsultarProveidorUI(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConsultarProveidorUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ titolConsultaProveidor;
	private: System::Windows::Forms::Button^ TancarButton;
	private: System::Windows::Forms::Label^ usernameLabel;

	private: System::Windows::Forms::Label^ label1;


	protected:

	protected:

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
			this->titolConsultaProveidor = (gcnew System::Windows::Forms::Label());
			this->TancarButton = (gcnew System::Windows::Forms::Button());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// titolConsultaProveidor
			// 
			this->titolConsultaProveidor->AutoSize = true;
			this->titolConsultaProveidor->BackColor = System::Drawing::Color::Transparent;
			this->titolConsultaProveidor->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titolConsultaProveidor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->titolConsultaProveidor->Location = System::Drawing::Point(91, 48);
			this->titolConsultaProveidor->Name = L"titolConsultaProveidor";
			this->titolConsultaProveidor->Size = System::Drawing::Size(605, 52);
			this->titolConsultaProveidor->TabIndex = 0;
			this->titolConsultaProveidor->Text = L"Consultar Perfil de Proveïdor";
			// 
			// TancarButton
			// 
			this->TancarButton->ForeColor = System::Drawing::Color::DarkCyan;
			this->TancarButton->Location = System::Drawing::Point(305, 345);
			this->TancarButton->Margin = System::Windows::Forms::Padding(4);
			this->TancarButton->Name = L"TancarButton";
			this->TancarButton->Size = System::Drawing::Size(200, 43);
			this->TancarButton->TabIndex = 18;
			this->TancarButton->Text = L"Tancar";
			this->TancarButton->UseVisualStyleBackColor = true;
			this->TancarButton->Click += gcnew System::EventHandler(this, &ConsultarProveidorUI::TancarButton_Click);
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->usernameLabel->Location = System::Drawing::Point(330, 120);
			this->usernameLabel->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(101, 16);
			this->usernameLabel->TabIndex = 17;
			this->usernameLabel->Text = L"usernameLabel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(166, 120);
			this->label1->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Nom d\'usuari:";
			// 
			// ConsultarProveidorUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->TancarButton);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->titolConsultaProveidor);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConsultarProveidorUI";
			this->Text = L"ConsultarProveidorUI";
			this->Load += gcnew System::EventHandler(this, &ConsultarProveidorUI::ConsultarProveidorUI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConsultarProveidorUI_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TancarButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
