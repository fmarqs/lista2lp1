#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <iostream>
#include <exception>

class ValorMuitoAcimaException: public std::exception
{
    public: 
    const char* what();

};


#endif