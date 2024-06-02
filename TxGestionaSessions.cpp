#include "pch.h"
#include "TxGestionaSessions.h"

TxGestionaSessions::TxGestionaSessions(String^ e, String^ t) {
	estudiant = e;
	tipusSessions = t;
}

void TxGestionaSessions::executar() {
	resultat = gcnew ConsultaSessio();

	resultat->id = gcnew List<String^>();
	resultat->grup = gcnew List<String^>();
	resultat->data = gcnew List<String^>();
	resultat->adreca = gcnew List<String^>();
	resultat->horaInici = gcnew List<String^>();

	if (tipusSessions == "confirmades") {
		resultat->horaFi = gcnew List<String^>();
		resultat->llocsLliures = gcnew List<String^>();

		List<PassarellaSessio^>^ sessions = CercadoraSessio::cercaSessionsProximesConfirmadesDelEstudiant(estudiant);
		int numSessions = sessions->Count;

		for (int i = 0; i < numSessions; ++i) {
			resultat->id->Add(sessions[i]->obteId());
			resultat->grup->Add(sessions[i]->obteGrup());
			resultat->data->Add(sessions[i]->obteData());
			resultat->adreca->Add(sessions[i]->obteAdreca());
			resultat->horaInici->Add(sessions[i]->obteHoraInici());
			resultat->horaFi->Add(sessions[i]->obteHoraFi());
			resultat->llocsLliures->Add((sessions[i]->obteLlocsLliures()).ToString());
		}
	}
	else {
		List<PassarellaSessio^>^ sessions = CercadoraSessio::cercaSessionsProximesNoConfirmadesDelEstudiant(estudiant);
		int numSessions = sessions->Count;

		for (int i = 0; i < numSessions; ++i) {
			resultat->id->Add(sessions[i]->obteId());
			resultat->grup->Add(sessions[i]->obteGrup());
			resultat->data->Add(sessions[i]->obteData());
			resultat->adreca->Add(sessions[i]->obteAdreca());
			resultat->horaInici->Add(sessions[i]->obteHoraInici());
		}
	}
}

ConsultaSessio^ TxGestionaSessions::obteResultat() {
	return resultat;
}