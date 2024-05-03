#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuProvedor.h"
#include "MenuGestioProveidor.h"

using namespace StudyHub;

System::Void MenuProvedor::gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioProveidor^ menuGestio = gcnew MenuGestioProveidor();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(menuGestio);
}