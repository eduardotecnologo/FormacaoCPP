#pragma once
#include "Conta.h"

class ContaPoupanca:public Conta{
	public:
		ContaPoupanca(std::string numero, Titular titular);
		void sacar(float valorAsacar)override;
};
