#include "testeQ08.h"

#include <string>
#include <fstream>

using namespace std;

string testeQ08::getConteudo()
{
    return conteudo;
}

void testeQ08::setConteudo(string conteudo)
{
    this->conteudo = conteudo;
}

void testeQ08::copiaConteudo()
{
    string backup;
    ifstream file;
    file.open("teste.txt", ios::in);
    if(!file.is_open())
    {
        cout << "Nao foi possivel abrir arquivo. " << endl;
        file.close();
    }

    getline(file, backup);

    ofstream file2;
    file2.open("teste_bkp.txt", ios::out);
    if(!file.is_open())
    {
        cout << "Nao foi possivel abrir arquivo. " << endl;
        file2.close();
    }

   file2 << backup << endl;

    file.close();
    file2.close();

}
