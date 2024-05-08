#include "pch.h"
#include "IniciarSessio.h"
#include "MenuPrincipal.h"
#include "CrearEstudiant.h"
#include "IniciSessio.h"

using namespace StudyHub;

System::Void IniciarSessio::ButtonIniciarSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ Menu = Menu->getInstance();
	IniciSessio^ NewForm = gcnew IniciSessio();
	Menu->AbrirSubFormularioEnPanel(NewForm);
}

System::Void IniciarSessio::registrar_Click(System::Object^ sender, System::EventArgs^ e) {
	StudyHub::CrearEstudiant^ registraEstudiant = gcnew StudyHub::CrearEstudiant();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(registraEstudiant);
}

System::Void IniciarSessio::sortir_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->Close();
}
