#include "TesteValidaNumero.h"


using namespace std;

void TesteValidaNumero::validaNumero(int num)
{
    if(num <= 0)
    {
        ValorAbaixoException vae;
        throw vae;
    }
    else if(num > 100 && num < 1000)
    {
        ValorAcimaException vac;
        throw vac;
    }
    else if(num >= 1000)
    {
        ValorMuitoAcimaException vmae;
        throw vmae;
    }
}