/*Em uma determinada cidade existem 4 canais de TV. 
Implemente um programa em C que receba como entrada o número de casas com a TV ligada em cada canal às 20:00hs de um domingo,
e calcule e escreva os percentuais de audiência de cada um dos canais
*/
#include<iostream>
#include<math.h>
using namespace std;
main(){
	int canal1,canal2,canal3,canal4,t;
	cout << "Digite a quantidade do canal1: ";
	cin >> canal1;
	cout << "Digite a quantidade do canal2: ";
	cin >> canal2;
	cout << "Digite a quantidade do canal3: ";
	cin >> canal3;
	cout << "Digite a quantidade do canal4: ";
	cin >> canal4;
	t = canal1 + canal2 + canal3 + canal4;
	cout << "Audiencia do canal 1: " << canal1 * 100 / t <<"\n";
	cout << "Audiencia do canal 2: " << canal2 * 100 / t <<"\n";
	cout << "Audiencia do canal 3: " << canal3 * 100 / t << "\n";
	cout << "Audiencia do canal 4: " << canal4 * 100 / t << "\n";
	
}
