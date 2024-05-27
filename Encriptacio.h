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
    // Método para generar una sal aleatoria
   // Función para encriptar la contraseña
    String^ EncriptarContrasenya(String^ contraseña);
    String^ GenerarSalt(int size);
    String^ ComputarHash(String^ password, String^ salt);
    bool VerificarContrasenya(String^ username, String^ password);

};
