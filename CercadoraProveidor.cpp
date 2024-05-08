#include "pch.h"
#include "CercadoraProveidor.h"

PassarellaProveidor^ CercadoraProveidor::cercaProveidor(String^ username) {
	PassarellaProveidor^ pp = gcnew PassarellaProveidor();
	pp->posaNomUsuari(username);
	return pp;
}
