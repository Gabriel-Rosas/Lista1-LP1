#ifndef DATA_H
#define DATA_H

#include <string>

class Data{
    public:
        Data();
        Data(int dia, int mes, int ano);
        virtual ~Data();

        int getDia();
        int getMes();
        int getAno();
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);

        std::string mesExtenso(int mes);
        int compara(Data obj);
        bool isBissexto(int ano);

    private:
        int dia, mes, ano;
};

#endif // DATA_H
