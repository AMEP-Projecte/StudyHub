#include "pch.h"
#include "UnirseGrupUI.h"
#include "TxEnviarPeticioGrup.h"
#include "MenuPrincipal.h"

using namespace StudyHub;
using namespace System::Windows::Forms;

System::Void UnirseGrupUI::ButtonUnirse_Click(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sist = Sistema::getInstance();
	TxEnviarPeticioGrup^ txPeticio = gcnew TxEnviarPeticioGrup(sist->obteEstudiant()->obteNomUsuari(), grup);
	try {
		txPeticio->executar();
		MessageBox::Show(L"Petici\u00F3 d'uni\u00F3 enviada correctament.\nFormar\u00E0s part del grup quan el seu creador accepti\nla teva petici\u00F3.");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	// MenuPrincipal^ menu = MenuPrincipal::getInstance();
	// menu->ButtonMenuGrups->Visible = false;
	this->Close();
}