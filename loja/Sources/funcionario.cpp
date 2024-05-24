#include "../Headers/funcionario.h"

using namespace std;

Funcionario::Funcionario(int id, string& nome, double salario): Pessoa(id, nome), salario(salario) {}

Funcionario::~Funcionario() {}

double Funcionario::getSalario()  { return salario; }
