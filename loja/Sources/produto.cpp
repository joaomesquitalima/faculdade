#include "../Headers/produto.h"
#include <string.h>
using namespace std;

Produto::Produto(int id, string& nome, double preco, int estoque)
    : id(id), nome(nome), preco(preco), estoque(estoque) {}

int Produto::getId() { return id; }
string Produto::getNome() { return nome; }
double Produto::getPreco() { return preco; }
int Produto::getEstoque() { return estoque; }

void Produto::setEstoque(int quantidade) { estoque = quantidade; }

bool Produto::operator==(Produto& outro) {
    return id == outro.id;
}

Produto& Produto::operator+=(int quantidade) {
    estoque += quantidade;
    return *this;
}
