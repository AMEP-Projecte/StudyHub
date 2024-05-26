#include "pch.h"
#include "TxValoracionsEstudiant.h"

TxValoracionsEstudiant::TxValoracionsEstudiant(String^ u) {
	username = u;
}

void TxValoracionsEstudiant::executar() {
	resultat = gcnew ConsultaValoracions();
	resultat->grup = gcnew List<String^>();
	resultat->valoracio = gcnew List<String^>();
	resultat->comentari = gcnew List<String^>();

	List<PassarellaValoracio^>^ valoracions = CercadoraValoracio::cercaValoracionsEstudiant(username);
	int numValoracions = valoracions->Count;

	for (int i = 0; i < numValoracions; ++i) {
		resultat->grup->Add(valoracions[i]->obteGrup());
		resultat->valoracio->Add((valoracions[i]->obteValoracio())->ToString());
		resultat->comentari->Add(valoracions[i]->obteComentari());
	}
}

ConsultaValoracions^ TxValoracionsEstudiant::obteResultat() {
	return resultat;
}
