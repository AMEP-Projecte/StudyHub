#include "pch.h"
#include "TxCreaEstudiant.h"
#include "PassarellaEstudiant.h"

TxCreaEstudiant::TxCreaEstudiant(String^ username, String^ contrasenya, String^ correuElectronic, String^ nom, String^ cognoms, String^ idioma, String^ localitat, int numValoracions)
{
    pe = gcnew PassarellaEstudiant(username, contrasenya, correuElectronic, nom, cognoms, idioma, localitat, numValoracions);
}

void TxCreaEstudiant::executa()
{
    try {
       
        pe->insereix();
    }
    catch (Exception^ ex) {
        // Manejar la excepción aquí
        // Por ejemplo, mostrar un mensaje de error o realizar algún registro de errores
        Console::WriteLine("Error al executar TxCreaEstudiant: " + ex->Message);
    }
}