#include "Medico.h"
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

#include <string>

using namespace std;

int main()
{
    Cirurgiao *c = new Cirurgiao();
    c->setNome("Roberto");
    c->setAltura(1.90);
    c->setPeso(80);
    c->setEspecializacao("Cirurgiao geral");

    cout << "\nMedico #1: " << c->getNome() << "\nAltura: " << c->getAltura() << "\nPeso: " << c->getPeso() << 
    "\nEspecializacao: " << c->getEspecializacao() << endl;
    c->cirurgia("apendice");

    Oftalmologista *o = new Oftalmologista();
    o->setNome("Gabriela");
    o->setAltura(1.70);
    o->setPeso(60);
    o->setEspecializacao("Oftalmologista");

    cout << "\nMedico #2: " << o->getNome() << "\nAltura: " << o->getAltura() << "\nPeso: " << o->getPeso() << 
    "\nEspecializacao: " << o->getEspecializacao() << endl;
    o->consulta("teste de visao");

    Otorrino *ot = new Otorrino();
    ot->setNome("Bruno");
    ot->setAltura(1.75);
    ot->setPeso(90);
    ot->setEspecializacao("Otorrino");
    
    cout << "\nMedico #3: " << ot->getNome() << "\nAltura: " << ot->getAltura() << "\nPeso: " << ot->getPeso() << 
    "\nEspecializacao: " << ot->getEspecializacao() << endl;
    ot->consulta("teste de audicao");

    Ginecologista *gi = new Ginecologista();
    gi->setNome("Izis");
    gi->setAltura(1.60);
    gi->setPeso(60);
    gi->setEspecializacao("Ginecologista");

    cout << "\nMedico #4: " << gi->getNome() << "\nAltura: " << gi->getAltura() << "\nPeso: " << gi->getPeso() << 
    "\nEspecializacao: " << gi->getEspecializacao() << endl;
    gi->consulta("rotina");


    delete c;
    delete o;
    delete ot;
    delete gi;

}