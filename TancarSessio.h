#pragma once
#include "Sistema.h"
#include "TxTancarSessio.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de TancarSessio
	/// </summary>
	public ref class TancarSessio : public System::Windows::Forms::Form
	{
	public:
		TancarSessio(void)
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
		~TancarSessio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



	protected:

	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.8F));
			this->label1->Location = System::Drawing::Point(136, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vols tancar la sessió\?";
			this->label1->Click += gcnew System::EventHandler(this, &TancarSessio::label1_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(143, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Sí";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TancarSessio::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(416, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 26);
			this->button2->TabIndex = 2;
			this->button2->Text = L"No";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TancarSessio::button2_Click);
			// 
			// TancarSessio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(624, 253);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"TancarSessio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudyHub";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		TxTancarSessio tancamentSessio;
		tancamentSessio.executar();
		Sistema^ sist = Sistema::getInstance();
		if (sist->obteEstatSessio()) {
			String^ missatge = "No s'ha pogut tancar la sessió";
			MessageBox::Show(missatge);
			// Al fer Close() es tornarà al menú d'estudiant
		}
		else {
			String^ missatge = "La sessió s'ha tancat correctament." + "\n" +
				"Gràcies per fer servir StudyHub.";
			MessageBox::Show(missatge);
			// Al fer Close() s'anirà a la pantalla d'inici
		}
		Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
