#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include "Medico.h"

class Ginecologista: public Medico
{
    private:
    std::string nomeDoCurso;

    public:
    Ginecologista();
    void consulta(std::string tipo); //tipo da consulta

    std::string getEspecializacao();

    void setEspecializacao(std::string nomeDoCurso);

};


#endif