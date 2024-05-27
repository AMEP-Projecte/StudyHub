#pragma once

using namespace System;

ref class TxValoracioMitjana {
private:
	String^ _grup;

public:
	TxValoracioMitjana(String^ grup); // constructora

	float executar();
};
