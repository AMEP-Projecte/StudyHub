#include"pch.h"
#include "PassarellaEstudiant.h"

using namespace MySql::Data::MySqlClient;
PassarellaEstudiant::PassarellaEstudiant(String^ username,String^ contrasenya, String^ correuElectronic, String^ nom, String^ cognoms, String^ idioma, String^ localitat, int numValoracions)
{
    _username = username;
    GenerarContrasenya(contrasenya);
    _tipus = "estudiant";
    _correuElectronic = correuElectronic;
    _nom = nom;
    _cognoms = cognoms;
    _idioma = idioma;
    _localitat = localitat;
    _numValoracions = numValoracions;
}

PassarellaEstudiant::PassarellaEstudiant(String^ username, String^ contrasenya, String^ salt, String^ correuElectronic, String^ nom, String^ cognoms, String^ idioma, String^ localitat, int numValoracions)
{
    _username = username;
    _contrasenya = contrasenya;
    _salt = salt;
    _tipus = "estudiant";
    _correuElectronic = correuElectronic;
    _nom = nom;
    _cognoms = cognoms;
    _idioma = idioma;
    _localitat = localitat;
    _numValoracions = numValoracions;
}

void PassarellaEstudiant::posaUsername(String^ username)
{
    _username = username;
}

String^ PassarellaEstudiant::obteUsername()
{
    return _username;
}

void PassarellaEstudiant::posaCorreuElectronic(String^ correuElectronic)
{
    _correuElectronic = correuElectronic;
}

String^ PassarellaEstudiant::obteCorreuElectronic()
{
    return _correuElectronic;
}

void PassarellaEstudiant::posaNom(String^ nom)
{
    _nom = nom;
}

String^ PassarellaEstudiant::obteNom()
{
    return _nom;
}

void PassarellaEstudiant::posaCognoms(String^ cognoms)
{
    _cognoms = cognoms;
}

String^ PassarellaEstudiant::obteCognoms()
{
    return _cognoms;
}

void PassarellaEstudiant::posaIdioma(String^ idioma)
{
    _idioma = idioma;
}

String^ PassarellaEstudiant::obteIdioma()
{
    return _idioma;
}

void PassarellaEstudiant::posaLocalitat(String^ localitat)
{
    _localitat = localitat;
}

String^ PassarellaEstudiant::obteLocalitat()
{
    return _localitat;
}

void PassarellaEstudiant::posaNumValoracions(int numValoracions)
{
    _numValoracions = numValoracions;
}

int PassarellaEstudiant::obteNumValoracions()
{
    return _numValoracions;
}


void PassarellaEstudiant::insereix()
{
    
    PassarellaUsuari::insereix();
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "INSERT INTO estudiant(username, correu_electronic, nom, cognoms, idioma, localitat, numValoracions) VALUES('"
        + _username + "', '" + _correuElectronic + "', ' " + _nom + "', ' " + _cognoms + "', '" + _idioma + "', '" + _localitat + "', " + 0+")";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    try {
        // Obrim connexio
        conn->Open();

        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        //Errors


    }
    finally {
        //Tanquem conexio
        conn->Close();
    }
}


void PassarellaEstudiant::modifica()
{
    PassarellaUsuari::modifica();
    String^ connectionString = "Server=ubiwan.epsevg.upc.edu; Port=3306; Database=amep04; Uid=amep04; Pwd=aefohC3Johch-;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "UPDATE estudiant SET correu_electronic = @correuElectronic, nom = @nom, cognoms = @cognoms, idioma = @idioma, localitat = @localitat, numValoracions = @numValoracions WHERE username = @username";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    cmd->Parameters->AddWithValue("@correuElectronic", _correuElectronic);
    cmd->Parameters->AddWithValue("@nom", _nom);
    cmd->Parameters->AddWithValue("@cognoms", _cognoms);
    cmd->Parameters->AddWithValue("@idioma", _idioma);
    cmd->Parameters->AddWithValue("@localitat", _localitat);
    cmd->Parameters->AddWithValue("@numValoracions", _numValoracions);
    cmd->Parameters->AddWithValue("@username", _username);

    try {
        conn->Open();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        // Errors
    }
    finally {
        conn->Close();
    }
}

