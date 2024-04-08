#include "pch.h"
#include "TxConsultarEstudiant.h"
#include "Sistema.h"
#include "Alert.h"

TxConsultarEstudiant::TxConsultarEstudiant(String^ nomE)
{
    nomEstudiant = nomE;
 
}

void TxConsultarEstudiant::executar()
{
    try
    {
        Sistema^ sist = Sistema::getInstance();
        PassarellaEstudiant^ pe = sist->obteEstudiant();
        nom = pe->obteNom();
        cognom = pe->obteCognoms();
        nomUsuari = pe->obteNomUsuari();
        correu = pe->obteCorreuElectronic();
        idioma = pe->obteIdioma();
        localitat = pe->obteLocalitat();
        numValoracions = pe->obteNumValoracions();
        
    }
    catch (Exception^ e)
    {
        Alert::ShowException(e->Message);
    } 

}

