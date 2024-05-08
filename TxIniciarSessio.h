/* VERSION ANTIGUA
#pragma once
using namespace System;

ref class TxIniciarSessio
{
private:
	String^ _username;
	String^ _contrasenya;
public:
	TxIniciarSessio(String^ username, String^ contrasenya);


	bool executar(/*string amb si te error??);
}; 


#pragma once
using namespace System;

ref class TxIniciarSessio
{
private:
	String^ _username;
	String^ _contrasenya;
public:
	TxIniciarSessio(String^ username, String^ contrasenya);


	bool executar();
};
*/
#pragma once
using namespace System;

ref class TxIniciarSessio
{
private:
	String^ _username;
	String^ _contrasenya;
public:
	TxIniciarSessio(String^ username, String^ contrasenya);

	bool executar();
};