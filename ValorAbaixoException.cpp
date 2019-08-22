#include "ValorAbaixoException.h"

#include <string>

const char* ValorAbaixoException::what()
{
    return "Valor igual ou abaixo de zero";
}

