#include "pch.h"
#include "CrearEspaiUI.h"
#include "Sistema.h"
#include "TxCreaEspai.h"
#include "MenuPrincipal.h"
#include "MenuGestioEspais.h"

using namespace StudyHub;
using namespace System::Windows::Forms;

System::Void CrearEspaiUI::botonetcrea_Click(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sist = Sistema::getInstance();
	try {
		if (this->textBox1->Text != "" && this->textBox2->Text != "" && this->numericUpDown1->Value != 0) {
			//TxCreaEspai txCE(this->textBox1->Text, this->textBox2->Text, this->textBox3->Text, sist->obteProveidor()->obteUsername);
			 // Convertir el valor Decimal a int
			int capacitatEnter = Decimal::ToInt32(this->numericUpDown1->Value);
			
			TxCreaEspai txCE(this->textBox1->Text, this->textBox2->Text, capacitatEnter, sist->obteProveidor()->obteNomUsuari());
			//String^ upc = "upc";
			//TxCreaEspai txCE(this->textBox1->Text, this->textBox2->Text, capacitatEnter, upc);
			txCE.executa();
			//this->Close();

			MenuGestioEspais^ espai = gcnew MenuGestioEspais();
			MenuPrincipal^ menu = MenuPrincipal::getInstance();
			menu->AbrirFormularioEnPanel(espai);
		}
		else {
			MessageBox::Show("No pot haver-hi un camp buit o ja existeix un espai amb aquella adreça.");
		}
	} 
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

/*
Sistema^ sist = Sistema::getInstance();
try {
	if (this->textBox1->Text != "" && this->textBox2->Text != "") {
		TxCrearNouGrupEstudi CrearGrup(this->textBox1->Text, this->textBox2->Text, sist->obteEstudiant()->obteUsername());
		CrearGrup.executa();
		this->Close();
	}
	else {
		MessageBox::Show("No pot haver-hi un camp buit.");
	}
}
catch (Exception^ ex) {
	MessageBox::Show(ex->Message);

	
}  */
/*
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

		}
	}
}
*/
