#include "pch.h"
#include "PassarellaEspai.h"
PassarellaEspai::PassarellaEspai(){}
PassarellaEspai::PassarellaEspai(String^ adreca, String^ nom, int capacitat, String^ proveidor) {
	_adreca = adreca;
	_nom = nom;
	_capacitat = capacitat;
	_userProveidor = proveidor;
}

void PassarellaEspai::posarAdreca(String^ adreca) {
	_adreca = adreca;
}
void PassarellaEspai::posarNom(String^ nom) {
	_nom = nom;
}
void PassarellaEspai::posarCapacitat(int capacitat) {
	_capacitat = capacitat;
}
void PassarellaEspai::posarProveidor(String^ proveidor) {
	_userProveidor = proveidor;
}

String^ PassarellaEspai::obteAdreca() {
	return _adreca;
}
String^ PassarellaEspai::obteNom() {
	return _nom;
}
int PassarellaEspai::obteCapacitat() {
	return _capacitat;
}
String^ PassarellaEspai::obteProveidor() {
	return _userProveidor;
}