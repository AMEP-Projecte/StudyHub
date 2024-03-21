#include "pch.h"
#include "CercadoraPertany.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;
using namespace System::Windows::Forms;

DataTable^ CercadoraPertany::cercaParticipants(String^ nomGrup) {
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "SELECT * FROM grup WHERE nom = ‘" + nomGrup + "’";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cmd);

    DataTable^ taula = gcnew DataTable();

    try {
        // obrim la connexió
        conn->Open();

        // Omplim la DataTable
        data->Fill(taula);

    }

    catch (Exception^ ex) {
        // codi per mostrar l’error en una finestra
        MessageBox::Show(ex->Message);
    }
    finally {
        // si tot va bé es tanca la connexió
        conn->Close();
    }

    return taula;
}