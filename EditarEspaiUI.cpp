#include "pch.h"
#include "EditarEspaiUI.h"
#include "TxEditarEspai.h"


using namespace StudyHub;
using namespace System::Windows::Forms;


System::Void EditarEspaiUI::edit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ adr = this->textAdreca->Text;
	int capacitatnova = Decimal::ToInt32(this->numericUpDown1->Value);
	try {
		if (adr == "" || capacitatnova == 0) {
			MessageBox::Show("Omple els dos camps, si us plau.");
		}
		else {
			TxEditarEspai^ txEE = gcnew TxEditarEspai(adr, capacitatnova);
			txEE->executar();
			MessageBox::Show("Espai modificat correctament.");
			this->Close();
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

