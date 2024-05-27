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

	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ buttonValoracions;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ labelvaloracions;
	private: System::Windows::Forms::Label^ labelusername;

		   System::String^ selectedUsername = ""; // Variable miembro para almacenar el username seleccionado
		   System::String^ userValoracions = "";

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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelvaloracions = (gcnew System::Windows::Forms::Label());
			this->labelusername = (gcnew System::Windows::Forms::Label());
			this->buttonValoracions = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// eliminaEstudiantButton
			// 
			this->eliminaEstudiantButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->eliminaEstudiantButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->eliminaEstudiantButton->ForeColor = System::Drawing::Color::DarkCyan;
			this->eliminaEstudiantButton->Location = System::Drawing::Point(33, 108);
			this->eliminaEstudiantButton->Margin = System::Windows::Forms::Padding(2);
			this->eliminaEstudiantButton->Name = L"eliminaEstudiantButton";
			this->eliminaEstudiantButton->Size = System::Drawing::Size(116, 54);
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
			this->label2->Location = System::Drawing::Point(154, 22);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(307, 37);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Gestionar Estudiants";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(173, 83);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(338, 178);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				71.21212F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.78788F)));
			this->tableLayoutPanel2->Controls->Add(this->labelvaloracions, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelusername, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(330, 31);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// labelvaloracions
			// 
			this->labelvaloracions->AutoSize = true;
			this->labelvaloracions->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelvaloracions->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelvaloracions->Location = System::Drawing::Point(238, 0);
			this->labelvaloracions->Name = L"labelvaloracions";
			this->labelvaloracions->Size = System::Drawing::Size(89, 31);
			this->labelvaloracions->TabIndex = 1;
			this->labelvaloracions->Text = L"Nº Valoracions";
			this->labelvaloracions->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelusername
			// 
			this->labelusername->AutoSize = true;
			this->labelusername->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelusername->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelusername->Location = System::Drawing::Point(3, 0);
			this->labelusername->Name = L"labelusername";
			this->labelusername->Size = System::Drawing::Size(229, 31);
			this->labelusername->TabIndex = 0;
			this->labelusername->Text = L"Nom d\'usuari";
			this->labelusername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonValoracions
			// 
			this->buttonValoracions->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonValoracions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonValoracions->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonValoracions->Location = System::Drawing::Point(33, 184);
			this->buttonValoracions->Margin = System::Windows::Forms::Padding(2);
			this->buttonValoracions->Name = L"buttonValoracions";
			this->buttonValoracions->Size = System::Drawing::Size(116, 53);
			this->buttonValoracions->TabIndex = 11;
			this->buttonValoracions->Text = L"Veure Valoracions";
			this->buttonValoracions->UseVisualStyleBackColor = true;
			this->buttonValoracions->Click += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::buttonValoracions_Click);
			// 
			// MenuGestioEstudiantsAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(593, 332);
			this->Controls->Add(this->buttonValoracions);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->eliminaEstudiantButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuGestioEstudiantsAdmin";
			this->Text = L"MenuGestioEstudiantsAdmin";
			this->Load += gcnew System::EventHandler(this, &MenuGestioEstudiantsAdmin::MenuGestioEstudiantsAdmin_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuGestioEstudiantsAdmin_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void eliminaEstudiant_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void labelenfila_Click(Object^ sender, EventArgs^ e);
	private: System::Void fila_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void selecciona(TableLayoutPanel^ table);

	private: Control^ GetControlFromTable(TableLayoutPanel^ table, int column, int row);
	private: System::Void omplir();

	private: System::Void buttonValoracions_Click(System::Object^ sender, System::EventArgs^ e);
};
}
