#include "pch.h"
#include "PassarellaProveidor.h"


PassarellaProveidor::PassarellaProveidor(String^ username)
{
    _username = username;
}


String^ PassarellaProveidor::obteUsername()
{
    return _username;
}

