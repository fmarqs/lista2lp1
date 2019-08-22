#ifndef OTORRINO_H
#define OTORRINO_H

#include "Medico.h"

class Otorrino: public Medico
{
    private:
    std::string nomeDoCurso;

    public:
    Otorrino();
    void consulta(std::string tipo); //tipo da consulta

    std::string getEspecializacao();

    void setEspecializacao(std::string nomeDoCurso);

};


#endif