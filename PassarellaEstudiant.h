#pragma once
#include <string>
#include "PassarellaUsuari.h"
using namespace System;

ref class PassarellaEstudiant : PassarellaUsuari
{
private:
 
    String^ _correuElectronic;
    String^ _nom;
    String^ _cognoms;
    String^ _idioma;
    String^ _localitat;
    int _numValoracions;

public:
    // Constructor
    PassarellaEstudiant(String^ username, String^ contrasenya,  String^ correuElectronic, String^ nom, String^ cognoms, String^ idioma, String^ localitat, int numValoracions);

    // Getters y setters
    void posaUsername(String^ username);
    String^ obteUsername();

    void posaCorreuElectronic(String^ correuElectronic);
    String^ obteCorreuElectronic();

    void posaNom(String^ nom);
    String^ obteNom();

    void posaCognoms(String^ cognoms);
    String^ obteCognoms();

    void posaIdioma(String^ idioma);
    String^ obteIdioma();

    void posaLocalitat(String^ localitat);
    String^ obteLocalitat();

    void posaNumValoracions(int numValoracions);
    int obteNumValoracions();

    void insereix() override;
    void modifica() override;
};
