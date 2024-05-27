#include "../Headers/pessoa.h"
#include <iostream>
using namespace std;

Pessoa::Pessoa(int id, const string& nome)
    : id(id), nome(nome) {}

Pessoa::~Pessoa() {
    
}

int Pessoa::getId(){ return id; }
string Pessoa::getNome() { return nome; }
