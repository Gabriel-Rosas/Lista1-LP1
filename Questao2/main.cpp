#include <iostream>
#include "Pessoa.h"

#include <string>

int main(){
    std::string nome, telefone;
    int idade;

    std::cout << "Insira o nome da pessoa: " << std::endl;
    std::cin >> nome;
    std::cout << "Insira a idade da pessoa: " << std::endl;
    std::cin >> idade;
    std::cout  << "Insira o telefone da pessoa: " << std::endl;
    std::cin >> telefone;

    Pessoa *pes1 = new Pessoa(nome, telefone, idade);

    pes1->setNome(nome);
    pes1->setIdade(idade);
    pes1->setTelefone(telefone);

    std::cout << "\t--Dados da pessoa cadastrada--" << std::endl;
    std::cout << "Nome: " << pes1->getNome() << std::endl;
    std::cout << "Idade: " << pes1->getIdade() << std::endl;
    std::cout << "Telefone: " << pes1->getTelefone() << std::endl;

    return 0;
}
