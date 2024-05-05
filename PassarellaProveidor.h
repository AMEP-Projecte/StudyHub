#pragma once
#include "PassarellaUsuari.h"

ref class PassarellaProveidor : PassarellaUsuari
{
    private:


    public:
        PassarellaProveidor(String^ username);

    //void posaUsername(String^ username);
        String^ obteUsername();
};
