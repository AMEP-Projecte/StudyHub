#include "pch.h"
#include "IniciSessio.h"
// #include "MenuEstudiant.h"
#include "MenuGestioEstudiant.h"
#include "MenuPrincipal.h"
#include "Sistema.h"
#include "MenuAdministrador.h"
#include "MenuProvedor.h"

using namespace System::Windows::Forms;


System::Void StudyHub::IniciSessio::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = this->textBox1->Text;
	String^ contrasenya = this->textBox2->Text;
	if (username == "" || contrasenya == "") {
		MessageBox::Show("Error: Completa tots els camps");
	}
	else {
		TxIniciarSessio^ tx;
		tx = gcnew TxIniciarSessio(username, contrasenya);
		bool err = tx->executar();
		if (err) {
			MessageBox::Show("Error amb l'inici de sessi\u00F3");
		}
		else {
			Sistema^ sist = sist->getInstance();
			String^ tipus = sist->obteTipusUsuari();

			StudyHub::MenuPrincipal^ Menu = Menu->getInstance();
			Menu->canviaVisibilitat_ButtonMenu(false);
		
			if (tipus=="estudiant") {
				StudyHub::MenuGestioEstudiant^ menuEstudiant = gcnew StudyHub::MenuGestioEstudiant();
				MenuPrincipal^ menu = MenuPrincipal::getInstance();
				menu->ButtonMenuEstudiant->Visible = false;
				Menu->AbrirSubFormularioEnPanel(menuEstudiant);
				// Menu->HacerVisible();
			}
			else if (tipus=="administrador") {
				StudyHub::MenuAdministrador^ menuAdmin = gcnew StudyHub::MenuAdministrador();
				Menu->HacerVisibleAdmin();
				Menu->AbrirFormularioEnPanel(menuAdmin);
			}
			else if (tipus == "proveidor") {
				StudyHub::MenuProvedor^ menuProv = gcnew StudyHub::MenuProvedor();
				Menu->HacerVisibleProvedor();
				Menu->AbrirSubFormularioEnPanel(menuProv);
			}
		}
	}
}
