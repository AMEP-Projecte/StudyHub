#include "pch.h"
#include "EliminarEspaiUI.h"


using namespace StudyHub;

System::Void ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e) {

	MenuGestioEspais^ espai = gcnew MenuGestioEspais();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(espai);

}

