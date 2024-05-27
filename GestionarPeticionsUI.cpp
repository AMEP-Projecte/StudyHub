#include "pch.h"
#include "GestionarPeticionsUI.h"
#include "Sistema.h"
#include "TxObtenirPeticionsPendents.h"
#include "TxGestionarPeticionsGrup.h"

using namespace StudyHub;

System::Void GestionarPeticionsUI::actualitzarTaula() {
	Sistema^ sist = Sistema::getInstance();
	String^ nomCreador = sist->obteUsername();
	TxObtenirPeticionsPendents^ txPetPendents = gcnew TxObtenirPeticionsPendents(nomCreador);
	txPetPendents->executar();
	DataTable^ data = txPetPendents->obteResultat();
	this->dataGridViewPeticions->DataSource = data;
}


System::Void GestionarPeticionsUI::GestionarPeticionsUI_Load(System::Object^ sender, System::EventArgs^ e) {
	actualitzarTaula();
}

System::Void GestionarPeticionsUI::dataGridViewPeticions_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridViewPeticions->SelectedRows->Count > 0) {
		this->textBoxEstudiant->Text = Convert::ToString(dataGridViewPeticions->SelectedRows[0]->Cells[0]->Value);
		this->textBoxGrup->Text = Convert::ToString(dataGridViewPeticions->SelectedRows[0]->Cells[1]->Value);
	}
}

System::Void GestionarPeticionsUI::buttonAcceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((this->textBoxEstudiant->Text != "") && (this->textBoxGrup->Text != "")) {
		try {
			String^ username = this->textBoxEstudiant->Text;
			String^ grup = this->textBoxGrup->Text;
			TxGestionarPeticionsGrup txGestioPeticions(username, grup, true);
			txGestioPeticions.executar();
			String^ missatge = "Has acceptat la sol·licitud d'accés de l'estudiant\n" + username + " al grup " + grup + ".";
			MessageBox::Show(missatge);
			actualitzarTaula();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else {
		MessageBox::Show("Per acceptar una petició d'accés, has d'omplir els dos camps.");
	}
}

System::Void GestionarPeticionsUI::buttonRebutjar_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((this->textBoxEstudiant->Text != "") && (this->textBoxGrup->Text != "")) {
		try {
			String^ username = this->textBoxEstudiant->Text;
			String^ grup = this->textBoxGrup->Text;
			TxGestionarPeticionsGrup txGestioPeticions(username, grup, false);
			txGestioPeticions.executar();
			String^ missatge = "Has rebutjat la sol·licitud d'accés de l'estudiant\n" + username + " al grup " + grup + ".";
			MessageBox::Show(missatge);
			actualitzarTaula();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else {
		MessageBox::Show("Per rebutjar una petició d'accés, has d'omplir els dos camps.");
	}
}

System::Void GestionarPeticionsUI::buttonTornar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}