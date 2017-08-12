// Implemente um programa em C que receba como entrada os catetos de um triângulo retângulo e calcule a sua hipotenusa
#include<iostream>
#include<math.h>
using namespace std;
main(){
	float ca, co, hipo;
	cout << "Digite o cateto adjacente: ";
	cin >> ca;
	cout << "Digite o cateto oposto: ";;
	cin >> co;
	hipo = sqrt(ca * ca + co * co);
	cout << "Hipotenusa do triangulo retangulo: " << hipo;
}
