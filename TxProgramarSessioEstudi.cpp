#include "pch.h"
#include "TxProgramarSessioEstudi.h"
#include "Sistema.h"
#include "CercadoraGrup.h"
#include "PassarellaGrup.h"
#include "PassarellaSessio.h"
#include "CercadoraSessio.h"
#include "PassarellaEspai.h"
#include "CercadoraEspai.h"
#include "PassarellaSessio.h"
#include "CercadoraSessio.h"
using namespace System::Windows::Forms;
TxProgramarSessioEstudi::TxProgramarSessioEstudi() {
	Sistema^ sist = Sistema::getInstance();
	String^ username = sist->obteEstudiant()->obteNomUsuari();
	CercadoraGrup cercadoraGrups;
	grups = cercadoraGrups.cercaPerCreador(username);
	CercadoraEspai cercadoraEspai;
	espais = cercadoraEspai.totsEspai();
	
	
}
List<PassarellaGrup^>^ TxProgramarSessioEstudi::obteGrups() {
	return grups;
}
List<PassarellaEspai^>^ TxProgramarSessioEstudi::obteEspais() {
	return espais;
}

List<PassarellaSessio^>^ TxProgramarSessioEstudi::obteSessionsPerAdreca(String^ adreca)
{
	CercadoraSessio cercadoraSessio;
	sessions = cercadoraSessio.cercaSessioAdreca(adreca);
	return sessions;
}



void  TxProgramarSessioEstudi::ProgramarSessio(String^ grup, String^ data, String^ horaI, String^ horaF, String^ adreca){
	
	int^ capacitat;
	for each  (PassarellaEspai^ espai in espais)
	{
		if (espai->obteAdreca() == adreca) {
			capacitat = espai->obteCapacitat();
		}
	}
	PassarellaSessio p(grup, data, horaI, horaF, adreca, (int)capacitat);
	p.insereix();
}