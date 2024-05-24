#include "../Headers/loja.h"
#include <iostream>

using namespace std;

void Loja::adicionarProduto( Produto& produto) {
    produtos.push_back(produto);
}

void Loja::adicionarCliente( Cliente& cliente) {
    clientes.push_back(cliente);
}

void Loja::adicionarFuncionario( Funcionario& funcionario) {
    funcionarios.push_back(funcionario);
}

void Loja::listarProdutos() {
    for (int i = 0; i < produtos.size(); ++i) {
        Produto produto = produtos[i];
        cout << "ID: " << produto.getId() << ", Nome: " << produto.getNome() << ", Preço: " << produto.getPreco() << ", Estoque: " << produto.getEstoque() << endl;
    }
}


void Loja::listarClientes()  {
    for (int i=0;i < clientes.size(); i++) {
        Cliente cliente = clientes[i];
        cout << "ID: " << cliente.getId() << ", Nome: " << cliente.getNome() << endl;
    }
}

void Loja::listarFuncionarios()  {
    for (int i = 0; i < clientes.size(); i++) {
        Funcionario funcionario = funcionarios[i];
        cout << "ID: " << funcionario.getId() << ", Nome: " << funcionario.getNome() << ", Salário: " << funcionario.getSalario() << endl;
    }
}
