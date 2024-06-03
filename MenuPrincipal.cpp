#include "pch.h"
#include "MenuPrincipal.h"
#include "IniciarSessio.h"
#include "CrearEstudiant.h"

// usuari Estudiant
#include "MenuEstudiant.h"
#include "MenuGestioGrups.h"
#include "MenuSessionsUI.h"

// usuari Proveidor
#include "MenuProvedor.h"
#include "MenuGestioProveidor.h"
#include "MenuGestioEspais.h"

// usuari Admin
#include "MenuAdministrador.h"
#include "MenuGestioProveidorAdmin.h"
#include "MenuGestioEstudiantsAdmin.h"

using namespace StudyHub;

System::Void MenuPrincipal::FormPrincipal_Load() {
	IniciarSessio^ NewForm = gcnew IniciarSessio();
	AbrirFormularioEnPanel(NewForm);
}

System::Void  MenuPrincipal::buttonMenu(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sistema = Sistema::getInstance();
	
	if (sistema->obteEstatSessio()) {
		String^ tipusUsuari = sistema->obteTipusUsuari();

		if (tipusUsuari == "estudiant") {
			MenuEstudiant^ menuEst = gcnew MenuEstudiant();
			this->ButtonMenu->Visible = false;
			AbrirFormularioEnPanel(menuEst);
		}
		else if (tipusUsuari == "proveidor") {
			MenuProvedor^ menuPro = gcnew MenuProvedor();
			AbrirFormularioEnPanel(menuPro);
		}
		else {
			MenuAdministrador^ menuAdm = gcnew MenuAdministrador();
			AbrirFormularioEnPanel(menuAdm);
		}
	}
	else {
		IniciarSessio^ NewForm = gcnew IniciarSessio();
		AbrirFormularioEnPanel(NewForm);
	}
}

MenuPrincipal^ MenuPrincipal::getInstance() {
	if (InistanceMenuPrincipal == nullptr) {
		InistanceMenuPrincipal = gcnew MenuPrincipal();
	}
	return InistanceMenuPrincipal;
}

System::Void MenuPrincipal::AbrirFormularioEnPanel(Form^ formHijo) {
	if (PanelContainer->Controls->Count > 0) {
		PanelContainer->Controls->Clear();
	}
	formHijo->TopLevel = false;
	formHijo->ControlBox = false;
	formHijo->Dock = DockStyle::Fill;
	PanelContainer->Controls->Add(formHijo);
	formHijo->Show();
	formHijo->BringToFront();
}

System::Void MenuPrincipal::AbrirSubFormularioEnPanel(Form^ formHijo) {
	formHijo->TopLevel = false;
	formHijo->ControlBox = false;
	formHijo->Dock = DockStyle::Fill;
	PanelContainer->Controls->Add(formHijo);
	formHijo->Show();
	formHijo->BringToFront();
}

System::Void MenuPrincipal::AbrirSubFormularioEnPanelOriginal(Form^ formHijo) {
	formHijo->TopLevel = false;
	formHijo->ControlBox = false;
	formHijo->StartPosition = FormStartPosition::Manual; // Establece la posición manualmente

	// Calcula la posición centrada dentro del panel
	int posX = (PanelContainer->Width - formHijo->Width) / 2;
	int posY = (PanelContainer->Height - formHijo->Height) / 2;
	formHijo->Location = System::Drawing::Point(posX, posY);

	PanelContainer->Controls->Add(formHijo);
	formHijo->Show();
	formHijo->BringToFront();
}

System::Void MenuPrincipal::HacerVisible() {
	this->ButtonMenu->Visible = true;
	this->ButtonMaximized->Visible = true;

	this->ButtonMenuEstudiant->Visible = true;
	this->ButtonMenuGrups->Visible = true;
	this->buttonMenuSessions->Visible = true;

	this->buttonGestioEspais->Visible = false;

	this->buttonGestioProveidors->Visible = false;
	this->buttonGestioEstudiants->Visible = false;
}

