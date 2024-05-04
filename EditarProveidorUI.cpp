#include "pch.h"
#include "EditarProveidorUI.h"
#include "TxEditarProveidor.h"

using namespace StudyHub;
using namespace System::Windows::Forms;

System::Void EditarProveidorUI::edit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ca = oldPassword->Text;
	String^ cn = newPassword->Text;
	if (ca == "" || cn == "") {
		MessageBox::Show("Error: Completa tots els camps.");
	}
	else if (ca == cn) {
		MessageBox::Show("Error: Els dos camps no poden tenir el mateix valor.");
	}
	else {
		TxEditarProveidor^ txEdit = gcnew TxEditarProveidor(ca, cn);
		try {
			txEdit->executar();
			MessageBox::Show("Contrasenya modificada correctament.");
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}

System::Void EditarProveidorUI::cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}