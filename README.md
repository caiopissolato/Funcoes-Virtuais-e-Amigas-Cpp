# Funções Virtuais e Amigas

## Ex1

Considere a implementação de uma classe base chamada **Produto**, contendo apenas os atributos de
preço e nome do produto. Considere uma segunda classe chamada **ComboProduto** que contenha
os atributos **totalValor** e **quantidadeItens**. Crie uma função amiga chamada **combinarProdutos**
que, recebendo como parâmetro dois objetos da classe **Produto**, dê como retorno um objeto da
classe **ComboProduto**, cujo atributo **totalValor** contenha a soma dos valores dos dois produtos,
descontados 15% e atribua 2 a **quantidadeItens**.
No programa principal, realize os testes necessários para garantir que a função está operando
corretamente, garantindo que os valores sejam mostrados em tela.

## Ex2

Crie uma classe abstrata **FormaGeometrica** que contenha um método puramente virtual chamado
**calculaArea**. Crie uma classe Retangulo derivada da classe acima que contenha os atributos para
os dois lados do retângulo.
Crie um método **oi()** na classe base, cuja implementação é:
**cout << "oi, sou uma forma geometrica<<endl;**.
Crie também o mesmo método na classe derivada, desta vez escrevendo: **cout <<"oi, sou um
retangulo<<endl;.**
Permita que o método **oi()** possa ser invocado corretamente para um objeto Retangulo, mesmo a
partir de um ponteiro de **FormaGeometrica**.
