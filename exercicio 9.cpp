#include<iostream>
#include<math.h>
using namespace std;
main(){
	int q1,q2,q3,q4,t;
	cout<<"digite a quantidade do canal1: "<<"\n";
	cin>>q1;
	cout<<"digite a quantidade do canal2: "<<"\n";
	cin>>q2;
	cout<<"digite a quantidade do canal3: "<<"\n";
	cin>>q3;
	cout<<"digite a quantidade do canal4: "<<"\n";
	cin>>q4;
	t=q1+q2+q3+q4;
	cout<<"audiencia do canal1: "<<q1*100/t<<"\n";
	cout<<"audiencia do canal2: "<<q2*100/t<<"\n";
	cout<<"audiencia do canal3: "<<q3*100/t<<"\n";
	cout<<"audiencia do canal4: "<<q4*100/t<<"\n";
	
}
