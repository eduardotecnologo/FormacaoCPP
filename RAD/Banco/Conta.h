#pragma once
#include <string>
#include "Titular.h"

class Conta{
private:
	static int numeroDeContas;

public:
	static int getNumeroDeConta();

private:
	std::string numero;
    Titular titular;
	//std::string nomeTitular;
	//std::string cpfTitular;

	float saldo;

public:
	//Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
	Conta(std::string numero,Titular titular);
	void sacar(float valorSacar);
	void depositar(float valorADepositar);
	float getSaldo() const;
};
