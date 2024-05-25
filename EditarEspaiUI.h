#pragma once
#include "MenuPrincipal.h"
#include "MenuGestioEspais.h"
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
	String^ _espai = "";
	String^ _adreca = "";
	private: System::Windows::Forms::Label^ label1;
	public:
		String^ _capacitat = "";
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

	private: System::Windows::Forms::Label^ capacitat;

	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Button^ cancel;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;




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
			this->capacitat = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// editEspai
			// 
			this->editEspai->AutoSize = true;
			this->editEspai->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->editEspai->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->editEspai->Location = System::Drawing::Point(208, 40);
			this->editEspai->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->editEspai->Name = L"editEspai";
			this->editEspai->Size = System::Drawing::Size(203, 42);
			this->editEspai->TabIndex = 2;
			this->editEspai->Text = L"Editar Espai";
			// 
			// adreca
			// 
			this->adreca->AutoSize = true;
			this->adreca->BackColor = System::Drawing::Color::Transparent;
			this->adreca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->adreca->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->adreca->Location = System::Drawing::Point(122, 131);
			this->adreca->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->adreca->Name = L"adreca";
			this->adreca->Size = System::Drawing::Size(67, 22);
			this->adreca->TabIndex = 3;
			this->adreca->Text = L"Adreça";
			// 
			// capacitat
			// 
			this->capacitat->AutoSize = true;
			this->capacitat->BackColor = System::Drawing::Color::Transparent;
			this->capacitat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->capacitat->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->capacitat->Location = System::Drawing::Point(105, 177);
			this->capacitat->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->capacitat->Name = L"capacitat";
			this->capacitat->Size = System::Drawing::Size(86, 22);
			this->capacitat->TabIndex = 5;
			this->capacitat->Text = L"Capacitat";
			// 
			// edit
			// 
			this->edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::Color::DarkCyan;
			this->edit->Location = System::Drawing::Point(389, 258);
			this->edit->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(108, 35);
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
			this->cancel->Location = System::Drawing::Point(109, 258);
			this->cancel->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(108, 35);
			this->cancel->TabIndex = 9;
			this->cancel->Text = L"Tornar";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &EditarEspaiUI::cancel_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(265, 177);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(43, 20);
			this->numericUpDown1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(261, 131);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 22);
			this->label1->TabIndex = 12;
			this->label1->Text = L"label1";
			// 
			// EditarEspaiUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->capacitat);
			this->Controls->Add(this->adreca);
			this->Controls->Add(this->editEspai);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"EditarEspaiUI";
			this->Text = L"EditarEspaiUI";
			this->Load += gcnew System::EventHandler(this, &EditarEspaiUI::EditarEspaiUI_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e);	
	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void EditarEspaiUI_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = _adreca;

	}
};
}
