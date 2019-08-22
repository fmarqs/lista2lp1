#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>

class Medico
{
    protected:
    std::string nome;
    double altura, peso;

    public:
    Medico();

    std::string getNome();
    double getAltura();
    double getPeso();

    void setNome(std::string nome);
    void setAltura(double altura);
    void setPeso(double peso);
    
};

#endif