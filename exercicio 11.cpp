#include<iostream>
#include<math.h>
using namespace std;
main(){
	float h,m,ha,hr,fa,fr,t;
	cout<<"digite quantos homens aprovaram: "<<"\n";
	cin>>ha;
	cout<<"digite quantos homens reprovaram: "<<"\n";
	cin>>hr;
	cout<<"digite quantas mulheres aprovaram: "<<"\n";
	cin>>fa;
	cout<<"digite quantas mulheres reprovaram: "<<"\n";
	cin>>fr;
	t=ha+hr+fa+fr;
	cout<<"numero total de entrevistados: "<<t<<"\n";
	cout<<"percentual de aprovacao: "<<ha+fa*100/t<<"\n";
	cout<<"percentual de reprovacao: "<<hr+fr*100/t<<"\n";
	cout<<"percentual de mulheres entrevistadas: "<<fa+fr*100/t<<"\n";
}
