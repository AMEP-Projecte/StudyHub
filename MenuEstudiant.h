#pragma once
#include "TancarSessio.h"
#include "Sistema.h"
#include "MenuGestioEstudiant.h"
#include "MenuGestioGrups.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuEstudiant
	/// </summary>
	public ref class MenuEstudiant : public System::Windows::Forms::Form
	{
	public:
		MenuEstudiant(void)
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
		~MenuEstudiant()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ menuEstudiantt;
	private: System::Windows::Forms::Button^ gestionaPerfil;
	private: System::Windows::Forms::Button^ gestionaGrups;
	private: System::Windows::Forms::Button^ tancaSessio;
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
			this->menuEstudiantt = (gcnew System::Windows::Forms::Label());
			this->gestionaPerfil = (gcnew System::Windows::Forms::Button());
			this->gestionaGrups = (gcnew System::Windows::Forms::Button());
			this->tancaSessio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// menuEstudiantt
			// 
			this->menuEstudiantt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->menuEstudiantt->AutoSize = true;
			this->menuEstudiantt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->menuEstudiantt->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->menuEstudiantt->Location = System::Drawing::Point(168, 42);
			this->menuEstudiantt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->menuEstudiantt->Name = L"menuEstudiantt";
			this->menuEstudiantt->Size = System::Drawing::Size(272, 42);
			this->menuEstudiantt->TabIndex = 1;
			this->menuEstudiantt->Text = L"Men\u00fa Estudiant";
			this->menuEstudiantt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->menuEstudiantt->Click += gcnew System::EventHandler(this, &MenuEstudiant::menuEstudiantt_Click);
			// 
			// gestionaPerfil
			// 
			this->gestionaPerfil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaPerfil->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaPerfil->Location = System::Drawing::Point(108, 121);
			this->gestionaPerfil->Margin = System::Windows::Forms::Padding(2);
			this->gestionaPerfil->Name = L"gestionaPerfil";
			this->gestionaPerfil->Size = System::Drawing::Size(153, 51);
			this->gestionaPerfil->TabIndex = 2;
			this->gestionaPerfil->Text = L"Gestionar Perfil d\'Estudiant";
			this->gestionaPerfil->UseVisualStyleBackColor = true;
			this->gestionaPerfil->Click += gcnew System::EventHandler(this, &MenuEstudiant::gestionaPerfil_Click);
			// 
			// gestionaGrups
			// 
			this->gestionaGrups->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gestionaGrups->ForeColor = System::Drawing::Color::DarkCyan;
			this->gestionaGrups->Location = System::Drawing::Point(337, 121);
			this->gestionaGrups->Margin = System::Windows::Forms::Padding(2);
			this->gestionaGrups->Name = L"gestionaGrups";
			this->gestionaGrups->Size = System::Drawing::Size(153, 51);
			this->gestionaGrups->TabIndex = 3;
			this->gestionaGrups->Text = L"Gestionar Grups d\'Estudi";
			this->gestionaGrups->UseVisualStyleBackColor = true;
			this->gestionaGrups->Click += gcnew System::EventHandler(this, &MenuEstudiant::gestionaGrups_Click);
			// 
			// tancaSessio
			// 
			this->tancaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tancaSessio->ForeColor = System::Drawing::Color::DarkCyan;
			this->tancaSessio->Location = System::Drawing::Point(213, 236);
			this->tancaSessio->Margin = System::Windows::Forms::Padding(2);
			this->tancaSessio->Name = L"tancaSessio";
			this->tancaSessio->Size = System::Drawing::Size(171, 48);
			this->tancaSessio->TabIndex = 4;
			this->tancaSessio->Text = L"Tancar Sessi\u00F3";
			this->tancaSessio->UseVisualStyleBackColor = true;
			this->tancaSessio->Click += gcnew System::EventHandler(this, &MenuEstudiant::tancaSessio_Click);
			// 
			// MenuEstudiant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(607, 370);
			this->ControlBox = false;
			this->Controls->Add(this->tancaSessio);
			this->Controls->Add(this->gestionaGrups);
			this->Controls->Add(this->gestionaPerfil);
			this->Controls->Add(this->menuEstudiantt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuEstudiant";
			this->Opacity = 0;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuEstudiant";
			this->Load += gcnew System::EventHandler(this, &MenuEstudiant::MenuEstudiant_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void tancaSessio_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void gestionaGrups_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void MenuEstudiant_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void menuEstudiantt_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
