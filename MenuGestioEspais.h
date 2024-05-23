#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGestioEspais
	/// </summary>
	public ref class MenuGestioEspais : public System::Windows::Forms::Form
	{
	public:
		MenuGestioEspais(void)
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
		~MenuGestioEspais()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ botoncrear;
	private: System::Windows::Forms::Button^ botoneditar;



	private: System::Windows::Forms::Button^ botoneliminar;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;

	private: String^ espai = "";
	private: String^ adreca= "";
	private: String^ capacitat = "";

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botoncrear = (gcnew System::Windows::Forms::Button());
			this->botoneditar = (gcnew System::Windows::Forms::Button());
			this->botoneliminar = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(238, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(424, 64);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gestionar Espais";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// botoncrear
			// 
			this->botoncrear->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->botoncrear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->botoncrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botoncrear->ForeColor = System::Drawing::Color::DarkCyan;
			this->botoncrear->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->botoncrear->Location = System::Drawing::Point(61, 144);
			this->botoncrear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botoncrear->Name = L"botoncrear";
			this->botoncrear->Size = System::Drawing::Size(175, 60);
			this->botoncrear->TabIndex = 7;
			this->botoncrear->Text = L"Crear Espai";
			this->botoncrear->UseVisualStyleBackColor = true;
			this->botoncrear->Click += gcnew System::EventHandler(this, &MenuGestioEspais::botoncrear_Click);
			// 
			// botoneditar
			// 
			this->botoneditar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->botoneditar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->botoneditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botoneditar->ForeColor = System::Drawing::Color::DarkCyan;
			this->botoneditar->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->botoneditar->Location = System::Drawing::Point(61, 254);
			this->botoneditar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botoneditar->Name = L"botoneditar";
			this->botoneditar->Size = System::Drawing::Size(175, 60);
			this->botoneditar->TabIndex = 8;
			this->botoneditar->Text = L"Editar Espai";
			this->botoneditar->UseVisualStyleBackColor = true;
			this->botoneditar->Click += gcnew System::EventHandler(this, &MenuGestioEspais::botoneditar_Click);
			// 
			// botoneliminar
			// 
			this->botoneliminar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->botoneliminar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->botoneliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botoneliminar->ForeColor = System::Drawing::Color::DarkCyan;
			this->botoneliminar->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->botoneliminar->Location = System::Drawing::Point(61, 364);
			this->botoneliminar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botoneliminar->Name = L"botoneliminar";
			this->botoneliminar->Size = System::Drawing::Size(175, 60);
			this->botoneliminar->TabIndex = 10;
			this->botoneliminar->Text = L"Eliminar Espai";
			this->botoneliminar->UseVisualStyleBackColor = true;
			this->botoneliminar->Click += gcnew System::EventHandler(this, &MenuGestioEspais::botoneliminar_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(294, 114);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 51)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(576, 329);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(4, 1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(568, 51);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Els meus espais";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuGestioEspais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(910, 512);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->botoneliminar);
			this->Controls->Add(this->botoneditar);
			this->Controls->Add(this->botoncrear);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MenuGestioEspais";
			this->Text = L"MenuGestioEspais";
			this->Load += gcnew System::EventHandler(this, &MenuGestioEspais::MenuGestioEspais_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botoncrear_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void botonconsultar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void botoneditar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void botoneliminar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MenuGestioEspais_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void labelenfila_Click(Object^ sender, EventArgs^ e);
	private: System::Void fila_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void selecciona(TableLayoutPanel^ table);
};
}
