// Implemente um programa em C que receba como entrada o raio de uma circunferência e calcule e escreva a sua área
#include<iostream>
#include<math.h>
using namespace std;
main(){
	float raio, area;
	cout << "Digite o raio do circulo: ;
	cin >> raio;
	area = M_PI * pow(raio,2);
          cout << "Area do circulo: " << area << "\n";
}

