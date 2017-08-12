#include<iostream>
#include<math.h>
using namespace std;
main(){
	float x,y,z,r;
	cout<<"digite tres numeros: "<<"\n";
	cin>>x>>y>>z;
	r=sqrt(cos(x)*cos(y)+sin(y)*sin(y)+sin(z*z)*sin(z*z))/(2+cos(3)+cos(4));
	cout<<"resultado: "<<r<<"\n";
}
