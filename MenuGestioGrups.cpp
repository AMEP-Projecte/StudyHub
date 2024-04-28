#include "pch.h"
#include "MenuGestioGrups.h"
#include "ConsultarEstudiantUI.h"
#include "MenuPrincipal.h"
#include "CrearNouGrupEstudi.h"
#include "ConsultarGrup.h"
#include "EditarGrup.h"
#include "EliminarGrupEstudi.h"

using namespace StudyHub;

System::Void MenuGestioGrups::crea_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearNouGrupEstudi^ Crear = gcnew CrearNouGrupEstudi();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(Crear);
}

System::Void MenuGestioGrups::consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarGrup^ consultar = gcnew ConsultarGrup();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(consultar);
}

System::Void MenuGestioGrups::edita_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarGrup^ editar = gcnew EditarGrup();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(editar);
}

System::Void MenuGestioGrups::elimina_Click(System::Object^ sender, System::EventArgs^ e) {
	EliminarGrupEstudi^ eliminar = gcnew EliminarGrupEstudi();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(eliminar);
}

System::Void MenuGestioGrups::tornar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}