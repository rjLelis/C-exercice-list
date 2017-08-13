/*Implemente um programa em C que receba como entrada as quantidades de pessoas do sexo masculino e feminino, 
que aprovaram e que não aprovaram o lançamento de um determinado produto,
em seguida calcule:

a. O número total de pessoas entrevistadas

b. O percentual de aprovação e desaprovação

c. O percentual de mulheres entrevistadas*/
#include<iostream>
#include<math.h>
using namespace std;
main(){
	int homens_apr,homens_repr,mulheres_apr,mulheres_repr,total;
	cout << "Digite quantos homens aprovaram: ";
	cin >> homens_apr;
	cout << "Digite quantos homens reprovaram: ";
	cin >> homens_repr;
	cout << "Digite quantas mulheres aprovaram: ";
	cin >> mulheres_apr;
	cout << "Digite quantas mulheres reprovaram: ";
	cin >> mulheres_repr;
	total = homens_apr + homens_repr + mulheres_apr + mulheres_repr;
	cout << "Numero total de entrevistados: " << total << "\n";
	cout << "Percentual de aprovacao: " << homens_apr + mulheres_apr * 100 / total << "\n";
	cout << "Percentual de reprovacao: "<< homens_repr + mulhers_repr * 100 / t << "\n";
	cout << "Percentual de mulheres entrevistadas: " << mulheres_apr + mulheres_repr * 100 / t << "\n";
}
