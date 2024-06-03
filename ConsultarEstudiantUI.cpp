#include "pch.h"
#include "ConsultarEstudiantUI.h"

using namespace StudyHub;

System::Void ConsultarEstudiantUI::TancarButton_Click(System::Object^ sender, System::EventArgs^ e) {
    MenuPrincipal^ menu = MenuPrincipal::getInstance();
    menu->ButtonMenuEstudiant->Visible = false;
    this->Close();
}