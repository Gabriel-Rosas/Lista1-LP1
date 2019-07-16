#include <iostream>
#include "Invoice.h"

#include <string>

int main(){
    int qnt1, qnt2, num1, num2;
    double pre1, pre2;
    std::string desc1, desc2;
    Invoice *inv1 = new Invoice();
    Invoice *inv2 = new Invoice(num2, desc2, qnt2, pre2);

    std::cout << "Cadastre o produto 1" << std::endl;
    std::cout << "Numero: ";
    std::cin >> num1;
    std::cout << "Descricao: ";
    std::cin >> desc1;
    std::cout << "Preco unidade: R$";
    std::cin >> pre1;
    std::cout << "Quantidade a ser comprada: ";
    std::cin >> qnt1;

    inv1->setNumero(num1);
    inv1->setDescricao(desc1);
    inv1->setPreco(pre1);
    inv1->setQuantidade(qnt1);

    std::cout << "\nValor total Produto 1 = R$" << inv1->getInvoiceAmount(qnt1,pre1) << std::endl;

    std::cout << "\nCadastre o produto 2" << std::endl;
    std::cout << "Numero: ";
    std::cin >> num2;
    std::cout << "Descricao: ";
    std::cin >> desc2;
    std::cout << "Preco unidade: R$";
    std::cin >> pre2;
    std::cout << "Quantidade a ser comprada: ";
    std::cin >> qnt2;



    std::cout << "\nValor total Produto 2 = R$" << inv2->getInvoiceAmount(qnt2,pre2) << std::endl;

    return 0;
}
