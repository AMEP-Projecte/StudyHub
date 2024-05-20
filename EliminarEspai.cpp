#include "pch.h"
#include "EliminarEspai.h"
#include "MenuPrincipal.h"
#include "MenuGestioEspais.h"

using namespace StudyHub;

System::Void EliminarEspai::ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e) {

	MenuGestioEspais^ espai = gcnew MenuGestioEspais();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(espai);
}