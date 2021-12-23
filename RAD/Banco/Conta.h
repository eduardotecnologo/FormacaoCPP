#pragma once
#include <string>

class Conta{
private:
	std::string numero;
	std::string cpfTitular;
	std::string nomeTitular;

	float saldo = 0;

public:
	void sacar(float valorSacar);
	void depositar(float valorADepositar);

	float getSaldo() const;
	void setNomeTitular(std::string nome);
	void setCpfTitular(std::string cpfTitular);

};
