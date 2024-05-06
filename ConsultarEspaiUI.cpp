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
			labelNom->Text = txCE->obteNom();
			labelCapacitat->Text = txCE->obteCapacitat().ToString();
			labelProveidor->Text = txCE->obteUproveidor();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

	System::Void ConsultarEspaiUI::tornar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
