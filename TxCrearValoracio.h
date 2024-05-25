#pragma once

using namespace System;


ref class TxCrearValoracio
{
private:
	String^ _estudiant;
	String^ _grup;
	Int64^ _valoracio;
	String^ _comentari;
public:
	TxCrearValoracio(String^ estudiant, String^ grup, Int64^ valoracio, String^ comentari); // constructora

	void executar();
};

