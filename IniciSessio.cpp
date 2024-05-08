#include "pch.h"
#include "IniciSessio.h"
#include "MenuEstudiant.h"
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
			MessageBox::Show("Error amb l'inici de sessio");
		}
		else {
			Sistema^ sist = sist->getInstance();
			String^ tipus = sist->obteTipusUsuari();
			if (tipus=="estudiant") {
				StudyHub::MenuEstudiant^ menuEstudiant = gcnew StudyHub::MenuEstudiant();
				StudyHub::MenuPrincipal^ Menu = Menu->getInstance();
				Menu->AbrirSubFormularioEnPanel(menuEstudiant);
				Menu->HacerVisible();
			}
			else if (tipus=="administrador") {
				StudyHub::MenuAdministrador^ menuAdmin = gcnew StudyHub::MenuAdministrador();
				StudyHub::MenuPrincipal^ Menu = Menu->getInstance();
				Menu->HacerVisibleAdmin();
				Menu->AbrirFormularioEnPanel(menuAdmin);
			}
			else if (tipus == "proveidor") {
				StudyHub::MenuProvedor^ menuProv = gcnew StudyHub::MenuProvedor();
				StudyHub::MenuPrincipal^ Menu = Menu->getInstance();
				Menu->HacerVisibleProvedor();
				Menu->AbrirSubFormularioEnPanel(menuProv);
			}
			else {
				MessageBox::Show("Error amb l'inici de sessio");
			}
		}
	}
}
