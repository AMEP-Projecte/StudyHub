#include "pch.h"
#include "EliminarPerfilEstudiantUI.h"
#include "TxEsborraUsuari.h"
#include "MenuPrincipal.h"
#include "IniciarSessio.h"


using namespace StudyHub;

System::Void EliminarPerfilEstudiantUI::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ contrasenya = txt_contra->Text;

	try {
		if (contrasenya != "") {
			TxEsborraUsuari txEU(contrasenya);
			txEU.executar();
			MenuPrincipal^ Menu = Menu->getInstance();
			IniciarSessio^ Inici = gcnew IniciarSessio();
			Menu->HacerInivisible_Load();
			this->Close();
			Menu->AbrirFormularioEnPanel(Inici);
		}
		else {
			MessageBox::Show("Has d'omplir el camp.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}