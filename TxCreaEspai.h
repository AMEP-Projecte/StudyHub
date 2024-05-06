#pragma once
#include "PassarellaEspai.h"
#include "CercadoraEspai.h"

using namespace System;

ref class TxCreaEspai {

	private:
		String^ _adrecaEspai;
		String^ _nomEspai;
		int _capacitat;
		String^ _uproveidor;

	public:
		TxCreaEspai(String^ AdrecaEspai, String^ NomEspai, int Capacitat, String^ UProveidor);

		void executa();

};