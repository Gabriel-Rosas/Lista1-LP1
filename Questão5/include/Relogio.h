#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio{
    public:
        Relogio();
        Relogio(int hora, int minuto, int segundo);
        virtual ~Relogio();

        int getHora();
        int getMinuto();
        int getSegundo();
        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);

        void setHorario(int hora, int minuto, int segundo);
        void avancarHorario();

    private:
        int hora, minuto, segundo;

};

#endif // RELOGIO_H
