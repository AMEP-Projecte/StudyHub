#include "pch.h"
#include "TxGrupsEstudiant.h"

TxGrupsEstudiant::TxGrupsEstudiant(String^ e) {
	estudiant = e;
}

void TxGrupsEstudiant::executar() {
	resultat = gcnew ConsultaGrupEstudiant();
	resultat->grup = gcnew List<String^>();
	resultat->tematica = gcnew List<String^>();

	List<PassarellaGrup^>^ grups = CercadoraGrup::cercaGrupsPerEstudiant(estudiant);
	int numGrups = grups->Count;

	for (int i = 0; i < numGrups; ++i) {
		resultat->grup->Add(grups[i]->obteNom());
		resultat->tematica->Add(grups[i]->obteTematica());
	}
}

ConsultaGrupEstudiant^ TxGrupsEstudiant::obteResultat() {
	return resultat;
}