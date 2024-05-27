#ifndef PESSOA_HPP
#define PESSOA_HPP


#include <iostream>
using namespace std;

class Pessoa {
protected:
    int id;
    string nome;

public:
    Pessoa(int id,const string& nome);
    virtual ~Pessoa();

    virtual int getId();
    virtual string getNome();

    
};

#endif 
