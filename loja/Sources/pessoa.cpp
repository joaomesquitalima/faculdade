#include "../Headers/pessoa.h"

using namespace std;

Pessoa::Pessoa(int id, string& nome)
    : id(id), nome(nome) {}

Pessoa::~Pessoa() {}

int Pessoa::getId(){ return id; }
string Pessoa::getNome() { return nome; }
