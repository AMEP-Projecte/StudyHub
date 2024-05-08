#pragma once
#include "PassarellaUsuari.h"

ref class PassarellaProveidor : PassarellaUsuari
{
    private:


    public:
    // Constructor
    PassarellaProveidor(String^ username);

    // Getters y setters
    //void posaUsername(String^ username);
    String^ obteUsername();
};

