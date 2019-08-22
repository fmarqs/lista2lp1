#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <iostream>
#include <exception>

class ValorAcimaException: public std::exception
{
    public:
    const char* what();

};

#endif