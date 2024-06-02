#include "pch.h"
#include "TxEliminarGrup.h"
#include "CercadoraGrup.h"
#include "TxValoracioMitjana.h"
#include "CercadoraPertany.h"

using namespace System::Windows::Forms;


TxEliminarGrup::TxEliminarGrup(String^ NomGrup, String^ Estudiant) {
	_nomGrup = NomGrup;
	_estudiant = Estudiant;
}

List<Grup>^ TxEliminarGrup::obteGrupsEstudiant(String^ est) {
	List<Grup>^ resultat = gcnew List <Grup>();
	CercadoraGrup cg;
	List<PassarellaGrup^>^ grups = cg.cercaGrupsPerEstudiant(est);

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

	return resultat;
}

void TxEliminarGrup::executar() {
	PassarellaGrup^ EliminarGrup = CercadoraGrup::cercaPerNomGrup(_nomGrup);
	if (EliminarGrup->obteNom() != "") {
		if (EliminarGrup->obtecreador()==_estudiant) {
			EliminarGrup->esborra();
		} else {
			throw gcnew Exception("El grup seleccionat no et pertany.");
		}
	}
	else {
		throw gcnew Exception("No existeix un grup amb aquest nom.");
		//MessageBox::Show("Ja existeix un grup amb aquest nom.");
	}
}