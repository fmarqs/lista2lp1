#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include <iostream>
#include "Medico.h"

class Cirurgiao: public Medico
{
    private:
    std::string nomeDoCurso;

    public:
    Cirurgiao();
    void cirurgia(std::string tipo); //tipo sera o nome da cirurgia (apendice, hernia, etc)

    std::string getEspecializacao();

    void setEspecializacao(std::string nomeDoCurso);

};


#endif