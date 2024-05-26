#include "pch.h"
#include "TxObteEstudiantsGrupsEspais.h"

TxObteEstudiantsGrupsEspais::TxObteEstudiantsGrupsEspais(String^ tr) {
	tipusResultat = tr;
}

void TxObteEstudiantsGrupsEspais::executar() {
	resultat = gcnew ConsultaEstudiantsGrupsEspais();

	if (tipusResultat == "") {
		resultat->estudiants = gcnew List<PassarellaEstudiant^>();
		resultat->estudiants = CercadoraEstudiant::totsEstudiants();

		resultat->grups = gcnew List<PassarellaGrup^>();
		resultat->grups = CercadoraGrup::totsGrups();

		resultat->espais = gcnew List<PassarellaEspai^>();
		resultat->espais = CercadoraEspai::totsEspai();
	}
	else if (tipusResultat == "estudiants") {
		resultat->estudiants = gcnew List<PassarellaEstudiant^>();
		resultat->estudiants = CercadoraEstudiant::totsEstudiants();
	}
}

ConsultaEstudiantsGrupsEspais^ TxObteEstudiantsGrupsEspais::obteResultat() {
	return resultat;
}