#include "Invoice.h"

Invoice::Invoice(){

}

Invoice::~Invoice(){

}

Invoice::Invoice(int numero, std::string descricao, int quantidade, double preco){
    if(quantidade < 0){
        quantidade = 0;
        this->quantidade = quantidade;
    }//if quantidade
    if(preco < 0){
        preco = 0;
        this->preco = preco;
    }//if preco
    this->numero = numero;
    this->descricao = descricao;
}

int Invoice::getNumero(){
    return this->numero;
}

std::string Invoice::getDescricao(){
    return this->descricao;
}

int Invoice::getQuantidade(){
    return this->quantidade;
}

double Invoice::getPreco(){
    return this->preco;
}

void Invoice::setNumero(int numero){
    this->numero = numero;
}

void Invoice::setDescricao(std::string descricao){
    this->descricao = descricao;
}

void Invoice::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Invoice::setPreco(double preco){
    this->preco = preco;
}

double Invoice::getInvoiceAmount(int quantidade, double preco){
    return quantidade*preco;
}
