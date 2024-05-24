#include "../Headers/funcionario.h"

using namespace std;

Funcionario::Funcionario(int id, string& nome, double salario): Pessoa(id, nome), salario(salario) {}

Funcionario::~Funcionario() {}

int Funcionario::getId(){
    return id;  
}

string Funcionario::getNome(){
    return nome;
}
double Funcionario::getSalario()  { return salario; }
