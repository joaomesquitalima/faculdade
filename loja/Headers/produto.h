#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

using namespace std;

class Produto {
private:
    int id;
    string nome;
    double preco;
    int estoque;

public:
    Produto(int id, string& nome, double preco, int estoque);

    int getId();
    string getNome();
    double getPreco();
    int getEstoque();

    void setEstoque(int quantidade);

    
    bool operator==( Produto& outro);
    Produto& operator+=(int quantidade);
};

#endif 
