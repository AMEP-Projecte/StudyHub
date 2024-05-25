#pragma once

using namespace System;

ref class TxEsborraValoracio
{
private:
	String^ _estudiant;
	String^ _grup;
	Int64^ _valoracio;
	String^ _comentari;
public:
	TxEsborraValoracio(String^ estudiant, String^ grup, Int64^ valoracio, String^ comentari); // constructora

	void executar();
};

