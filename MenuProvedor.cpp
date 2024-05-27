#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuProvedor.h"
#include "MenuGestioEspais.h"
#include "EditarProveidorUI.h"
#include "TancarSessio.h"

using namespace StudyHub;

System::Void MenuProvedor::MenuProvedor_Load(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->canviaVisibilitat_ButtonMenu(false);
	Menu->HacerVisibleProvedor();

	Sistema^ sistema = Sistema::getInstance();
	labelUsername->Text = sistema->obteUsername();
}

System::Void MenuProvedor::gestionaEspais_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioEspais^ menuGestioEspais = gcnew MenuGestioEspais();
	MenuPrincipal^ Menu = Menu->getInstance();

	Menu->canviaVisibilitat_ButtonMenu(true);
	Menu->buttonGestioEspais->Visible = false;
	Menu->AbrirSubFormularioEnPanel(menuGestioEspais);
}

System::Void MenuProvedor::tancaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ Menu = Menu->getInstance();
	TancarSessio^ tancaSessio = gcnew TancarSessio();

	Menu->canviaVisibilitat_ButtonMenu(true);
	Menu->AbrirSubFormularioEnPanel(tancaSessio);
}

System::Void MenuProvedor::editar_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ Menu = Menu->getInstance();
	EditarProveidorUI^ editar = gcnew EditarProveidorUI();

	Menu->canviaVisibilitat_ButtonMenu(true);
	Menu->AbrirFormularioEnPanel(editar);
}
