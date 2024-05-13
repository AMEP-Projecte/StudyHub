#include "pch.h"
#include "MenuSessionsUI.h"

#include "MenuPrincipal.h"
#include "ConsultarSessionsUI.h"
#include "EditarSessio.h"
#include "EsborraSessioUI.h"
#include "ProgramarSessioEstudiUI.h"

using namespace StudyHub;

System::Void MenuSessionsUI::consultaSessions_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarSessionsUI^ consulta = gcnew ConsultarSessionsUI();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(consulta);
}

System::Void MenuSessionsUI::editaSessions_Click(System::Object^ sender, System::EventArgs^ e) {
	EditarSessio^ edita = gcnew EditarSessio();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(edita);
}

System::Void MenuSessionsUI::esborraSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	EsborraSessioUI^ esborra = gcnew EsborraSessioUI();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(esborra);
}

System::Void MenuSessionsUI::programaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	ProgamarSessioEstudiUI^ programa = gcnew ProgamarSessioEstudiUI();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(programa);
}



