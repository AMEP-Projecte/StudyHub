#include "pch.h"
#include "MenuAdministrador.h"
#include "MenuPrincipal.h"
#include "MenuGestioProveidorAdmin.h"

using namespace StudyHub;

System::Void MenuAdministrador::gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioProveidorAdmin^ editar = gcnew MenuGestioProveidorAdmin();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(editar);
}