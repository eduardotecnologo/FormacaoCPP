﻿#include <iostream>
#include <string>
#include "Conta.h"

using namespace std;

int main(){
	Conta umaConta;
	Conta outraConta;

	umaConta.numero = "123456";
	umaConta.cpfTitular = "123.456.789-19";
	umaConta.nomeTitular = "Eduardo";
	umaConta.saldo = 100;

	outraConta.saldo = 200;

	outraConta.depositar(500);
	outraConta.sacar(200);

	cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << outraConta.saldo<< endl;

	system("PAUSE");
};
