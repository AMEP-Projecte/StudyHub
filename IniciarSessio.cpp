#include "pch.h"
#include "IniciarSessio.h"
#include "MenuPrincipal.h"
#include "IniciSessio.h"

System::Void StudyHub::IniciarSessio::ButtonIniciarSessio_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ Menu = Menu->getInstance();
	IniciSessio^ NewForm = gcnew IniciSessio();
	Menu->AbrirSubFormularioEnPanel(NewForm);
}

