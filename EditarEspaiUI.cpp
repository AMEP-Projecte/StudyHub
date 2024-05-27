#include "pch.h"
#include "EditarEspaiUI.h"
#include "TxEditarEspai.h"


using namespace StudyHub;
using namespace System::Windows::Forms;


System::Void EditarEspaiUI::edit_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int capacitatnova = Decimal::ToInt32(this->numericUpDown1->Value);
	try {
		if ( capacitatnova == 0) {
			MessageBox::Show("Modifica la capacitat, si us plau.");
		}
		else {
			TxEditarEspai^ txEE = gcnew TxEditarEspai(_adreca, capacitatnova);
			txEE->executar();
			MessageBox::Show("Espai modificat correctament.");


			MenuGestioEspais^ espai = gcnew MenuGestioEspais();
			MenuPrincipal^ menu = MenuPrincipal::getInstance();
			menu->AbrirFormularioEnPanel(espai);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	
}

System::Void EditarEspaiUI::cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioEspais^ espai = gcnew MenuGestioEspais();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(espai);

}

