#include "pch.h"
#include "MenuPrincipal.h"
#include "MenuProvedor.h"
#include "EditarProveidorUI.h"
#include "TxEditarProveidor.h"

using namespace StudyHub;
using namespace System::Windows::Forms;

System::Void EditarProveidorUI::edit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ca = oldPassword->Text;
	String^ cn = newPassword->Text;
	if (ca == "" || cn == "") {
		MessageBox::Show("Omple tots els camps per continuar.");
	}
	else if (ca == cn) {
		MessageBox::Show("Error: Els dos camps no poden tenir el mateix valor.");
	}
	else {
		TxEditarProveidor^ txEdit = gcnew TxEditarProveidor(ca,  cn);
		try {
			txEdit->executar();
		}
		else {
			MessageBox::Show("Contrasenya modificada correctament.");
			
			MenuPrincipal^ menu = MenuPrincipal::getInstance();
			MenuProvedor^ provedor = gcnew MenuProvedor();

			menu->canviaVisibilitat_ButtonMenu(false);
			menu->AbrirFormularioEnPanel(provedor);
		}
		this->Close();
		
		
	}
}

System::Void EditarProveidorUI::cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	MenuProvedor^ provedor = gcnew MenuProvedor();

	menu->canviaVisibilitat_ButtonMenu(false);
	menu->AbrirFormularioEnPanel(provedor);
}