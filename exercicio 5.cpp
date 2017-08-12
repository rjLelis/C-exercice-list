#include<iostream>
#include<math.h>
using namespace std;
main(){
	float x,y,r;
	cout<<"digite dois numeros: "<<"\n";
	cin>>x>>y;
	r=(sin(x)+sqrt(2))/(3*sqrt(3))-cos(y);
	cout<<"resultado: "<<r<<"\n";
}
