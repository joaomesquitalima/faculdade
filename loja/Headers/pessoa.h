#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa {
protected:
    int id;
    string nome;

public:
    Pessoa(int id,string& nome);
    virtual ~Pessoa();

    virtual int getId();
    virtual string getNome();

    
};

#endif 
