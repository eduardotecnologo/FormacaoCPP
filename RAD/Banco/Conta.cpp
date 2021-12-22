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
			std::cout << "Ops! N�o � poss�vel depositar valores abaixo de R$10,00" << std::endl;
		}else{
			saldo += valorADepositar;
		}
 }
