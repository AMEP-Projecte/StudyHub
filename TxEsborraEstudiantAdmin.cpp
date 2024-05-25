#include "pch.h"
#include "TxEsborraEstudiantAdmin.h"

using namespace System::Windows::Forms;

TxEsborraEstudiantAdmin::TxEsborraEstudiantAdmin(String^ n) { // Constructora
	_userestudiant = n;
}

void TxEsborraEstudiantAdmin::executa() {
	PassarellaUsuari^ est = gcnew PassarellaUsuari(_userestudiant,"","");
	est->esborra();
}
