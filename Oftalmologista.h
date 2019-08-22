#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H

#include "Medico.h"

class Oftalmologista: public Medico
{
    private:
    std::string nomeDoCurso;

    public:
    Oftalmologista();
    void consulta(std::string tipo); //tipo sera o tipo da consulta
    
    std::string getEspecializacao();

    void setEspecializacao(std::string nomeDoCurso); 

}; 

#endif