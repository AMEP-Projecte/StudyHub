#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGestioGrups
	/// </summary>
	public ref class MenuGestioGrups : public System::Windows::Forms::Form
	{
	public:
		MenuGestioGrups(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MenuGestioGrups()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ elimina;
	private: System::Windows::Forms::Button^ edita;
	private: System::Windows::Forms::Button^ consulta;
	private: System::Windows::Forms::Button^ crea;
	private: System::Windows::Forms::Button^ buttonGestionaPeticions;
	private: System::Windows::Forms::TableLayoutPanel^ layoutPanel;
	private: System::Windows::Forms::Label^ label1;


	// LAYOUT FILA
	// private: System::Windows::Forms::TableLayoutPanel^ layoutFila;








	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->elimina = (gcnew System::Windows::Forms::Button());
			this->edita = (gcnew System::Windows::Forms::Button());
			this->consulta = (gcnew System::Windows::Forms::Button());
			this->crea = (gcnew System::Windows::Forms::Button());
			this->buttonGestionaPeticions = (gcnew System::Windows::Forms::Button());
			this->layoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->layoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(136, 34);
			this->label2->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(418, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Gestionar Grups d\'Estudi";
			// 
			// elimina
			// 
			this->elimina->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->elimina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->elimina->ForeColor = System::Drawing::Color::DarkCyan;
			this->elimina->Location = System::Drawing::Point(20, 239);
			this->elimina->Margin = System::Windows::Forms::Padding(1);
			this->elimina->Name = L"elimina";
			this->elimina->Size = System::Drawing::Size(151, 31);
			this->elimina->TabIndex = 3;
			this->elimina->Text = L"Eliminar Grup";
			this->elimina->UseVisualStyleBackColor = true;
			this->elimina->Click += gcnew System::EventHandler(this, &MenuGestioGrups::elimina_Click);
			// 
			// edita
			// 
			this->edita->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->edita->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edita->ForeColor = System::Drawing::Color::DarkCyan;
			this->edita->Location = System::Drawing::Point(20, 208);
			this->edita->Margin = System::Windows::Forms::Padding(1);
			this->edita->Name = L"edita";
			this->edita->Size = System::Drawing::Size(151, 28);
			this->edita->TabIndex = 4;
			this->edita->Text = L"Editar Grup";
			this->edita->UseVisualStyleBackColor = true;
			this->edita->Click += gcnew System::EventHandler(this, &MenuGestioGrups::edita_Click);
			// 
			// consulta
			// 
			this->consulta->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->consulta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consulta->ForeColor = System::Drawing::Color::DarkCyan;
			this->consulta->Location = System::Drawing::Point(20, 174);
			this->consulta->Margin = System::Windows::Forms::Padding(1);
			this->consulta->Name = L"consulta";
			this->consulta->Size = System::Drawing::Size(151, 31);
			this->consulta->TabIndex = 5;
			this->consulta->Text = L"Cerca Grups";
			this->consulta->UseVisualStyleBackColor = true;
			this->consulta->Click += gcnew System::EventHandler(this, &MenuGestioGrups::consulta_Click);
			// 
			// crea
			// 
			this->crea->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->crea->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->crea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crea->ForeColor = System::Drawing::Color::DarkCyan;
			this->crea->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->crea->Location = System::Drawing::Point(20, 101);
			this->crea->Margin = System::Windows::Forms::Padding(1);
			this->crea->Name = L"crea";
			this->crea->Size = System::Drawing::Size(151, 33);
			this->crea->TabIndex = 6;
			this->crea->Text = L"Crear Grup";
			this->crea->UseVisualStyleBackColor = true;
			this->crea->Click += gcnew System::EventHandler(this, &MenuGestioGrups::crea_Click);
			// 
			// buttonGestionaPeticions
			// 
			this->buttonGestionaPeticions->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonGestionaPeticions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonGestionaPeticions->ForeColor = System::Drawing::Color::DarkCyan;
			this->buttonGestionaPeticions->Location = System::Drawing::Point(20, 136);
			this->buttonGestionaPeticions->Margin = System::Windows::Forms::Padding(1);
			this->buttonGestionaPeticions->Name = L"buttonGestionaPeticions";
			this->buttonGestionaPeticions->Size = System::Drawing::Size(151, 35);
			this->buttonGestionaPeticions->TabIndex = 7;
			this->buttonGestionaPeticions->Text = L"Gestionar Peticions";
			this->buttonGestionaPeticions->UseVisualStyleBackColor = true;
			this->buttonGestionaPeticions->Click += gcnew System::EventHandler(this, &MenuGestioGrups::buttonGestionaPeticions_Click);
			// 
			// layoutPanel
			// 
			this->layoutPanel->AutoSize = true;
			this->layoutPanel->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->layoutPanel->ColumnCount = 1;
			this->layoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->layoutPanel->Controls->Add(this->label1, 0, 0);
			this->layoutPanel->ForeColor = System::Drawing::Color::White;
			this->layoutPanel->Location = System::Drawing::Point(191, 90);
			this->layoutPanel->Name = L"layoutPanel";
			this->layoutPanel->RowCount = 2;
			this->layoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->layoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->layoutPanel->Size = System::Drawing::Size(388, 206);
			this->layoutPanel->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 1);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Els meus grups";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuGestioGrups
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(591, 331);
			this->Controls->Add(this->layoutPanel);
			this->Controls->Add(this->buttonGestionaPeticions);
			this->Controls->Add(this->crea);
			this->Controls->Add(this->consulta);
			this->Controls->Add(this->edita);
			this->Controls->Add(this->elimina);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(1);
			this->Name = L"MenuGestioGrups";
			this->Text = L"MenuGestioGrups";
			this->Load += gcnew System::EventHandler(this, &MenuGestioGrups::MenuGestioGrups_Load);
			this->layoutPanel->ResumeLayout(false);
			this->layoutPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void elimina_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void edita_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void consulta_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void crea_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void MenuGestioGrups_Load(System::Object^ sender, System::EventArgs^ e);

// private: System::Void fila_Click(System::Object^ sender, System::EventArgs^ e); // clicar fila

// private: System::Void selecciona(TableLayoutPanel^ table); // seleccionar fila

	private: System::Void labelenfila_Click(Object^ sender, EventArgs^ e) {} // clicar algun label dins de la fila
private: System::Void buttonGestionaPeticions_Click(System::Object^ sender, System::EventArgs^ e);
};


}
