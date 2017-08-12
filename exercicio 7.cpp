/*Programa em C que receba três valores e calcule a expressão abaixo:

 √(cos(x)² + sen(y)² + sen(z²)²)
 -------------------------------
     2 + cos(3) + cos(4)
*/

#include<iostream>
#include<math.h>
using namespace std;
main(){
	float x, y, z, res;
	cout<<"Digite tres numeros: ";
	cin >> x >> y >> z;
	res = sqrt(cos(x) * cos(y) + sin(y) * sin(y) + sin (z * z) * sin(z * z)) / (2 + cos(3) + cos(4));
	cout << "Resultado: " << res << "\n";
}
