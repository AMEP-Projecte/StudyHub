#include "pch.h"
#include "MenuGestioEstudiant.h"
#include "ConsultarEstudiantUI.h"
#include "EliminarPerfilEstudiantUI.h"
#include "MenuPrincipal.h"
#include "TancarSessio.h"
#include "EditarEstudiant.h"

using namespace StudyHub;

System::Void MenuGestioEstudiant::tornar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Crear una nova instancia del nou formulari
	TancarSessio^ tancarSes = gcnew TancarSessio();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(tancarSes);
}

System::Void MenuGestioEstudiant::editar_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarEstudiant^ editar = gcnew EditarEstudiant();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(editar);
}

System::Void MenuGestioEstudiant::eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::EliminarPerfilEstudiantUI^ eliminar = gcnew StudyHub::EliminarPerfilEstudiantUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(eliminar);
	Sistema^ sistema = Sistema::getInstance();
}

System::Void MenuGestioEstudiant::consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarEstudiantUI^ consultar = gcnew ConsultarEstudiantUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(consultar);
}