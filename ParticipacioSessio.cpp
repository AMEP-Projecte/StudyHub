#include "pch.h"
#include "ParticipacioSessio.h"
#include "MenuPrincipal.h"
#include "ConsultarSessionsUI.h"
#include "TxParticipacioSessio.h"
#include "Sistema.h"
#include "CercadoraSessio.h"
#include "MenuSessionsUI.h"

System::Void StudyHub::ParticipaSessio::cencel_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuSessionsUI^ sessions = gcnew MenuSessionsUI();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(sessions);
}

System::Void StudyHub::ParticipaSessio::confirmar_Click(System::Object^ sender, System::EventArgs^ e) {
	;
	Sistema^ sistema = Sistema::getInstance();
	String^ usernameEstudiant = sistema->obteUsername();

	PassarellaSessio^ sessio = CercadoraSessio::cercaAdreca(grup, data, horaInici);
	TxParticipacioSessio^ tx = gcnew TxParticipacioSessio(usernameEstudiant, grup, data, horaInici,adreca, sessio->obteId());

	try {
		
		tx->executar();
		MessageBox::Show("Has confirmat la teva participació!");
		
		MenuSessionsUI^ sessions = gcnew MenuSessionsUI();
		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		menu->AbrirFormularioEnPanel(sessions);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}