#pragma once

using namespace System;

ref class PassarellaGrup {
	private:
		String^ _nomGrup;
		String^ _tematica;
		String^ _creador;
	public:
		PassarellaGrup();
		PassarellaGrup(String^ NomGrup, String^ Tematica, String^ Creador);
		PassarellaGrup(const PassarellaGrup% P);
		//PassarellaGrup(const PassarellaGrup% P);

		//Getters:
		String^ obteNom();
		String^ obteTematica();
		String^ obtecreador();

		void posaNom(String^ n);
		
	
		void posaTematica(String^ t);

		void posaCreador(String^ c);

		void insereix();
		void modifica();
		void esborra();
};

