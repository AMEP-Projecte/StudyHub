#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de EditarProveidorUI
	/// </summary>
	public ref class EditarProveidorUI : public System::Windows::Forms::Form
	{
	public:
		EditarProveidorUI(void)
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
		~EditarProveidorUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ editStudent;
	private: System::Windows::Forms::TextBox^ newPassword;

	private: System::Windows::Forms::TextBox^ oldPassword;

	private: System::Windows::Forms::Label^ newPasswordLabel;

	private: System::Windows::Forms::Label^ oldPasswordLabel;
	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Button^ cancel;



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
			this->editStudent = (gcnew System::Windows::Forms::Label());
			this->newPassword = (gcnew System::Windows::Forms::TextBox());
			this->oldPassword = (gcnew System::Windows::Forms::TextBox());
			this->newPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->oldPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// editStudent
			// 
			this->editStudent->AutoSize = true;
			this->editStudent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->editStudent->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->editStudent->Location = System::Drawing::Point(207, 22);
			this->editStudent->Name = L"editStudent";
			this->editStudent->Size = System::Drawing::Size(355, 52);
			this->editStudent->TabIndex = 4;
			this->editStudent->Text = L"Editar Estudiant:";
			// 
			// newPassword
			// 
			this->newPassword->Location = System::Drawing::Point(295, 139);
			this->newPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newPassword->MaxLength = 45;
			this->newPassword->Name = L"newPassword";
			this->newPassword->Size = System::Drawing::Size(363, 22);
			this->newPassword->TabIndex = 14;
			// 
			// oldPassword
			// 
			this->oldPassword->Location = System::Drawing::Point(295, 103);
			this->oldPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->oldPassword->MaxLength = 45;
			this->oldPassword->Name = L"oldPassword";
			this->oldPassword->Size = System::Drawing::Size(363, 22);
			this->oldPassword->TabIndex = 13;
			// 
			// newPasswordLabel
			// 
			this->newPasswordLabel->AutoSize = true;
			this->newPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->newPasswordLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newPasswordLabel->Location = System::Drawing::Point(76, 137);
			this->newPasswordLabel->Name = L"newPasswordLabel";
			this->newPasswordLabel->Size = System::Drawing::Size(187, 26);
			this->newPasswordLabel->TabIndex = 12;
			this->newPasswordLabel->Text = L"Nova contrasenya";
			// 
			// oldPasswordLabel
			// 
			this->oldPasswordLabel->AutoSize = true;
			this->oldPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->oldPasswordLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->oldPasswordLabel->Location = System::Drawing::Point(74, 101);
			this->oldPasswordLabel->Name = L"oldPasswordLabel";
			this->oldPasswordLabel->Size = System::Drawing::Size(199, 26);
			this->oldPasswordLabel->TabIndex = 11;
			this->oldPasswordLabel->Text = L"Contrasenya actual";
			// 
			// edit
			// 
			this->edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::Color::DarkCyan;
			this->edit->Location = System::Drawing::Point(515, 327);
			this->edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(145, 46);
			this->edit->TabIndex = 16;
			this->edit->Text = L"Editar";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &EditarProveidorUI::edit_Click);
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::DarkCyan;
			this->cancel->Location = System::Drawing::Point(96, 327);
			this->cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(145, 46);
			this->cancel->TabIndex = 15;
			this->cancel->Text = L"Cancel·lar";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &EditarProveidorUI::cancel_Click);
			// 
			// EditarProveidorUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->newPassword);
			this->Controls->Add(this->oldPassword);
			this->Controls->Add(this->newPasswordLabel);
			this->Controls->Add(this->oldPasswordLabel);
			this->Controls->Add(this->editStudent);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EditarProveidorUI";
			this->Text = L"0";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e);
};
}
