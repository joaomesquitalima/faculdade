#ifndef LOJA_H
#define LOJA_H

#include <vector>
#include "produto.h"
#include "cliente.h"
#include "funcionario.h"

using namespace std;

class Loja {
private:
    vector<Produto> produtos;
    vector<Cliente> clientes;
    vector<Funcionario> funcionarios;

public:
    void adicionarProduto( Produto& produto);
    void adicionarCliente( Cliente& cliente);
    void adicionarFuncionario( Funcionario& funcionario);

    void listarProdutos() ;
    void listarClientes() ;
    void listarFuncionarios() ;
    
};

#endif 
