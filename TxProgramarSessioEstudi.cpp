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
#include "CercadoraParticipa.h"
using namespace System::Windows::Forms;
TxProgramarSessioEstudi::TxProgramarSessioEstudi() {
	Sistema^ sist = Sistema::getInstance();
	String^ username = sist->obteEstudiant()->obteNomUsuari();
	CercadoraGrup cercadoraGrups;
	_resultat.grups = cercadoraGrups.cercaPerCreador(username);
	CercadoraEspai cercadoraEspai;
	_resultat.espais = cercadoraEspai.totsEspai();
	

	
}
TxProgramarSessioEstudi::TxProgramarSessioEstudi(String^ grup, String^ data, String^ horaI, String^ horaF, String^ adreca)
{
	Sistema^ sist = Sistema::getInstance();
	String^ username = sist->obteEstudiant()->obteNomUsuari();
	CercadoraGrup cercadoraGrups;
	_resultat.grups = cercadoraGrups.cercaPerCreador(username);
	CercadoraEspai cercadoraEspai;
	_resultat.espais = cercadoraEspai.totsEspai();
	_grup = grup;
	_data = data;
	_horaI = horaI;
	_horaF = horaF;
	_adreca = adreca;
}
List<PassarellaSessio^>^ TxProgramarSessioEstudi::obteSessionsPerAdreca(String^ adreca)
{
	CercadoraSessio cercadoraSessio;
	return cercadoraSessio.cercaSessioAdreca(adreca);

}
void TxProgramarSessioEstudi::executar()
{
	int capacitat = 0;
	
	for each (PassarellaEspai ^ espai in _resultat.espais)
	{
		
		if (espai->obteAdreca() == _adreca) {
			capacitat = espai->obteCapacitat();
			
		}
	}
	PassarellaSessio p(_grup, _data, _horaI, _horaF, _adreca, capacitat-1);
	p.insereix();

	Sistema^ sist = Sistema::getInstance();
	String^ username = sist->obteEstudiant()->obteNomUsuari();
	PassarellaParticipa^ participa = gcnew PassarellaParticipa(username, _grup, _data, _horaI);
	participa->insereix();
	
	
		
	

	
	
}
Resultat TxProgramarSessioEstudi::obteResultat()
{
	return _resultat;
}
