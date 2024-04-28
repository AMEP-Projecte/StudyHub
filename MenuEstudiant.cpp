#include "pch.h"
#include "MenuEstudiant.h"
#include "MenuPrincipal.h"
#include "TancarSessio.h"
using namespace StudyHub;

System::Void MenuEstudiant::tancaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	// Crear una nova instancia del nou formulari
	TancarSessio^ tancarSes = gcnew TancarSessio();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(tancarSes);
}

System::Void MenuEstudiant::gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::MenuGestioEstudiant^ gestionaEstudiant = gcnew StudyHub::MenuGestioEstudiant();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(gestionaEstudiant);
}

System::Void MenuEstudiant::gestionaGrups_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::MenuGestioGrups^ gestionaGrups = gcnew StudyHub::MenuGestioGrups();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(gestionaGrups);
}