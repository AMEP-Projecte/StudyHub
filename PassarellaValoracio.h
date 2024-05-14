#pragma once
using namespace System;
ref class PassarellaValoracio
{
protected:
    String^ _estudiant;
    String^ _grup;
    int _puntuacio;
    String^ _comentari;

public:
    PassarellaValoracio();
    PassarellaValoracio(String^ estudiant, String^ grup, int puntuacio, String^ comentari); // Constructor
    void posaValoracio(int valoracio);
    int obteValoracio();


    void posaComentari(String^ comentari);
    String^ obteComentari();

    virtual void insereix();
    virtual void modifica();
    virtual void esborra();
};

