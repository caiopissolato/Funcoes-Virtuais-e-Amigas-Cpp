#include <iostream>
#include <string>

using namespace std;

class ComboProduto;

class Produto{
    private:
        string produto;
        double preco;

    public:
        //Produto() : produto("nulo"), preco(0.0){};
        Produto(string prod, double pre) : produto(prod), preco(pre){};
        friend ComboProduto combinarProdutos(Produto &p1, Produto &p2);

};

class ComboProduto{
    private:
        double totalValor;
        int qtdItens;
    
    public:
        ComboProduto() : totalValor(0.0), qtdItens(0){};
        ComboProduto(double t, int q) : totalValor(t), qtdItens(q){};
        friend ComboProduto combinarProdutos(Produto &p1, Produto &p2);

};

ComboProduto combinarProdutos(Produto &p1, Produto &p2){
    ComboProduto cp0;
    double v, desconto;
    v = p1.preco + p2.preco;
    desconto = v * 15/100;
    cp0.totalValor = v - desconto;
    cp0.qtdItens = 2;
    cout << "Valor total dos produtos com 15% de desconto: " << cp0.totalValor << endl;
    cout << "Quantidade de produtos: " << cp0.qtdItens << endl;
    return cp0;
}

int main(){
    Produto p1("Arroz", 25.5);
    Produto p2("Feijao", 10.5);

    combinarProdutos(p1, p2);
}