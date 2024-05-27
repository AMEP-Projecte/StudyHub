#include "pch.h"
#include "Encriptacio.h"
#include "CercadoraUsuari.h"
#include "PassarellaUsuari.h"
#include "Sistema.h"
String^ Encriptacio::EncriptarContrasenya(String^ contraseña) {
    array<Byte>^ data = Encoding::UTF8->GetBytes(contraseña);
    SHA256^ shaM = gcnew SHA256Managed();
    array<Byte>^ result = shaM->ComputeHash(data);
    return BitConverter::ToString(result)->Replace("-", "");
}


String^ Encriptacio::GenerarSalt(int size) {
    array<Byte>^ saltBytes = gcnew array<Byte>(size);
    RNGCryptoServiceProvider^ rng = gcnew RNGCryptoServiceProvider();
    rng->GetBytes(saltBytes);
    return Convert::ToBase64String(saltBytes);
}

String^ Encriptacio::ComputarHash(String^ password, String^ salt) {
    array<Byte>^ saltBytes = Convert::FromBase64String(salt);
    array<Byte>^ passwordBytes = Encoding::UTF8->GetBytes(password);
    array<Byte>^ passwordWithSaltBytes = gcnew array<Byte>(passwordBytes->Length + saltBytes->Length);

    Buffer::BlockCopy(passwordBytes, 0, passwordWithSaltBytes, 0, passwordBytes->Length);
    Buffer::BlockCopy(saltBytes, 0, passwordWithSaltBytes, passwordBytes->Length, saltBytes->Length);

    SHA256^ sha256 = SHA256::Create();
    array<Byte>^ hashBytes = sha256->ComputeHash(passwordWithSaltBytes);
    return Convert::ToBase64String(hashBytes);
}

bool Encriptacio::VerificarContrasenya(String^ username, String^ password) {
    bool verificada = false;
    CercadoraUsuari cu;
    PassarellaUsuari^ usuari = cu.cercaUsuari(username);
    if (usuari != nullptr) {
        String^ salt = usuari->obteSalt();
        verificada = (ComputarHash(EncriptarContrasenya(password), salt) == usuari->obteContrasenya());
    }




    return verificada;
}


