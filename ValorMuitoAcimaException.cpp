#include "ValorMuitoAcimaException.h"

using namespace std;

const char* ValorMuitoAcimaException::what()
{
    return "Valor maior ou igual a 1000";
}