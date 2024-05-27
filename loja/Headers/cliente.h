#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"

using namespace std;

class Cliente : public Pessoa {
public:
    Cliente(int id, const string& nome);
    ~Cliente();

    int getId() override;  
    string getNome() override;
};

#endif 
