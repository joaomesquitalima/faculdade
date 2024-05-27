#ifndef LOJA_HPP
#define LOJA_HPP

#include <vector>
#include "produto.hpp"
#include "cliente.hpp"
#include "funcionario.hpp"

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
