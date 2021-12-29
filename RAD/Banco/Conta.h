#pragma once
#include <string>

class Conta{
private:
	static int numeroDeContas;

public:
	static int getNumeroDeConta();

private:
	std::string numero;
	std::string nomeTitular;
	std::string cpfTitular;

	float saldo;

public:
	Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);

	void sacar(float valorSacar);
	void depositar(float valorADepositar);
	float getSaldo() const;
    void setNomeTitular(std::string nome);

	/*void setNumeroConta(std::string numeroConta);
	void getNomeTitular();
	void setNomeTitular(std::string nomeTitular);
	void setCpfTitular(std::string cpfTitular); */
};
