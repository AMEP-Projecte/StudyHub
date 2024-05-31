#include "pch.h"
#include "ProgramarSessioEstudiUI.h"
#include "TxProgramarSessioEstudi.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


System::Void StudyHub::ProgamarSessioEstudiUI::buttonOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (espaiComboBox->SelectedItem == nullptr || espaiComboBox->SelectedItem->ToString() == "") {
		MessageBox::Show("Selecciona una adre\u00e7a per continuar.");
	}
	else if (grupComboBox->SelectedItem == nullptr || grupComboBox->SelectedItem->ToString() == "") {
		MessageBox::Show("Selecciona un grup per continuar.");
	}
	else {
		// Los campos est�n seleccionados, proceder con la l�gica principal
		
		
		try {
			
			String^ data = dateTimePicker1->Value.ToString("yyyy-MM-dd");
			String^ horaFi = horaFnumeric->Value.ToString() + ":00:00";
			String^ horaI = horaINumeric->Value.ToString() + ":00:00";
			TxProgramarSessioEstudi tx(grupComboBox->SelectedItem->ToString(), data, horaI, horaFi, espaiComboBox->SelectedItem->ToString());
			tx.executar();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		MenuSessionsUI^ sessio = gcnew MenuSessionsUI();
		MenuPrincipal^ menu = MenuPrincipal::getInstance();
		menu->AbrirFormularioEnPanel(sessio);

	}
	
}
System::Void StudyHub::ProgamarSessioEstudiUI::SessionButtob_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (espaiComboBox->SelectedItem != nullptr && espaiComboBox->SelectedItem->ToString() != "") {
		// Se ha seleccionado una adreca v�lida
		List<PassarellaSessio^>^ sessions = tx.obteSessionsPerAdreca(espaiComboBox->SelectedItem->ToString());
		String^ s = "";
		for each (PassarellaSessio ^ sessio in sessions)
		{
			s += "Data: " + sessio->obteData() + " Hora Inici: " + sessio->obteHoraInici() + " Hora Fi: " + sessio->obteHoraFi() + "\n";
		}
		if (s == "") {
			MessageBox::Show("Encara no hi han sessions creades per aquesta adre\u00e7a.");
		}
		else MessageBox::Show(s);
	}
	else {
		// No se ha seleccionado ninguna adreca
		MessageBox::Show("Escull una adre\u00e7a");
	}
}
