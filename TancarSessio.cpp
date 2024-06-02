#include "pch.h"
#include "TancarSessio.h"
#include "MenuPrincipal.h"
#include "IniciarSessio.h"
// #include "MenuEstudiant.h"
#include "MenuGestioEstudiant.h"
#include "MenuProvedor.h"
#include "MenuAdministrador.h"

System::Void StudyHub::TancarSessio::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	TxTancarSessio tancamentSessio;
	tancamentSessio.executar();
	Sistema^ sist = Sistema::getInstance();
	if (sist->obteEstatSessio()) {
		this->Close();
		// Al fer Close() es tornarà al menú d'estudiant
	}
	else {
		MenuPrincipal^ Menu = Menu->getInstance();
		IniciarSessio^ NewForm = gcnew IniciarSessio();
		Menu->HacerInivisible_Load();
		Menu->AbrirFormularioEnPanel(NewForm);
	}
}

System::Void StudyHub::TancarSessio::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sist = Sistema::getInstance();
	String^ tipusUsuari = sist->obteTipusUsuari();

	if (tipusUsuari == "estudiant") {
		MenuGestioEstudiant^ menuEstudiant = gcnew MenuGestioEstudiant();
		MenuPrincipal^ Menu = Menu->getInstance();
		Menu->AbrirFormularioEnPanel(menuEstudiant);
	}
	else if (tipusUsuari == "proveidor") {
		MenuProvedor^ menuProvedor = gcnew MenuProvedor();
		MenuPrincipal^ Menu = Menu->getInstance();
		Menu->AbrirFormularioEnPanel(menuProvedor);
	}
	else {
		MenuAdministrador^ menuAdmin = gcnew MenuAdministrador();
		MenuPrincipal^ Menu = Menu->getInstance();
		Menu->AbrirFormularioEnPanel(menuAdmin);
	}
}
