#pragma once
#include "TxEditarGrup.h"
#include "MenuPrincipal.h"
#include "MenuGestioGrups.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EditarGrup
	/// </summary>
	public ref class EditarGrup : public System::Windows::Forms::Form
	{
	public:
		EditarGrup(void)
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
		~EditarGrup()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ editGroup;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ theme;

	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::TextBox^ textTheme;
	private: System::Windows::Forms::Button^ cancel;

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
			this->editGroup = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->theme = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textTheme = (gcnew System::Windows::Forms::TextBox());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// editGroup
			// 
			this->editGroup->AutoSize = true;
			this->editGroup->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->editGroup->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->editGroup->Location = System::Drawing::Point(194, 42);
			this->editGroup->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->editGroup->Name = L"editGroup";
			this->editGroup->Size = System::Drawing::Size(210, 42);
			this->editGroup->TabIndex = 1;
			this->editGroup->Text = L"Editar Grup:";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->name->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->name->Location = System::Drawing::Point(137, 131);
			this->name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(47, 22);
			this->name->TabIndex = 2;
			this->name->Text = L"Nom";
			// 
			// theme
			// 
			this->theme->AutoSize = true;
			this->theme->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->theme->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->theme->Location = System::Drawing::Point(137, 182);
			this->theme->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->theme->Name = L"theme";
			this->theme->Size = System::Drawing::Size(84, 22);
			this->theme->TabIndex = 3;
			this->theme->Text = L"Tem\u00e0tica";
			// 
			// edit
			// 
			this->edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::Color::DarkCyan;
			this->edit->Location = System::Drawing::Point(368, 260);
			this->edit->Margin = System::Windows::Forms::Padding(2);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(108, 35);
			this->edit->TabIndex = 5;
			this->edit->Text = L"Editar";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &EditarGrup::edit_Click);
			// 
			// textName
			// 
			this->textName->BackColor = System::Drawing::SystemColors::Window;
			this->textName->Location = System::Drawing::Point(246, 133);
			this->textName->Margin = System::Windows::Forms::Padding(2);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(203, 20);
			this->textName->TabIndex = 6;
			this->textName->TextChanged += gcnew System::EventHandler(this, &EditarGrup::textName_TextChanged);
			// 
			// textTheme
			// 
			this->textTheme->Location = System::Drawing::Point(246, 184);
			this->textTheme->Margin = System::Windows::Forms::Padding(2);
			this->textTheme->Name = L"textTheme";
			this->textTheme->Size = System::Drawing::Size(203, 20);
			this->textTheme->TabIndex = 7;
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::DarkCyan;
			this->cancel->Location = System::Drawing::Point(125, 260);
			this->cancel->Margin = System::Windows::Forms::Padding(2);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(108, 35);
			this->cancel->TabIndex = 8;
			this->cancel->Text = L"Tornar";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &EditarGrup::cancel_Click_1);
			// 
			// EditarGrup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->textTheme);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->theme);
			this->Controls->Add(this->name);
			this->Controls->Add(this->editGroup);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EditarGrup";
			this->Text = L"EditarGrup";
			this->Load += gcnew System::EventHandler(this, &EditarGrup::EditarGrup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditarGrup_Load(System::Object^ sender, System::EventArgs^ e) {
		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		menu->ButtonMenuEstudiant->Visible = true;
		menu->ButtonMenuGrups->Visible = true;
		menu->buttonMenuSessions->Visible = true;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ n = this->textName->Text; // nom del grup
	String^ t = this->textTheme->Text; // tematica

	try {
		if (n == "" || t == "") {
			MessageBox::Show("Omple els dos camps, si us plau.");
		}
		else {
			TxEditarGrup^ tx = gcnew TxEditarGrup(n, t);
			tx->executar();
			MessageBox::Show("Grup modificat correctament.");

			MenuPrincipal^ menu = MenuPrincipal::getInstance();
			MenuGestioGrups^ gestioGrups = gcnew MenuGestioGrups();
			menu->AbrirFormularioEnPanel(gestioGrups);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void cancel_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuGrups->Visible = false;
	this->Close();
}
};
}
