#include "pch.h"
#include "ParticipacioSessio.h"
#include "MenuPrincipal.h"
#include "ConsultarSessionsUI.h"
#include "TxParticipacioSessio.h"
#include "Sistema.h"

System::Void StudyHub::ParticipaSessio::cencel_Click(System::Object^ sender, System::EventArgs^ e) {
	ConsultarSessionsUI^ consulta = gcnew ConsultarSessionsUI();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(consulta);
}

System::Void StudyHub::ParticipaSessio::confirmar_Click(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sistema = Sistema::getInstance();
	String^ usernameEstudiant = sistema->obteUsername();

	TxParticipacioSessio^ tx = gcnew TxParticipacioSessio(usernameEstudiant, grup, data, horaInici);

	try {
		tx->executar();
		MessageBox::Show("Has confirmat la teva participacio al grup correctament.");

		ConsultarSessionsUI^ consulta = gcnew ConsultarSessionsUI();
		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		menu->AbrirFormularioEnPanel(consulta);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}