#ifndef TESTEVALIDANUMERO_H
#define TESTEVALIDANUMERO_H

#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

#include <iostream>

class TesteValidaNumero
{
    private:
    int num;

    public:
    void validaNumero(int num);

    int getNumero();

    void setNumero(int num);
};

#endif