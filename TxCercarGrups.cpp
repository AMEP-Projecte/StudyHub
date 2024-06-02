#include "pch.h"
#include "TxCercarGrups.h"
#include "CercadoraGrup.h"
#include "TxValoracioMitjana.h"
#include "CercadoraPertany.h"

TxCercarGrups::TxCercarGrups(){}

void TxCercarGrups::executar() {
	resultat = gcnew List <Grup>();
	CercadoraGrup cg;
	List<PassarellaGrup^>^ grups = cg.totsGrups();

	for (int i = 0; i < grups->Count; i++) {
		Grup g;
		g._grup = grups[i];
		CercadoraPertany aux;
		List<PassarellaPertany^>^ l = aux.cercaParticipants(grups[i]->obteNom());
		g._nombreParticipants = l->Count;
		TxValoracioMitjana^ valoracioMitja = gcnew TxValoracioMitjana(grups[i]->obteNom());
		g._valMitja = valoracioMitja->executar();
		resultat->Add(g);
	}
}

List<Grup>^ TxCercarGrups::obteResultat() {
	return resultat;
}