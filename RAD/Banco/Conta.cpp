﻿#include "Conta.h"
#include <iostream>

 void Conta::sacar(float valorASacar){
    if(valorASacar < 15){
		std::cout << "Ops! Não é possível sacar valores abaixo de R$15,00" << std::endl;
		}else if(valorASacar > saldo){
			std::cout << "Ops! Você nãoo possui saldo suficiente." << std::endl;
		}else{
			saldo -= valorASacar;
		}
 }

 void Conta::depositar(float valorADepositar){
	if(valorADepositar < 10){
			std::cout << "Ops! Não é possível depositar valores abaixo de R$10,00" << std::endl;
		}else{
			saldo += valorADepositar;
		}
 }

 float Conta::getSaldo() const{
            return saldo;
		}

 void Conta::setNomeTitular(std::string nome){
    nomeTitular = nome;
}

 void Conta::setCpfTitular(std::string cpf){
    cpfTitular = cpf;
}
