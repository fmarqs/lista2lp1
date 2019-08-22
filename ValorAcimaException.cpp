#include "ValorAcimaException.h"

using namespace std;

const char* ValorAcimaException::what()
{
    return "Valor maior que 100 e menor que 1000";
}