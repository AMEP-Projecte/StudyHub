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
			//int cap = txCE->obteCapacitat();
			//labelCapacitat->Text = txCE->obteCapacitat().ToString();  // Convierte Int32 a String
			//labelCapacitat->Text = cap.ToString();
			//numericUpDown1->Value = txCE->obteCapacitat();
			labelCapacitat->Text = txCE->obteCapacitat().ToString();
			labelProveidor->Text = txCE->obteUproveidor();
		} /*
		else {
					TxConsultaEspai^ txCE = gcnew TxConsultaEspai(adreca);
					txCE->executar();
					labelNom->Text = txCE->_nom;
					int capacitat = txCE->_capacitat;
					labelCapacitat->Text = capacitat.ToString();
					labelProveidor->Text = txCE->_uproveidor;
		} */
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	//this->Close();
}

/*
private: System::Void consulta_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom = this->nomGrup->Text;

	try {
		if (nom == "") {
			MessageBox::Show("Posa un nom de grup, si us plau.");
		}
		else {
			TxConsultaGrup^ tx = gcnew TxConsultaGrup(nom);
			tx->executar();
			labelTematica->Text = tx->_tematica;

			int p = tx->_nombreParticipants;
			labelParticipants->Text = p.ToString();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
*/
