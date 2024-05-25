#include "pch.h"
#include "MenuAdministrador.h"
#include "MenuPrincipal.h"
#include "MenuGestioProveidorAdmin.h"
#include "TancarSessio.h"
#include "MenuGestioEstudiantsAdmin.h"

using namespace StudyHub;

System::Void MenuAdministrador::gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioProveidorAdmin^ editar = gcnew MenuGestioProveidorAdmin();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(editar);
}

System::Void MenuAdministrador::tancaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	TancarSessio^ tanca = gcnew TancarSessio();
	MenuPrincipal^ menu = menu->getInstance();
	menu->AbrirFormularioEnPanel(tanca);
}

System::Void MenuAdministrador::gestionaGrups_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioEstudiantsAdmin^ gestionaEtudiants = gcnew MenuGestioEstudiantsAdmin();
	MenuPrincipal^ menu = menu->getInstance();
	menu->AbrirFormularioEnPanel(gestionaEtudiants);
}