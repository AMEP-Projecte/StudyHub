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

