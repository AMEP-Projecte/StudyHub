#include "pch.h"
#include "UnirseGrupUI.h"
// #include "TxEnviarPeticioGrup.h"

using namespace StudyHub;
using namespace System::Windows::Forms;

System::Void UnirseGrupUI::ButtonUnirse_Click(System::Object^ sender, System::EventArgs^ e) {
	// Sistema^ sist = Sistema::getInstance();
	// TxEnviarPeticioGrup^ txPeticio = gcnew TxEnviarPeticioGrup(sist->obteEstudiant()->obteNomUsuari(), "Matepros");
	// En comptes de "Matepros", s'hauria d'agafar el text que cont� el label al costat de "Grup:"
	try {
		// txPeticio->executar();
		MessageBox::Show("Petici� d'uni� enviada correctament.\nFormar�s part del grup quan el seu creador accepti\nla teva petici�.");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	this->Close();
}