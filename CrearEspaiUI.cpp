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

System::Void  CrearEspaiUI::button1_Click(System::Object^ sender, System::EventArgs^ e) {

	MenuGestioEspais^ espai = gcnew MenuGestioEspais();
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->AbrirFormularioEnPanel(espai);

 }

