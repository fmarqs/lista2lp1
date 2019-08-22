#include "Otorrino.h"

#include <string>

using namespace std;

Otorrino::Otorrino()
{
  
}

string Otorrino::getEspecializacao()
{
    return nomeDoCurso;
}

void Otorrino::setEspecializacao(string nomeDoCurso)
{
    this->nomeDoCurso = nomeDoCurso;
}

void Otorrino::consulta(string tipo)
{
    cout << "Otorrino esta fazendo consulta de " << tipo << endl;
}