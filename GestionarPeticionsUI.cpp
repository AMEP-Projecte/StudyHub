#include "pch.h"
#include "GestionarPeticionsUI.h"
#include "Sistema.h"
#include "TxObtenirPeticionsPendents.h"
#include "TxGestionarPeticionsGrup.h"
#include "MenuPrincipal.h"

using namespace StudyHub;

System::Void GestionarPeticionsUI::actualitzarTaula() {
	seleccionat = 0;
	Sistema^ sist = Sistema::getInstance();
	String^ nomCreador = sist->obteUsername();
	TxObtenirPeticionsPendents^ txPetPendents = gcnew TxObtenirPeticionsPendents(nomCreador);
	txPetPendents->executar();
	DataTable^ data = txPetPendents->obteResultat();
	//MessageBox::Show(data->Rows->Count.ToString());

	this->tableLayoutPanel1->Controls->Clear();
	this->tableLayoutPanel1->RowCount = data->Rows->Count + 1;

	System::Windows::Forms::TableLayoutPanel^ panell = gcnew System::Windows::Forms::TableLayoutPanel();
	panell->ColumnCount = 2;
	panell->RowCount = 1;
	panell->AutoSize = true;
	panell->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
	panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		50)));
	panell->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		50)));
	panell->Dock = System::Windows::Forms::DockStyle::Top;
	panell->ForeColor = System::Drawing::Color::White;
	panell->Padding = System::Windows::Forms::Padding(3);

	System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label();
	label->Text = "Estudiant";
	label->Anchor = System::Windows::Forms::AnchorStyles::None;
	label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	label->Font = gcnew System::Drawing::Font("Arial Black", 12, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
	label->AutoSize = true;
	panell->Controls->Add(label, 0, 0);

	System::Windows::Forms::Label^ label1 = gcnew System::Windows::Forms::Label();
	label1->Text = "Grup";
	label1->Anchor = System::Windows::Forms::AnchorStyles::None;
	label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
	label1->Font = gcnew System::Drawing::Font("Arial Black", 12, System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline);
	label1->AutoSize = true;
	panell->Controls->Add(label1, 1, 0);

	this->tableLayoutPanel1->Controls->Add(panell, 0, 0);

	for (int i = 0; i < data->Rows->Count; i++)
	{
		System::Windows::Forms::TableLayoutPanel^ panel = gcnew System::Windows::Forms::TableLayoutPanel();
		panel->ColumnCount = 2;
		panel->RowCount = 1;
		panel->AutoSize = true;
		panel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		panel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
			50)));
		panel->Dock = System::Windows::Forms::DockStyle::Top;
		panel->Tag = i+"";
		panel->ForeColor = System::Drawing::Color::White;

		System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label();
		label->Text = data->Rows[i]->ItemArray[0]->ToString();
		label->Anchor = System::Windows::Forms::AnchorStyles::None;
		label->Click += gcnew System::EventHandler(this, &GestionarPeticionsUI::On_Click);
		label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		label->Font = gcnew System::Drawing::Font("Arial", 8, System::Drawing::FontStyle::Bold);
		label->AutoSize = true;
		label->Tag = i+"";
		panel->Controls->Add(label, 0, 0);


		System::Windows::Forms::Label^ label1 = gcnew System::Windows::Forms::Label();
		label1->Text = data->Rows[i]->ItemArray[1]->ToString();
		label1->Anchor = System::Windows::Forms::AnchorStyles::None;
		label1->Click += gcnew System::EventHandler(this, &GestionarPeticionsUI::On_Click);
		label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		label1->Font = gcnew System::Drawing::Font("Arial", 8, System::Drawing::FontStyle::Bold);
		label1->AutoSize = true;
		label1->Tag = i+"";
		panel->Controls->Add(label1, 1, 0);

		panel->Click += gcnew System::EventHandler(this, &GestionarPeticionsUI::On_Click);

		this->tableLayoutPanel1->Controls->Add(panel, 0, i + 1);
	}
}

System::Void GestionarPeticionsUI::On_Click(System::Object^ sender, System::EventArgs^ e) {
	TableLayoutPanel^ panel = dynamic_cast<TableLayoutPanel^>(tableLayoutPanel1->Controls[seleccionat]);
	panel->BackColor = System::Drawing::SystemColors::ActiveCaption;

	TableLayoutPanel^ clickedPanel = dynamic_cast<TableLayoutPanel^>(sender);
	Label^ clickedLabel = dynamic_cast<Label^>(sender);
	String^ labelInfo;
	if (clickedPanel) {
		labelInfo = dynamic_cast<String^>(clickedPanel->Tag);
	}
	else if (clickedLabel) {
		labelInfo = dynamic_cast<String^>(clickedLabel->Tag);
	}
	seleccionat = (Convert::ToInt32(labelInfo)) + 1;

	panel = dynamic_cast<TableLayoutPanel^>(tableLayoutPanel1->Controls[seleccionat]);
	panel->BackColor = System::Drawing::Color::Black;
}

System::Void GestionarPeticionsUI::GestionarPeticionsUI_Load(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuEstudiant->Visible = true;

	actualitzarTaula();
}

System::Void GestionarPeticionsUI::buttonAcceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (seleccionat != 0) {
		try {
			TableLayoutPanel^ panel = dynamic_cast<TableLayoutPanel^>(tableLayoutPanel1->Controls[seleccionat]);
			Label^ est = dynamic_cast<Label^>(panel->Controls[0]);
			Label^ grup = dynamic_cast<Label^>(panel->Controls[1]);
			TxGestionarPeticionsGrup txGestioPeticions(est->Text, grup->Text, true);
			txGestioPeticions.executar();
			String^ missatge = "Has acceptat la sol·licitud d'acc\u00e9s de l'estudiant\n" + est->Text + " al grup " + grup->Text + ".";
			MessageBox::Show(missatge);
			actualitzarTaula();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
	else {
		MessageBox::Show("Per acceptar una petici\u00F3 d'acc\u00e9s, n'has de seleccionar una.");
	}
}

System::Void GestionarPeticionsUI::buttonRebutjar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (seleccionat != 0) {
		try {
			TableLayoutPanel^ panel = dynamic_cast<TableLayoutPanel^>(tableLayoutPanel1->Controls[seleccionat]);
			Label^ est = dynamic_cast<Label^>(panel->Controls[0]);
			Label^ grup = dynamic_cast<Label^>(panel->Controls[1]);
			TxGestionarPeticionsGrup txGestioPeticions(est->Text, grup->Text, false);
			txGestioPeticions.executar();
			String^ missatge = "Has rebutjat la sol·licitud d'acc\u00e9s de l'estudiant\n" + est->Text + " al grup " + grup->Text + ".";
			MessageBox::Show(missatge);
			actualitzarTaula();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
	else {
		MessageBox::Show("Per rebutjar una petici\u00F3 d'acc\u00e9s, n'has de seleccionar una.");
	}
}

System::Void GestionarPeticionsUI::buttonTornar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}