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
		MessageBox::Show("Selecciona una adreca per continuar.");
	}
	else if (grupComboBox->SelectedItem == nullptr || grupComboBox->SelectedItem->ToString() == "") {
		MessageBox::Show("Selecciona un grup per continuar.");
	}
	else {
		// Los campos están seleccionados, proceder con la lógica principal
		String^ data = dateTimePicker1->Value.ToString("yyyy-MM-dd");
		String^ horaFi = horaFnumeric->Value.ToString("HH:mm:ss");
		String^ horaI = horaINumeric->Value.ToString("HH:mm:ss");
		tx.ProgramarSessio(grupComboBox->SelectedItem->ToString(), data, horaI, horaFi, espaiComboBox->SelectedItem->ToString());
	}
	
}
System::Void StudyHub::ProgamarSessioEstudiUI::SessionButtob_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (espaiComboBox->SelectedItem != nullptr && espaiComboBox->SelectedItem->ToString() != "") {
		// Se ha seleccionado una adreca válida
		List<PassarellaSessio^>^ sessions = tx.obteSessionsPerAdreca(espaiComboBox->SelectedItem->ToString());
		String^ s = "";
		for each (PassarellaSessio ^ sessio in sessions)
		{
			s += "Data: " + sessio->obteData() + " Hora Inici: " + sessio->obteHoraInici() + " Hora Fi: " + sessio->obteHoraFi() + "\n";
		}
		if (s == "") {
			MessageBox::Show("Encara no hi han sessions creades per aquesta adreca.");
		}
		else MessageBox::Show(s);
	}
	else {
		// No se ha seleccionado ninguna adreca
		MessageBox::Show("Escull una adreca");
	}
}
