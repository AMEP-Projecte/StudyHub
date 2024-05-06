#include "pch.h"
#include "MenuGestioEspais.h"
#include "MenuPrincipal.h"
#include "CrearEspaiUI.h"
#include "ConsultarEspaiUI.h"
#include "EditarEspaiUI.h"

using namespace StudyHub;

System::Void MenuGestioEspais::botoncrear_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearEspaiUI^ Crear = gcnew CrearEspaiUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirFormularioEnPanel(Crear);
}

System::Void MenuGestioEspais::botonconsultar_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarEspaiUI^ Crear = gcnew ConsultarEspaiUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirFormularioEnPanel(Crear);
}

System::Void MenuGestioEspais::botoneditar_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarEspaiUI^ Crear = gcnew EditarEspaiUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirFormularioEnPanel(Crear);
}


/*
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
*/
