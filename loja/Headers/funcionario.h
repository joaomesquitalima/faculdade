#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"


using namespace std;

class Funcionario : public Pessoa {
private:
    double salario;

public:
    Funcionario(int id, string& nome, double salario);
    ~Funcionario();

    int getId() override;  
    string getNome() override;


    double getSalario();
};

#endif 
