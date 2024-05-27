#pragma once


#include <iostream>
#include <string>
#include <vcclr.h>


using namespace System;
using namespace System::Security::Cryptography;
using namespace System::Text;
using namespace System::Windows::Forms;




using namespace System;

ref class Encriptacio
{
public:
    // M�todo para generar una sal aleatoria
   // Funci�n para encriptar la contrase�a
    String^ EncriptarContrasenya(String^ contrase�a);
    String^ GenerarSalt(int size);
    String^ ComputarHash(String^ password, String^ salt);
    bool VerificarContrasenya(String^ username, String^ password);

};
