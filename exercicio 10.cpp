/*Implemente um programa em C que receba como entrada a quantidade total de produtos de um determinado tipo vendidos por um vendedor.
Sabendo que o valor unitário de cada produto é de R$ 10,00, calcule e escreva:

a. O valor total da venda

b. Sabendo que a comissão do vendedor é de 10%, calcule quanto ele irá ganhar

c. Sabendo que o preço de venda do produto é R$ 2,50 mais caro que o de compra, determine o lucro que o vendedor deu para a empresa*/
#include<iostream>
#include<math.h>
using namespace std;
main(){
	int quantidade_total;
	float valor,comissao,lucro;
	cout << "Digite a quantidade total de produtos: "<<"\n";
	cin >> quantidade_total;
	valor = quantidade_total * 10;
	c = valor * 0.1;
	lucro = v * 2.50;
	cout << "Valor total da compra: "<<valor << "\n";
	cout << "Comissao do vendedor: " << comissao << "\n";
	cout << "Lucro: " << lucro << "\n";
}
