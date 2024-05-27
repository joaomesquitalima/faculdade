#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include "Pessoa.hpp"


using namespace std;

class Funcionario : public Pessoa {
private:
    double salario;

public:
    Funcionario(int id, const string& nome, double salario);
    ~Funcionario();

    int getId() override;  
    string getNome() override;


    double getSalario();
};

#endif 
