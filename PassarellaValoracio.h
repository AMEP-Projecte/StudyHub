#pragma once
using namespace System;
ref class PassarellaValoracio
{
protected:
    String^ _estudiant;
    String^ _grup;
    Int64^ _puntuacio;
    String^ _comentari;

public:
    PassarellaValoracio();
    PassarellaValoracio(String^ estudiant, String^ grup, Int64^ puntuacio, String^ comentari); // Constructor
    void posaValoracio(Int64^ valoracio);
    Int64^ obteValoracio();

    void posaComentari(String^ comentari);
    String^ obteComentari();

    String^ obteEstudiant();
    String^ obteGrup();

    virtual void insereix();
    virtual void modifica();
    virtual void esborra();
};

