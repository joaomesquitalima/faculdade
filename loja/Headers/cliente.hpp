#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "Pessoa.hpp"
#include <iostream>

using namespace std;

class Cliente : public Pessoa {
public:
    Cliente(int id, const string& nome);
    ~Cliente();

    int getId() override;  
    string getNome() override;
};

#endif 
