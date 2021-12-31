﻿#include <iostream>
#include <string>
#include "Conta.h"
#include "Titular.h"
#include "Cpf.h"
#include "Funcionario.h"

using namespace std;

void exibeSaldo(const Conta& conta){
    cout << "O saldo da conta é: " << conta.getSaldo();
}

int main(){
	Titular titular(Cpf("123.456.789-10"),"Eduardo");

	Conta umaConta("123456", titular);
	umaConta.depositar(500);
	umaConta.sacar(200);

	Titular outro(Cpf("987.654,321-10"),"Alexandre");
	Conta outraConta("654321", titular);
	outraConta.depositar(300);
	outraConta.sacar(50);

	cout << "Uma outra conta: " << outraConta.getSaldo()<< endl;

    cout << "Número de contas: " << Conta::getNumeroDeConta() << endl;

	Funcionario funcionario(Cpf("123.456.789-10"), "Aexandre Eduardo", 1000);

    cout << "Nome do Funcionário: " << funcionario.getNome() << endl;

	system("PAUSE");
}
