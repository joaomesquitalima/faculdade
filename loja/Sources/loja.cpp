#include "../Headers/loja.hpp"
#include <iostream>

using namespace std;


void Loja::adicionarProduto( Produto& produto) {
    produtos.push_back(produto);
}

// adiciona um objeto cliente ao vetor clientes
void Loja::adicionarCliente( Cliente& cliente) {
    clientes.push_back(cliente);
}

// adiciona um objeto funcionario ao vetor funcionarios
void Loja::adicionarFuncionario( Funcionario& funcionario) {
    funcionarios.push_back(funcionario);
}

// lista os itens da loja
void Loja::listarProdutos() {
    if(produtos.size() == 0){
        cout << "Nenhum item listado" << endl;
    }
    else{
    for (int i = 0; i < produtos.size(); i++) {
        Produto produto = produtos[i];
        cout << "ID: " << produto.getId() << ", Nome: " << produto.getNome() << ", Preço: " << produto.getPreco() << ", Estoque: " << produto.getEstoque() << endl;
        }
    }  
}

// lista os clientes da loja
void Loja::listarClientes()  {
    if(clientes.size() == 0){
        cout << "Sem clientes" << endl;
    }
    else{
    for (int i=0;i < clientes.size(); i++) {
        Cliente cliente = clientes[i];
        cout << "ID: " << cliente.getId() << ", Nome: " << cliente.getNome() << endl;
        }
    }
    
}

// lista os funcionarios da loja
void Loja::listarFuncionarios()  {
    if(funcionarios.size() == 0){
        cout << "Sem funcionarios" << endl;
    }
    else{
    for (int i = 0; i < funcionarios.size(); i++) {
        Funcionario funcionario = funcionarios[i];
        cout << "ID: " << funcionario.getId() << ", Nome: " << funcionario.getNome() << ", Salário: " << funcionario.getSalario() << endl;
        }
    }
}



