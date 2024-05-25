#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGestioEstudiantsAdmin
	/// </summary>
	public ref class MenuGestioEstudiantsAdmin : public System::Windows::Forms::Form
	{
	public:
		MenuGestioEstudiantsAdmin(void)
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
		~MenuGestioEstudiantsAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ eliminaEstudiantButton;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::String^ selectedUsername; // Variable miembro para almacenar el username seleccionado


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->eliminaEstudiantButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// eliminaEstudiantButton
			// 
			this->eliminaEstudiantButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->eliminaEstudiantButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->eliminaEstudiantButton->ForeColor = System::Drawing::Color::DarkCyan;
			this->eliminaEstudiantButton->Location = System::Drawing::Point(44, 79);
			this->eliminaEstudiantButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->eliminaEstudiantButton->Name = L"eliminaEstudiantButton";
			this->eliminaEstudiantButton->Size = System::Drawing::Size(154, 47);
			this->eliminaEstudiantButton->TabIndex = 5;
			this->eliminaEstudiantButton->Text = L"Eliminar Estudiant";
			this->eliminaEstudiantButton->UseVisualStyleBackColor = true;
			this->eliminaEstudiantButton->Click += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::eliminaEstudiant_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(205, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(383, 46);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Gestionar Estudiants";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(231, 66);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(261, 293);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(4, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuGestioEstudiantsAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(791, 408);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->eliminaEstudiantButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuGestioEstudiantsAdmin";
			this->Text = L"MenuGestioEstudiantsAdmin";
			this->Load += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::MenuGestioEstudiantsAdmin_Load);
			this->Click += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::eliminaEstudiant_Click);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuGestioEstudiantsAdmin_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void eliminaEstudiant_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void OnButtonUsernameClick(System::Object^ sender, System::EventArgs^ e);

};
}
