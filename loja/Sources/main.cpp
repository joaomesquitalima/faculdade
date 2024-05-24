#include <iostream>
#include "../Headers/loja.h"

using namespace std;

int main() {
    Loja loja;
    string t1 = "produto 1";

    // Adicionar produtos
    Produto p1(1, t1, 10.5, 100);
    Produto p2(1, t1, 10.5, 100);

    p2+=1;
   
    
    
    loja.adicionarProduto(p1);
    loja.listarProdutos();
    

    // // Adicionar clientes
    // Cliente c1(1, "Cliente 1");
    // Cliente c2(2, "Cliente 2");
    // loja.adicionarCliente(c1);
    // loja.adicionarCliente(c2);
    // loja.adicionarCliente(c2);
    // loja.adicionarCliente(c2);
    // loja.adicionarCliente(c2);
    // loja.adicionarCliente(c2);



    // // Adicionar funcionários

    // // Adicionar funcionários

    // // Adicionar funcionários

    // // Adicionar funcionários

    // // Adicionar funcionários
    // Funcionario f1(1, "Funcionario 1", 3000.0);
    // Funcionario f2(2, "Funcionario 2", 4000.0);
    // loja.adicionarFuncionario(f1);
    // loja.adicionarFuncionario(f2);

    // // Listar produtos
    // cout << "Produtos disponíveis:" <<endl;
    // loja.listarProdutos();

    // // Listar clientes
    // cout << "Clientes cadastrados:" <<endl;
    // loja.listarClientes();

    // // Listar funcionários
    // cout << "Funcionários cadastrados:" <<endl;
    // loja.listarFuncionarios();

    return 0;
}
