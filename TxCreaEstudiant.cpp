#include "pch.h"
#include "TxCreaEstudiant.h"
#include "PassarellaEstudiant.h"

TxCreaEstudiant::TxCreaEstudiant(String^ username, String^ contrasenya,  String^ correuElectronic, String^ nom, String^ cognoms, String^ idioma, String^ localitat, int numValoracions)
{
    _username = username;
    _contrasenya = contrasenya;
    _correuElectronic = correuElectronic;
    _nom = nom;
    _cognoms = cognoms;
    _idioma = idioma;
    _localitat = localitat;
    _numValoracions = numValoracions;
}

void TxCreaEstudiant::executa()
{
    try {
        PassarellaEstudiant pe(_username, _contrasenya, _correuElectronic, _nom,
            _cognoms, _idioma, _localitat, _numValoracions);
        pe.insereix();
    }
    catch (Exception^ ex) {
        // Manejar la excepción aquí
        // Por ejemplo, mostrar un mensaje de error o realizar algún registro de errores
        Console::WriteLine("Error al ejecutar TxCreaEstudiant: " + ex->Message);
    }
}