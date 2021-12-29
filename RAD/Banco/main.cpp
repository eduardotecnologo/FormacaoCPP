﻿#include <iostream>
#include <string>
#include "Conta.h"

using namespace std;

void exibeSaldo(const Conta& conta){
    cout << "O saldo da conta é: " << conta.getSaldo();
}

int main(){
	Conta umaConta("123456", "Eduardo", "123.456.789-10");
	umaConta.depositar(500);
	umaConta.sacar(200);

	cout << "Uma conta: " << umaConta.getSaldo()<< endl;

	Conta outraConta("654321", "Alexandre", "987.654.321-10");
	outraConta.depositar(300);
	outraConta.sacar(50);

	cout << "Uma outra conta: " << outraConta.getSaldo()<< endl;

    cout << "Número de contas: " << Conta::getNumeroDeConta() << endl;

	system("PAUSE");
}
