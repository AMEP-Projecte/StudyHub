#include "pch.h"
#include "MenuProvedor.h"
#include "MenuGestioEspais.h"
#include "MenuPrincipal.h"

using namespace StudyHub;

System::Void MenuProvedor::gestionaEspais_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuGestioEspais^ Crear = gcnew MenuGestioEspais();
	MenuPrincipal^ Menu = Menu->getInstance();
	Menu->AbrirFormularioEnPanel(Crear);
}

	   /*
#include "pch.h"
#include "MenuGestioGrups.h"
#include "ConsultarEstudiantUI.h"
#include "MenuPrincipal.h"
#include "CrearNouGrupEstudi.h"
#include "ConsultarGrup.h"
#include "EditarGrup.h"
#include "EliminarGrupEstudi.h"

	   using namespace StudyHub;

	   System::Void MenuGestioGrups::crea_Click(System::Object^ sender, System::EventArgs^ e) {
		   CrearNouGrupEstudi^ Crear = gcnew CrearNouGrupEstudi();
		   MenuPrincipal^ Menu = Menu->getInstance();
		   Menu->AbrirSubFormularioEnPanel(Crear);
	   }

	   */