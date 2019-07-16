#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice{
    public:
        Invoice();
        Invoice(int numero, std::string descricao, int quantidade, double preco);
        virtual ~Invoice();

        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        double getPreco();
        void setNumero(int numero);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        void setPreco(double preco);

        double getInvoiceAmount(int quantidade, double preco);

    private:
        int numero, quantidade;
        std::string descricao;
        double preco;

};

#endif // INVOICE_H
