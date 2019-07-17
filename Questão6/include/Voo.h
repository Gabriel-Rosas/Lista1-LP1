#ifndef VOO_H
#define VOO_H

#include <string>

#include "Data.h"
#include "Horario.h"

class Voo{
    public:
        Voo();
        Voo(Data data, Horario horario, int numVoo);
        virtual ~Voo();

        int getNumVoo();
        Data getData();
        Horario getHorario();
        void setNumVoo(int numVoo);
        void setData(Data data);
        void setHorario(Horario horario);

        int proximoLivre();
        std::string verifica(int numAss);
        bool oculpa(int numAss);
        int vagas();

    private:
        Data data;
        Horario horario;
        int numVoo;
        bool assento[100];
};

#endif // VOO_H
