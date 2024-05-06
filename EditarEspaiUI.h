#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EditarEspaiUI
	/// </summary>
	public ref class EditarEspaiUI : public System::Windows::Forms::Form
	{
	public:
		EditarEspaiUI(void)
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
		~EditarEspaiUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ editEspai;
	private: System::Windows::Forms::Label^ adreca;
	private: System::Windows::Forms::Label^ nom;
	private: System::Windows::Forms::Label^ capacitat;
	private: System::Windows::Forms::Label^ proveidor;
	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::TextBox^ textAdreca;
	private: System::Windows::Forms::TextBox^ textNom;
	private: System::Windows::Forms::TextBox^ textCapacitat;
	private: System::Windows::Forms::TextBox^ textProveidor;

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
			this->editEspai = (gcnew System::Windows::Forms::Label());
			this->adreca = (gcnew System::Windows::Forms::Label());
			this->nom = (gcnew System::Windows::Forms::Label());
			this->capacitat = (gcnew System::Windows::Forms::Label());
			this->proveidor = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->textAdreca = (gcnew System::Windows::Forms::TextBox());
			this->textNom = (gcnew System::Windows::Forms::TextBox());
			this->textCapacitat = (gcnew System::Windows::Forms::TextBox());
			this->textProveidor = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// editEspai
			// 
			this->editEspai->AutoSize = true;
			this->editEspai->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->editEspai->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->editEspai->Location = System::Drawing::Point(277, 50);
			this->editEspai->Name = L"editEspai";
			this->editEspai->Size = System::Drawing::Size(258, 52);
			this->editEspai->TabIndex = 2;
			this->editEspai->Text = L"Editar Espai";
			// 
			// adreca
			// 
			this->adreca->AutoSize = true;
			this->adreca->BackColor = System::Drawing::Color::Transparent;
			this->adreca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->adreca->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->adreca->Location = System::Drawing::Point(140, 157);
			this->adreca->Name = L"adreca";
			this->adreca->Size = System::Drawing::Size(81, 26);
			this->adreca->TabIndex = 3;
			this->adreca->Text = L"Adreça";
			// 
			// nom
			// 
			this->nom->AutoSize = true;
			this->nom->BackColor = System::Drawing::Color::Transparent;
			this->nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nom->Location = System::Drawing::Point(149, 208);
			this->nom->Name = L"nom";
			this->nom->Size = System::Drawing::Size(59, 26);
			this->nom->TabIndex = 4;
			this->nom->Text = L"Nom";
			// 
			// capacitat
			// 
			this->capacitat->AutoSize = true;
			this->capacitat->BackColor = System::Drawing::Color::Transparent;
			this->capacitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->capacitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->capacitat->Location = System::Drawing::Point(117, 254);
			this->capacitat->Name = L"capacitat";
			this->capacitat->Size = System::Drawing::Size(104, 26);
			this->capacitat->TabIndex = 5;
			this->capacitat->Text = L"Capacitat";
			// 
			// proveidor
			// 
			this->proveidor->AutoSize = true;
			this->proveidor->BackColor = System::Drawing::Color::Transparent;
			this->proveidor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->proveidor->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->proveidor->Location = System::Drawing::Point(103, 308);
			this->proveidor->Name = L"proveidor";
			this->proveidor->Size = System::Drawing::Size(105, 26);
			this->proveidor->TabIndex = 6;
			this->proveidor->Text = L"Proveidor";
			// 
			// edit
			// 
			this->edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::Color::DarkCyan;
			this->edit->Location = System::Drawing::Point(569, 377);
			this->edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(144, 43);
			this->edit->TabIndex = 7;
			this->edit->Text = L"Editar";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &EditarEspaiUI::edit_Click);
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::DarkCyan;
			this->cancel->Location = System::Drawing::Point(145, 377);
			this->cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(144, 43);
			this->cancel->TabIndex = 9;
			this->cancel->Text = L"Cancel·lar";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &EditarEspaiUI::cancel_Click);
			// 
			// textAdreca
			// 
			this->textAdreca->BackColor = System::Drawing::SystemColors::Window;
			this->textAdreca->Location = System::Drawing::Point(266, 161);
			this->textAdreca->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textAdreca->Name = L"textAdreca";
			this->textAdreca->Size = System::Drawing::Size(269, 22);
			this->textAdreca->TabIndex = 10;
			// 
			// textNom
			// 
			this->textNom->BackColor = System::Drawing::SystemColors::Window;
			this->textNom->Location = System::Drawing::Point(266, 213);
			this->textNom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textNom->Name = L"textNom";
			this->textNom->Size = System::Drawing::Size(269, 22);
			this->textNom->TabIndex = 11;
			// 
			// textCapacitat
			// 
			this->textCapacitat->BackColor = System::Drawing::SystemColors::Window;
			this->textCapacitat->Location = System::Drawing::Point(266, 254);
			this->textCapacitat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textCapacitat->Name = L"textCapacitat";
			this->textCapacitat->Size = System::Drawing::Size(269, 22);
			this->textCapacitat->TabIndex = 12;
			// 
			// textProveidor
			// 
			this->textProveidor->BackColor = System::Drawing::SystemColors::Window;
			this->textProveidor->Location = System::Drawing::Point(266, 308);
			this->textProveidor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textProveidor->Name = L"textProveidor";
			this->textProveidor->Size = System::Drawing::Size(269, 22);
			this->textProveidor->TabIndex = 13;
			// 
			// EditarEspaiUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->textProveidor);
			this->Controls->Add(this->textCapacitat);
			this->Controls->Add(this->textNom);
			this->Controls->Add(this->textAdreca);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->proveidor);
			this->Controls->Add(this->capacitat);
			this->Controls->Add(this->nom);
			this->Controls->Add(this->adreca);
			this->Controls->Add(this->editEspai);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EditarEspaiUI";
			this->Text = L"EditarEspaiUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e);	
	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e);
};
}
