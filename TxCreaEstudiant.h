#pragma once
using namespace System;
#include "PassarellaEstudiant.h"
ref class TxCreaEstudiant
{
	private:
        PassarellaEstudiant^ pe;

    public:
        TxCreaEstudiant(String^ username, String^ contrasenya, String^ correuElectronic,
            String^ nom, String^ cognoms, String^ idioma, String^ localitat, int numValoracions);
        bool executa();
};

