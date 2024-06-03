#include "pch.h"
#include "EliminarGrupEstudi.h"

using namespace StudyHub;

System::Void EliminarGrupEstudi::ButtonTornar_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuGrups->Visible = false;
	this->Close();
}