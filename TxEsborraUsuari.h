#pragma once
#include "Sistema.h"
#include "PassarellaUsuari.h"

using namespace System;

ref class TxEsborraUsuari
{

	private:
		String^ _contraU;

	public:
		TxEsborraUsuari(String^ contraU); //creadora
		void executar();

};

