#include <iostream>
#include <string>
#include "DiaDaSemana.h"
#include "Gerente.h"
#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrente.h"
#include "Titular.h"
#include "Cpf.h"
#include "Funcionario.h"

using namespace std;

void ExibeSaldo(const Conta& conta){
    std::cout << "O saldo da conta é: " << conta.recuperaSaldo() << std::endl;
}

void RealizaSaque(Conta& conta){
    conta.sacar(200);
}

void FazLogin(Autenticavel& alguem, string senha){
    if(alguem.autentica(senha)){
        std::cout << "Login realizado com sucesso!" << std::endl;
    }else{
        std::cout << "Ops! Senha inválida!" << std::endl;
    }
}

int main(){
    Titular titular(Cpf("123.456.789-10"),"Eduardo", "umasenha");

    ContaPoupanca umaConta("123456", titular);
    umaConta.depositar(500);
    RealizaSaque(umaConta);

    ExibeSaldo(umaConta);

    Titular outro(Cpf("987.654,321-10"),"Alexandre", "outrasenha");
    ContaCorrente umaOutraConta("654321", titular);
    umaOutraConta.depositar(300);

    ContaCorrente outraContaCorrente("546312", titular);

    umaOutraConta.transferePara(umaConta, 250);

    ExibeSaldo(umaOutraConta);
    ExibeSaldo(outraContaCorrente);

    std::cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << std::endl;

    Gerente umGerente(
            Cpf("000.000.000-00"),
            "Nome do Gerente",
            1500,
            DiaDaSemana::Terca,
            "123456"
            );

    system("PAUSE");
}