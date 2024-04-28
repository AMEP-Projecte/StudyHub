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
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(99, 39);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
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
			this->elimina->Location = System::Drawing::Point(377, 248);
			this->elimina->Margin = System::Windows::Forms::Padding(2);
			this->elimina->Name = L"elimina";
			this->elimina->Size = System::Drawing::Size(131, 49);
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
			this->edita->Location = System::Drawing::Point(377, 122);
			this->edita->Margin = System::Windows::Forms::Padding(2);
			this->edita->Name = L"edita";
			this->edita->Size = System::Drawing::Size(131, 48);
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
			this->consulta->Location = System::Drawing::Point(105, 248);
			this->consulta->Margin = System::Windows::Forms::Padding(2);
			this->consulta->Name = L"consulta";
			this->consulta->Size = System::Drawing::Size(131, 49);
			this->consulta->TabIndex = 5;
			this->consulta->Text = L"Consultar Grup";
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
			this->crea->Location = System::Drawing::Point(105, 122);
			this->crea->Margin = System::Windows::Forms::Padding(2);
			this->crea->Name = L"crea";
			this->crea->Size = System::Drawing::Size(131, 49);
			this->crea->TabIndex = 6;
			this->crea->Text = L"Crear Grup";
			this->crea->UseVisualStyleBackColor = true;
			this->crea->Click += gcnew System::EventHandler(this, &MenuGestioGrups::crea_Click);
			// 
			// MenuGestioGrups
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->Controls->Add(this->crea);
			this->Controls->Add(this->consulta);
			this->Controls->Add(this->edita);
			this->Controls->Add(this->elimina);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuGestioGrups";
			this->Text = L"MenuGestioGrups";
			this->Load += gcnew System::EventHandler(this, &MenuGestioGrups::MenuGestioGrups_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void tornar_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void elimina_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void edita_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void consulta_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void crea_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void MenuGestioGrups_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
