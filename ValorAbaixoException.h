#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <iostream>
#include <exception>

class ValorAbaixoException: public std::exception
{
    public:
    const char* what();
};

#endif