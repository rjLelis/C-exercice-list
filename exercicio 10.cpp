#include<iostream>
#include<math.h>
using namespace std;
main(){
	float quttotal,v,c,l;
	cout<<"digite a quantidade total de produtos: "<<"\n";
	cin>>quttotal;
	v=quttotal*10;
	c=v*0.1;
	l=v*2.50;
	cout<<"valor total da compra: "<<v<<"\n";
	cout<<"comissao do vendedor: "<<c<<"\n";
	cout<<"lucro: "<<l<<"\n";
}
