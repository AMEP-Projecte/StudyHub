#include "pch.h"
#include "EditarSessio.h"
#include "MenuPrincipal.h"
#include "MenuSessionsUI.h"

System::Void StudyHub::EditarSessio::buttonTornar_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuSessionsUI^ menuGestioSessions = gcnew MenuSessionsUI();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(menuGestioSessions);
}


