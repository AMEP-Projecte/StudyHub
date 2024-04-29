#include "pch.h"
#include "CercadoraAdmin.h"
PassarellaAdmin^ CercadoraAdmin::cercaAdmin(String^ username){
	PassarellaAdmin^ pa = gcnew PassarellaAdmin();
	pa->posaNomUsuari(username);
	return pa;
}