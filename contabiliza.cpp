#include<iostream>
using namespace std;

int main()
{
	int ADPA_i=0,l;
	float ADPA_x,ADPA_s=0;
	cout<<"ingrese el limite l="; cin>>l;
	do{
		
	cout<<"ingrese el numero x="; cin>>ADPA_x;
	ADPA_i=ADPA_i+1;
	ADPA_s=ADPA_s+ADPA_x;



	}while(ADPA_i<l);
	cout<<"Se ingresaron "<<l<<" numeros "<< "que sumaron "<<ADPA_s<<endl;
	return 0;



}
