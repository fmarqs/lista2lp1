#ifndef TESTEQ08_H
#define TESTEQ08_H

#include <iostream>

class testeQ08
{
    private:
    std::string conteudo;

    public:
    std::string getConteudo();
    void setConteudo(std::string conteudo);

    void copiaConteudo();
};

#endif