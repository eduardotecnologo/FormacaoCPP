﻿#include <iostream>
#include <string>
#include "Conta.h"

using namespace std;

int main(){
	Conta umaConta;
	umaConta.setNomeTitular("Eduardo");
    umaConta.setCpfTitular("123.456.789-19");
	Conta outraConta;


	outraConta.depositar(500);
	outraConta.sacar(200);

	cout << "Uma conta: " << umaConta.getSaldo() << " Outra conta: " << outraConta.getSaldo() << endl;

	system("PAUSE");
}
