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
        MessageBox::Show("Selecciona una adreça per continuar.");
    }
    else if (grupComboBox->SelectedItem == nullptr || grupComboBox->SelectedItem->ToString() == "") {
        MessageBox::Show("Selecciona un grup per continuar.");
    }
    else if ((int)horaFnumeric->Value <= (int)horaINumeric->Value) {
        MessageBox::Show("La hora de fi ha de ser major que la de inici");
    }
    else {
        // Comprobar si la fecha y hora seleccionadas son posteriores a la fecha y hora actual
        DateTime fechaHoraActual = DateTime::Now;
        DateTime fechaSeleccionada = dateTimePicker1->Value;
        DateTime horaInicioSeleccionada = DateTime(fechaSeleccionada.Year, fechaSeleccionada.Month, fechaSeleccionada.Day, (int)horaINumeric->Value, 0, 0);
        DateTime horaFinSeleccionada = DateTime(fechaSeleccionada.Year, fechaSeleccionada.Month, fechaSeleccionada.Day, (int)horaFnumeric->Value, 0, 0);

        if (DateTime::Compare(horaInicioSeleccionada, fechaHoraActual) <= 0) {
            MessageBox::Show("La fecha y hora de inici han de ser posteriors a la actual.");
        }
        else {
            // Los campos están seleccionados y la fecha y hora son válidas, proceder con la lógica principal
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
			MessageBox::Show("Encara no hi han sessions creades per aquesta adre\u00e7a.");
		}
		else MessageBox::Show(s);
	}
	else {
		// No se ha seleccionado ninguna adreca
		MessageBox::Show("Escull una adre\u00e7a");
	}
}
