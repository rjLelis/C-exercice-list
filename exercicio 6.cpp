/*Programa em C que receba dois valores e calcule a expressão abaixo:

   sen(x²) + cos(x)²
   ----------------
       3√2 + √7
*/
#include<iostream>
#include<math.h>
using namespace std;
main(){
	float x, y ,res;
	cout<<"Digite dois numeros: ";;
	cin >> x >> y;
	res = ((sin(x * x) + cos(x) * cos(x)) / (3 * sqrt(2)+sqrt(7)));
	cout << "Resultado: " << res <<"\n";
	
}
