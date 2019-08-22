#include "Oftalmologista.h"
#include <string>


using namespace std;

Oftalmologista::Oftalmologista()
{

}

string Oftalmologista::getEspecializacao()
{
    return nomeDoCurso;
}

void Oftalmologista::setEspecializacao(string nomeDoCurso)
{
    this->nomeDoCurso = nomeDoCurso;
}

void Oftalmologista::consulta(string tipo)
{
    cout << "Oftalmologista esta fazendo consulta de " << tipo << endl;
}