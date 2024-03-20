#pragma once
using namespace System;
ref class TxCreaEstudiant
{
	private:
        String^ _username;
        String^ _contrasenya;
        String^ _correuElectronic;
        String^ _nom;
        String^ _cognoms;
        String^ _idioma;
        String^ _localitat;
        int _numValoracions;

    public:
        TxCreaEstudiant(String^ username, String^ contrasenya, String^ correuElectronic,
            String^ nom, String^ cognoms, String^ idioma, String^ localitat, int numValoracions);
        void executa();
};

