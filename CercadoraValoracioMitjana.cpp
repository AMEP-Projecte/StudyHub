#include "pch.h"
#include "CercadoraValoracioMitjana.h"

using namespace System::Windows::Forms; 
using namespace MySql::Data::MySqlClient;

float CercadoraValoracioMitjana::cercaValoracioMitjana(String^ grup) {
    float result = 0.0;
    // Define tu conexión a la base de datos
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;"; // TODO-> posar variable connectionString global
    MySqlConnection^ connection = gcnew MySqlConnection(connectionString);

    try
    {
        // Abre la conexión
        connection->Open();

        // Define la consulta SQL
        String^ sql = "SELECT SUM(puntuacio) AS sumaPuntuaciones, COUNT(*) AS numeroValoraciones FROM valoracioGrup WHERE grup = @nombreGrupo";

        // Crea un SqlCommand
        MySqlCommand^ command = gcnew MySqlCommand(sql, connection);
        command->Parameters->AddWithValue("@nombreGrupo", grup);

        // Ejecuta la consulta y obtiene un SqlDataReader
        MySqlDataReader^ reader = command->ExecuteReader();

        // Lee el resultado
        if (reader->Read())
        {
            // Si la consulta devuelve resultados
            Object^ sumaPuntuaciones = reader["sumaPuntuaciones"];
            Object^ numeroValoraciones = reader["numeroValoraciones"];
            if (sumaPuntuaciones != DBNull::Value && numeroValoraciones != DBNull::Value)
            {
                int suma = Convert::ToInt32(sumaPuntuaciones);
                int numValoraciones = Convert::ToInt32(numeroValoraciones);
                result = float(suma) / float(numValoraciones);
                //MessageBox::Show("La suma de las puntuaciones del grupo " + grup + " es: " + sumaPuntuaciones->ToString());
                //MessageBox::Show("El número de valoraciones del grupo " + grup + " es: " + numeroValoraciones->ToString());
            }
            else
            {
                //MessageBox::Show("No se encontraron valoraciones para el grupo " +  grup);
            }
        }

        // Cierra el SqlDataReader
        reader->Close();
    }
    catch (Exception^ ex)
    {
        // Maneja cualquier error
        Console::WriteLine("Ocurrió un error: {0}", ex->Message);
    }
    finally
    {
        // Asegúrate de cerrar la conexión
        connection->Close();
    }
    return result;
}