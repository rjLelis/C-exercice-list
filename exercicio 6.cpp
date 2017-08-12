#include<iostream>
#include<math.h>
using namespace std;
main(){
	float x,y,r;
	cout<<"digite dois numeros: "<<"\n";
	cin>>x>>y;
	r=(sin(x*x)+cos(x)*cos(x)/3*sqrt(2)+sqrt(7));
	cout<<"resultado: "<<r<<"\n";
	
}
