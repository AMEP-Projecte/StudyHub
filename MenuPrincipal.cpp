#include "pch.h"
#include "MenuAdministrador.h"
#include "MenuProvedor.h"
#include "IniciarSessio.h"
#include "CrearEstudiant.h"
#include "MenuEstudiant.h"
#include "MenuSessionsUI.h"
#include "MenuPrincipal.h"


using namespace StudyHub;

System::Void MenuPrincipal::FormPrincipal_Load() {
	IniciarSessio^ NewForm = gcnew IniciarSessio();
	AbrirFormularioEnPanel(NewForm);
}

System::Void  MenuPrincipal::buttonMenu(System::Object^ sender, System::EventArgs^ e) {
	IniciarSessio^ NewForm = gcnew IniciarSessio();
	AbrirFormularioEnPanel(NewForm);
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
	this->ButtonMenuEstudiant->Visible = true;
	this->ButtonMenuGrups->Visible = true;
	this->buttonMenuSessions->Visible = true;
	this->ButtonMenu->Visible = false;
	this->ButtonMenuProveidors->Visible = false;
	this->ButtonMenuAdmin->Visible = false;
}

System::Void MenuPrincipal::HacerVisibleProvedor() {
	this->ButtonMenuProveidors->Visible = true;
	this->ButtonMenuAdmin->Visible = false;
	this->ButtonMenuEstudiant->Visible = false;
	this->ButtonMenuGrups->Visible = false;
	this->ButtonMenu->Visible = false;
	this->buttonMenuSessions->Visible = false;
}

System::Void MenuPrincipal::HacerVisibleAdmin() {
	this->ButtonMenuProveidors->Visible = false;
	this->ButtonMenuAdmin->Visible = true;
	this->ButtonMenuEstudiant->Visible = false;
	this->ButtonMenuGrups->Visible = false;
	this->ButtonMenu->Visible = false;
	this->buttonMenuSessions->Visible = false;
}

System::Void MenuPrincipal::HacerInivisible_Load() {
	this->ButtonMenu->Visible = true;
	this->ButtonMenuEstudiant->Visible = false;
	this->ButtonMenuGrups->Visible = false;
	this->ButtonMenuAdmin->Visible = false;
	this->ButtonMenuProveidors->Visible = false;
	this->ButtonMaximized->Visible = false;
	this->buttonMenuSessions->Visible = false;
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

System::Void MenuPrincipal::ButtonMenuEstudiant_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuEstudiant^ NewForm = gcnew MenuEstudiant();
	// Abrir el formulario en el PanelContainer
	AbrirFormularioEnPanel(NewForm);
}

System::Void MenuPrincipal::ButtonMenuGrups_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioGrups^ NewForm = gcnew MenuGestioGrups();
	// Abrir el formulario en el PanelContainer
	AbrirFormularioEnPanel(NewForm);
}

System::Void MenuPrincipal::ButtonMenuProveidors_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuProvedor^ NewForm = gcnew MenuProvedor();
	// Abrir el formulario en el PanelContainer
	AbrirFormularioEnPanel(NewForm);
}

System::Void MenuPrincipal::ButtonMenuAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuAdministrador^ NewForm = gcnew MenuAdministrador();
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
