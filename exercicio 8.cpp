/*Em uma fábrica o salário dos seus operários é calculado com base nas suas produtividades, de acordo com a fórmula definida abaixo. 
Sabendo que a fábrica tem três operários, desenvolva um programa em C que receba como entrada o número de peças fabricadas por cada um deles em um mês de trabalho
e calcule os seus salários.

Salário = 545 + Número de Peças Fabricadas * 20
*/
#include<iostream>
#include<math.h>
using namespace std;
main() {
	int f1, f2, f3;
	cout<<"Digite o numero de pecas do primeiro funcionario: ";
	cin >> f1;
	cout << "Salario do primeiro funcionario: "<< 545 + f1 * 20 << "\n";
	cout << "digite o numero de pecas do segundo funcionario: ";
	cin >> f2;
	cout << "salario do segundo funcionario: "<< 545 + f2 * 20 << "\n";
	cout << "digite o numero de pecas do terceiro funcionario: " << "\n";
	cin >> f3;
	cout << "Salario do terceiro funcionario: "<< 545 + f3 * 20 << "\n";
}
