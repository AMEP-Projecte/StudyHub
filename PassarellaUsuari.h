#pragma once
#include <string>


using namespace System;
using namespace MySql::Data::MySqlClient;

ref class PassarellaUsuari 
{
protected:
    String^ _username;
    String^ _contrasenya;
    String^ _tipus;
   

    


public:   
    PassarellaUsuari();
    PassarellaUsuari(String^ username, String^ contrasenya, String^ tipus); // Constructor
    void posaNomUsuari(String^ username);
    String^ obteNomUsuari();

    void posaContrasenya(String^ contrasenya);
    String^ obteContrasenya();

    void posaTipus(String^ tipus);
    String^ obteTipus();
    virtual void insereix();
    virtual void modifica();
    virtual void esborra();
};