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
    ~Pessoa();

    int getId();
    string getNome();
};

#endif 
