#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGestioProveidor
	/// </summary>
	public ref class MenuGestioProveidor : public System::Windows::Forms::Form
	{
	public:
		MenuGestioProveidor(void)
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
		~MenuGestioProveidor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ editar;
	private: System::Windows::Forms::Button^ consultar;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->editar = (gcnew System::Windows::Forms::Button());
			this->consultar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(143, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(527, 46);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Gestionar Perfil de Proveïdor";
			// 
			// editar
			// 
			this->editar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editar->ForeColor = System::Drawing::Color::DarkCyan;
			this->editar->Location = System::Drawing::Point(432, 208);
			this->editar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(239, 53);
			this->editar->TabIndex = 5;
			this->editar->Text = L"Editar Perfil";
			this->editar->UseVisualStyleBackColor = true;
			this->editar->Click += gcnew System::EventHandler(this, &MenuGestioProveidor::editar_Click);
			// 
			// consultar
			// 
			this->consultar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->consultar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->consultar->ForeColor = System::Drawing::Color::DarkCyan;
			this->consultar->Location = System::Drawing::Point(144, 208);
			this->consultar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->consultar->Name = L"consultar";
			this->consultar->Size = System::Drawing::Size(239, 53);
			this->consultar->TabIndex = 4;
			this->consultar->Text = L"Consultar Perfil";
			this->consultar->UseVisualStyleBackColor = true;
			this->consultar->Click += gcnew System::EventHandler(this, &MenuGestioProveidor::consultar_Click);
			// 
			// MenuGestioProveidor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->editar);
			this->Controls->Add(this->consultar);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuGestioProveidor";
			this->Text = L"MenuGestioProveidor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void consultar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void editar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
