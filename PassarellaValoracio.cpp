#include "pch.h"
#include "PassarellaValoracio.h"

PassarellaValoracio::PassarellaValoracio() {
    _estudiant = "";
    _grup = "";
    _puntuacio = 0;
    _comentari = "";
}

PassarellaValoracio::PassarellaValoracio(String^ estudiant, String^ grup, int puntuacio, String^ comentari) {
    _estudiant = estudiant;
    _grup = grup;
    _puntuacio = puntuacio;
    _comentari = comentari;
}

void PassarellaValoracio::posaValoracio(int valoracio) {
    _puntuacio = valoracio;
}

int PassarellaValoracio::obteValoracio() {
    return _puntuacio;
}

void PassarellaValoracio::posaComentari(String^ comentari) {
    _comentari = comentari;
}

String^ PassarellaValoracio::obteComentari() {
    return _comentari;
}

void PassarellaValoracio::insereix() {

}
void PassarellaValoracio::modifica() {

}
void PassarellaValoracio::esborra() {

}