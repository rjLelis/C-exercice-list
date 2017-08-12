/*Programa em C que receba dois valores e calcule a expressão abaixo:

   sen(x)√2
   --------  - cos(y)
     3√3
*/
#include<iostream>
#include<math.h>
using namespace std;
main(){
	float x, y ,res;
	cout << "Digite dois numeros: ";
	cin >> x >> y;
	res = (sin(x) + sqrt(2)) / (3 * sqrt(3)) - cos(y);
	cout << "Resultado: " <<res << "\n";
}
