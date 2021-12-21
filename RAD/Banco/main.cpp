#include <iostream>
#include <string>

using namespace std;

struct Conta{
	string numero;
	string cpfTitular;
	string nomeTitular;
	float saldo;
};

void sacar(Conta& conta, float valorASacar){
	if(valorASacar < 15){
		cout << "Ops! N�o � poss�vel sacar valores abaixo de R$15,00" << endl;
	}else if(valorASacar > conta.saldo){
        cout << "Ops! Voc� n�o possui saldo suficiente." << endl;
	}else{
        conta.saldo -= valorASacar;
	}

}

void depositar(Conta& conta, float valorADepositar){
	if(valorADepositar < 10){
		cout << "Ops! N�o � poss�vel depositar valores abaixo de R$10,00" << endl;
	}else{
		conta.saldo += valorADepositar;
	}
}

int main(){
	Conta umaConta;
	Conta outraConta;

	umaConta.numero = "123456";
	umaConta.cpfTitular = "123.456.789-19";
	umaConta.nomeTitular = "Eduardo";
	umaConta.saldo = 100;

	outraConta.saldo = 200;

	depositar(outraConta, 500);

	cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << outraConta.saldo<< endl;

	system("PAUSE");
}
