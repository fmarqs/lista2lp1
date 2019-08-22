#include "Ginecologista.h"

#include <string>

using namespace std;

Ginecologista::Ginecologista()
{
  
}

string Ginecologista::getEspecializacao()
{
    return nomeDoCurso;
}

void Ginecologista::setEspecializacao(string nomeDoCurso)
{
    this->nomeDoCurso = nomeDoCurso;
}

void Ginecologista::consulta(string tipo)
{
    cout << "Ginecologista esta fazendo consulta de " << tipo << endl;
}