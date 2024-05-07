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
	private: System::Windows::Forms::Button^ botonconsultar;


	private: System::Windows::Forms::Button^ botoneliminar;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botoncrear = (gcnew System::Windows::Forms::Button());
			this->botoneditar = (gcnew System::Windows::Forms::Button());
			this->botonconsultar = (gcnew System::Windows::Forms::Button());
			this->botoneliminar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(238, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 52);
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
			this->botoncrear->Location = System::Drawing::Point(161, 177);
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
			this->botoneditar->Location = System::Drawing::Point(458, 177);
			this->botoneditar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botoneditar->Name = L"botoneditar";
			this->botoneditar->Size = System::Drawing::Size(175, 60);
			this->botoneditar->TabIndex = 8;
			this->botoneditar->Text = L"Editar Espai";
			this->botoneditar->UseVisualStyleBackColor = true;
			this->botoneditar->Click += gcnew System::EventHandler(this, &MenuGestioEspais::botoneditar_Click);
			// 
			// botonconsultar
			// 
			this->botonconsultar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->botonconsultar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->botonconsultar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonconsultar->ForeColor = System::Drawing::Color::DarkCyan;
			this->botonconsultar->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->botonconsultar->Location = System::Drawing::Point(161, 284);
			this->botonconsultar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botonconsultar->Name = L"botonconsultar";
			this->botonconsultar->Size = System::Drawing::Size(175, 60);
			this->botonconsultar->TabIndex = 9;
			this->botonconsultar->Text = L"Consultar Espai";
			this->botonconsultar->UseVisualStyleBackColor = true;
			this->botonconsultar->Click += gcnew System::EventHandler(this, &MenuGestioEspais::botonconsultar_Click);
			// 
			// botoneliminar
			// 
			this->botoneliminar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->botoneliminar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->botoneliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botoneliminar->ForeColor = System::Drawing::Color::DarkCyan;
			this->botoneliminar->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->botoneliminar->Location = System::Drawing::Point(458, 274);
			this->botoneliminar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->botoneliminar->Name = L"botoneliminar";
			this->botoneliminar->Size = System::Drawing::Size(175, 60);
			this->botoneliminar->TabIndex = 10;
			this->botoneliminar->Text = L"Eliminar Espai";
			this->botoneliminar->UseVisualStyleBackColor = true;
			this->botoneliminar->Click += gcnew System::EventHandler(this, &MenuGestioEspais::botoneliminar_Click);
			// 
			// MenuGestioEspais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(809, 455);
			this->Controls->Add(this->botoneliminar);
			this->Controls->Add(this->botonconsultar);
			this->Controls->Add(this->botoneditar);
			this->Controls->Add(this->botoncrear);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuGestioEspais";
			this->Text = L"MenuGestioEspais";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botoncrear_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void botonconsultar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void botoneditar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void botoneliminar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
