#include "pch.h"
#include "TxCreaEstudiant.h"
#include "PassarellaEstudiant.h"

TxCreaEstudiant::TxCreaEstudiant(String^ username, String^ contrasenya, String^ correuElectronic, String^ nom, String^ cognoms, String^ idioma, String^ localitat, int numValoracions)
{
    pe = gcnew PassarellaEstudiant(username, contrasenya, correuElectronic, nom, cognoms, idioma, localitat, numValoracions);
}

bool TxCreaEstudiant::executa()
{
    bool error = false;
    try {
       
        pe->insereix();
    }
    catch (Exception^ ex) {
        error = true;
        // Manejar la excepci�n aqu�
        // Por ejemplo, mostrar un mensaje de error o realizar alg�n registro de errores
        Console::WriteLine("Error al executar TxCreaEstudiant: " + ex->Message);
    }
    return error;
}