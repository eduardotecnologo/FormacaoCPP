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

	system("PAUSE");
}
