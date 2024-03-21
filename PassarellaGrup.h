#pragma once

using namespace System;

ref class PassarellaGrup {
	private:
		String^ _nomGrup;
		String^ _tematica;
		String^ _creador;
	public:
		PassarellaGrup();
		PassarellaGrup(String^ NomGrup, String^ Temàtica, String^ Creador);
		//PassarellaGrup(const PassarellaGrup% P);

		//Getters:
		String^ obteNom();
		String^ obteTematica();
		String^ obtecreador();
		
		//Setters:
		void posaNom();
		void posaTematica();
		void posaCreador();

		void insereix();
		void modifica();
		void esborra();
};

