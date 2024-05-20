#include "pch.h"
#include "ConsultarEspaiUI.h"
#include "TxConsultaEspai.h"



using namespace StudyHub;
using namespace System::Windows::Forms;


System::Void ConsultarEspaiUI::botonetconsultar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ adreca = this->textBox1->Text;
	try {
		if (adreca == "") {
			MessageBox::Show("Has de posar una adreça correcta, si us plau.");
		} 
		else {
			TxConsultaEspai^ txCE = gcnew TxConsultaEspai(adreca);
			txCE->executar();
			labelNom->Text = txCE->obteResultat()._nom;
			labelCapacitat->Text = txCE->obteResultat()._capacitat.ToString();
			labelProveidor->Text = txCE->obteResultat()._uproveidor;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

	System::Void ConsultarEspaiUI::tornar_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuGestioEspais^ espai = gcnew MenuGestioEspais();
		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		menu->AbrirFormularioEnPanel(espai);
	}
