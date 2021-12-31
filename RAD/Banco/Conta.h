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
	float saldo;
	short int tipoConta;

public:
	Conta(std::string numero,Titular titular);
	void sacar(float valorSacar);
	void depositar(float valorADepositar);
	float getSaldo() const;
};
