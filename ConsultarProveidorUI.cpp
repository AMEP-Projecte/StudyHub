#include "pch.h"
#include "ConsultarProveidorUI.h"
#include "TxConsultarProveidor.h"

// using namespace StudyHub; (Si es descomenta, no cal posar "StudyHub::")
using namespace System::Windows::Forms;

System::Void StudyHub::ConsultarProveidorUI::ConsultarProveidorUI_Load(System::Object^ sender, System::EventArgs^ e) {
	TxConsultarProveidor tx;
	tx.executar();
	usernameLabel->Text = tx.obteUsername();
}
System::Void StudyHub::ConsultarProveidorUI::TancarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}