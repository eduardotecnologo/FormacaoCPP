#include <iostream>
#include <string>

using namespace std;

struct Conta{
	string numero;
	string cpfTitular;
	string nomeTitular;
	float saldo;
};

int main(){
	Conta umaConta;
    Conta outraConta;

	umaConta.numero = "123456";
	umaConta.cpfTitular = "123.456.789-19";
	umaConta.nomeTitular = "Eduardo";
	umaConta.saldo = 100;

	outraConta.saldo = 200;

	cout << "Uma conta: " << umaConta.saldo << "Outra conta: " << outraConta.saldo<< endl;

    system("PAUSE");
}