#include "pch.h"
#include "ConsultarSessionsUI.h"
#include "MenuPrincipal.h"
#include "MenuSessionsUI.h"
#include "ParticipacioSessio.h"

System::Void StudyHub::ConsultarSessionsUI::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuSessionsUI^ menuGestioSessions = gcnew MenuSessionsUI();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(menuGestioSessions);
}

System::Void StudyHub::ConsultarSessionsUI::participa_Click(System::Object^ sender, System::EventArgs^ e) {
	if (grupSessio == "") {
		MessageBox::Show("Selecciona una sessio, si us plau.");
	}
	else {
		ParticipaSessio^ participa = gcnew ParticipaSessio();
		participa->grup = grupSessio;
		participa->data = dataSessio;
		participa->horaInici = horaIniciSessio;

		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		menu->AbrirFormularioEnPanel(participa);
	}
}