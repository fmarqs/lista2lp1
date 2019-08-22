#include "Cirurgiao.h"
#include <string>

using namespace std;

Cirurgiao::Cirurgiao()
{

}

string Cirurgiao::getEspecializacao()
{
    return nomeDoCurso;
}

void Cirurgiao::setEspecializacao(string nomeDoCurso)
{
    this->nomeDoCurso = nomeDoCurso;
}

void Cirurgiao::cirurgia(string tipo)
{
    cout << "Cirurgiao esta fazendo cirurgia de " << tipo << endl;

}