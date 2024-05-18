#pragma once
#include "Sistema.h"
#include "TxCercarGrups.h"
#include "StarRatingView.h"

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CercaGrup
	/// </summary>
	public ref class CercaGrup : public System::Windows::Forms::Form
	{
	public:
		CercaGrup(void)
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
		~CercaGrup()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ tornar;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tornar = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();

			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 21, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(87, 37);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(402, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Gestionar Grups";
			// 
			// tornar
			// 
			this->tornar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tornar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tornar->ForeColor = System::Drawing::Color::DarkCyan;
			this->tornar->Location = System::Drawing::Point(510, 284);
			this->tornar->Margin = System::Windows::Forms::Padding(2);
			this->tornar->Name = L"tornar";
			this->tornar->Size = System::Drawing::Size(70, 36);
			this->tornar->TabIndex = 5;
			this->tornar->Text = L"Tornar";
			this->tornar->UseVisualStyleBackColor = true;
			this->tornar->Click += gcnew System::EventHandler(this, &CercaGrup::tornar_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Location = System::Drawing::Point(24, 88);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(407, 201);
			this->panel1->TabIndex = 0;
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			//this->tableLayoutPanel1->TabIndex = 0;
			

			// 
			// CercaGrup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(591, 331);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tornar);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CercaGrup";
			this->Text = L"CercaGrup";
			this->Load += gcnew System::EventHandler(this, &CercaGrup::CercaGrup_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tornar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void CercaGrup_Load(System::Object^ sender, System::EventArgs^ e) {
		TxCercarGrups^ tx = gcnew TxCercarGrups();
		tx->executar();
		List<Grup>^ grups = tx->obteResultat();
		this->tableLayoutPanel1->RowCount = grups->Count;
		for (int i = 0; i < grups->Count; i++)
		{
			System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label();
			label->Text = grups[i]._grup->obteNom();
			this->tableLayoutPanel1->Controls->Add(label, 0, i);

			System::Windows::Forms::Label^ label1 = gcnew System::Windows::Forms::Label();
			label1->Text = grups[i]._grup->obteTematica();
			this->tableLayoutPanel1->Controls->Add(label1, 1, i);

			System::Windows::Forms::Label^ label2 = gcnew System::Windows::Forms::Label();
			label2->Text = grups[i]._nombreParticipants.ToString();
			this->tableLayoutPanel1->Controls->Add(label2, 2, i);

			System::Windows::Forms::FlowLayoutPanel^ panelEstrellas = gcnew System::Windows::Forms::FlowLayoutPanel();
			StarRatingView^ starRatingControl = gcnew StarRatingView(grups[i]._valMitja);
			panelEstrellas->Controls->Add(starRatingControl);
			panelEstrellas->Size = System::Drawing::Size(197, 20);
			panelEstrellas->AutoSize = true;
			this->tableLayoutPanel1->Controls->Add(panelEstrellas, 3, i);
		}
	}
	};
}
