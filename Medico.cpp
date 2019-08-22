#include "Medico.h"
#include <string>

using namespace std;

Medico::Medico()
{

}

string Medico::getNome()
{
    return nome;
}

double Medico::getAltura()
{
    return altura;
}

double Medico::getPeso()
{
    return peso;
}

void Medico::setNome(string nome)
{
    this->nome = nome;
}

void Medico::setAltura(double altura)
{
    this->altura = altura;
}

void Medico::setPeso(double peso)
{
    this->peso = peso;
}

