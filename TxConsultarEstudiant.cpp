#include "pch.h"
#include "TxConsultarEstudiant.h"
#include "Sistema.h"
#include "Alert.h"

TxConsultarEstudiant::TxConsultarEstudiant(String^ nomE)
{
    nomEstudiant = nomE;

}

TxConsultarEstudiant::TxConsultarEstudiant() {

}

void TxConsultarEstudiant::executar()
{
    Sistema^ sist = Sistema::getInstance();
    PassarellaEstudiant^ e = sist->obteEstudiant();
    _resultat._nom = e->obteNom();
    _resultat._cognom = e->obteCognoms();
    _resultat._nomUsuari = e->obteNomUsuari();
    _resultat._correu = e->obteCorreuElectronic();
    _resultat._idioma = e->obteIdioma();
    _resultat._localitat = e->obteLocalitat();
    _resultat._numValoracions = e->obteNumValoracions();
}

ConsultarEstudiant TxConsultarEstudiant::obteResultat() {  //admin
    return _resultat;
}


