#include "pch.h"
#include "MenuAdministrador.h"
#include "MenuPrincipal.h"
#include "MenuGestioProveidorAdmin.h"
#include "TancarSessio.h"
#include "MenuGestioEstudiantsAdmin.h"
#include "TxObteEstudiantsGrupsEspais.h"

using namespace StudyHub;

System::Void MenuAdministrador::MenuAdministrador_Load(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->canviaVisibilitat_ButtonMenu(false);
	Menu->buttonGestioEstudiants->Visible = true;
	Menu->buttonGestioProveidors->Visible = true;

	TxObteEstudiantsGrupsEspais^ tx = gcnew TxObteEstudiantsGrupsEspais("");
	tx->executar();
	ConsultaEstudiantsGrupsEspais^ consulta = tx->obteResultat();

	labelNumEstudiants->Text = Convert::ToString(consulta->estudiants->Count);
	labelNumGrups->Text = Convert::ToString(consulta->grups->Count);
	labelNumEspais->Text = Convert::ToString(consulta->espais->Count);
}

System::Void MenuAdministrador::gestionaPerfil_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioProveidorAdmin^ gestionaProveidors = gcnew MenuGestioProveidorAdmin();
	MenuPrincipal^ Menu = Menu->getInstance();

	Menu->canviaVisibilitat_ButtonMenu(true);
	Menu->buttonGestioEstudiants->Visible = true;
	Menu->buttonGestioProveidors->Visible = false;

	Menu->AbrirSubFormularioEnPanel(gestionaProveidors);
}

System::Void MenuAdministrador::tancaSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	TancarSessio^ tanca = gcnew TancarSessio();
	MenuPrincipal^ menu = menu->getInstance();

	menu->canviaVisibilitat_ButtonMenu(true);
	menu->buttonGestioEstudiants->Visible = true;
	menu->buttonGestioProveidors->Visible = true;

	menu->AbrirFormularioEnPanel(tanca);
}

System::Void MenuAdministrador::gestionaGrups_Click(System::Object^ sender, System::EventArgs^ e) { // Gestio Estudiants en realitat
	MenuGestioEstudiantsAdmin^ gestionaEstudiants = gcnew MenuGestioEstudiantsAdmin();
	MenuPrincipal^ menu = menu->getInstance();

	menu->canviaVisibilitat_ButtonMenu(true);
	menu->buttonGestioEstudiants->Visible = false;
	menu->buttonGestioProveidors->Visible = true;

	menu->AbrirFormularioEnPanel(gestionaEstudiants);
}