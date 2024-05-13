#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuProvedor.h"
#include "MenuGestioProveidor.h"
#include "MenuGestioEspais.h"
#include "TancarSessio.h"

using namespace StudyHub;

System::Void MenuProvedor::gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioProveidor^ menuGestio = gcnew MenuGestioProveidor();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(menuGestio);
}

System::Void MenuProvedor::gestionaEspais_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioEspais^ menuGestioEspais = gcnew MenuGestioEspais();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(menuGestioEspais);
}

System::Void MenuProvedor::tancaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	TancarSessio^ tancaSessio = gcnew TancarSessio();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(tancaSessio);
}
