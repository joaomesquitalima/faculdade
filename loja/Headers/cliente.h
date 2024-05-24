#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"

using namespace std;

class Cliente : public Pessoa {
public:
    Cliente(int id, string& nome);
    ~Cliente();
};

#endif 
