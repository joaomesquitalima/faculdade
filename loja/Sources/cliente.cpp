#include "../Headers/cliente.h"

using namespace std;

Cliente::Cliente(int id, const string& nome) : Pessoa(id, nome) {}

Cliente::~Cliente() {}

int Cliente::getId(){
    return id;  
}

string Cliente::getNome(){
    return nome;
}