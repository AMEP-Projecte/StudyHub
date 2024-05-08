#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuGestioProveidorAdmin.h"
#include "CrearProveidorUI.h"
#include "EsborrarProveidorUI.h"

using namespace StudyHub;

System::Void MenuGestioProveidorAdmin::crear_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearProveidorUI^ consultar = gcnew CrearProveidorUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(consultar);
}

System::Void MenuGestioProveidorAdmin::eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	EsborrarProveidorUI^ editar = gcnew EsborrarProveidorUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(editar);
}