#include "TesteValidaNumero.h"
#include <iostream>

using namespace std;

int main()
{
    TesteValidaNumero *n;
    try
    {
        n->validaNumero(-5);
    }
    catch(ValorAbaixoException vae)
    {
        cout << vae.what() << endl;
    }

    try
    {
        n->validaNumero(150);
    }
    catch(ValorAcimaException vac)
    {
        cout << vac.what() << endl;
    }

    try
    {
        n->validaNumero(1000);
    }
    catch(ValorMuitoAcimaException vmae)
    {
        cout << vmae.what() << endl;
    }
    
    delete n;

}