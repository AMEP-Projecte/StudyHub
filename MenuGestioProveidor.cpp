#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuGestioProveidor.h"
#include "ConsultarProveidorUI.h"

using namespace StudyHub;

System::Void MenuGestioProveidor::consultar_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarProveidorUI^ consultar = gcnew ConsultarProveidorUI();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirSubFormularioEnPanel(consultar);
}