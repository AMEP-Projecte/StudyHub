#include "pch.h"
#include "CrearNouGrupEstudi.h"
#include "TxCrearNouGrupEstudi.h"
#include "PassarellaGrup.h"

using namespace StudyHub;

System::Void CrearNouGrupEstudi::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menu = MenuPrincipal::getInstance();
	menu->ButtonMenuGrups->Visible = false;
	this->Close();
}