System::Void MenuPrincipal::HacerVisibleProvedor() {
	this->ButtonMaximized->Visible = false;

	this->ButtonMenuEstudiant->Visible = false;
	this->ButtonMenuGrups->Visible = false;
	this->buttonMenuSessions->Visible = false;

	this->buttonGestioEspais->Visible = true;

	this->buttonGestioProveidors->Visible = false;
	this->buttonGestioEstudiants->Visible = false;
}

System::Void MenuPrincipal::HacerVisibleAdmin() {
	this->ButtonMenu->Visible = false;
	this->ButtonMaximized->Visible = false;

	this->ButtonMenuEstudiant->Visible = false;
	this->ButtonMenuGrups->Visible = false;
	this->buttonMenuSessions->Visible = false;

	this->buttonGestioEspais->Visible = false;

	this->buttonGestioProveidors->Visible = true;
	this->buttonGestioEstudiants->Visible = true;
}

System::Void MenuPrincipal::HacerInivisible_Load() {
	this->ButtonMaximized->Visible = false;

	this->ButtonMenuEstudiant->Visible = false;
	this->ButtonMenuGrups->Visible = false;
	this->buttonMenuSessions->Visible = false;

	this->buttonGestioEspais->Visible = false;

	this->buttonGestioProveidors->Visible = false;
	this->buttonGestioEstudiants->Visible = false;
}

System::Void MenuPrincipal::MenuPrincipal_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
}

System::Void MenuPrincipal::MenuPrincipal_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->dragging) {
		Point newLocation = this->PointToScreen(Point(e->X, e->Y));
		newLocation.Offset(-this->offset.X, -this->offset.Y);
		this->Location = newLocation;
	}
}

System::Void MenuPrincipal::MenuPrincipal_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->dragging = false;
	}
}

System::Void MenuPrincipal::sortir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

System::Void MenuPrincipal::MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	this->ButtonMenu->Visible = false;
	FormPrincipal_Load();
	HacerInivisible_Load();
}

System::Void MenuPrincipal::ButtonMaximized_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == System::Windows::Forms::FormWindowState::Maximized) {
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
	}
	else {
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
	}
}

System::Void MenuPrincipal::ButtonMinimized_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}

System::Void MenuPrincipal::ButtonCloseForm_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

System::Void MenuPrincipal::ButtonMenuGrups_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioGrups^ NewForm = gcnew MenuGestioGrups();
	// Abrir el formulario en el PanelContainer
	AbrirFormularioEnPanel(NewForm);
}

System::Void MenuPrincipal::buttonMenuSessions_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuSessionsUI^ NewForm = gcnew MenuSessionsUI();
	// Abrir el formulario en el PanelContainer
	AbrirFormularioEnPanel(NewForm);
}

System::Void MenuPrincipal::panelTitle_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

System::Void MenuPrincipal::ButtonMenuEstudiant_Click(System::Object^ sender, System::EventArgs^ e) {
	Sistema^ sistema = Sistema::getInstance();
	MenuGestioEstudiant^ gestionaPerfilEst = gcnew MenuGestioEstudiant();
	AbrirFormularioEnPanel(gestionaPerfilEst);
}

System::Void MenuPrincipal::buttonGestioEspais_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioEspais^ gestionaEspais = gcnew MenuGestioEspais();
	AbrirFormularioEnPanel(gestionaEspais);

	this->ButtonMenu->Visible = true;
}

System::Void MenuPrincipal::buttonGestioProveidors_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioProveidorAdmin^ gestionaProveidors = gcnew MenuGestioProveidorAdmin();
	AbrirFormularioEnPanel(gestionaProveidors);

	this->ButtonMenu->Visible = true;
}

System::Void MenuPrincipal::buttonGestioEstudiants_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ButtonMenu->Visible = true;
	this->buttonGestioEstudiants->Visible = false;

	MenuGestioEstudiantsAdmin^ gestioEstudiants = gcnew MenuGestioEstudiantsAdmin();
	AbrirFormularioEnPanel(gestioEstudiants);
}

System::Void MenuPrincipal::canviaVisibilitat_ButtonMenu(bool visibilitat) {
	this->ButtonMenu->Visible = visibilitat;
}
