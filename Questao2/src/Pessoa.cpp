#include "Pessoa.h"

Pessoa::Pessoa(std::string nome){
    this->nome = "";
}

Pessoa::Pessoa(std::string nome, std::string telefone, int idade){
    this->nome = "";
    this->telefone = "";
    this->idade = 0;
}

Pessoa::~Pessoa(){

}

std::string Pessoa::getNome(){
    return this->nome;
}

std::string Pessoa::getTelefone(){
    return this->telefone;
}

int Pessoa::getIdade(){
    return this->idade;
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}
