#include<iostream>
using namespace std;

int main()
{
	float ADPA_v,ADPA_d,ADPA_t;
	cout<<"Ingrese la distancia(en km) d= "; cin>>ADPA_d;
	cout<<"Ingrese el tiempo(en horas)  t= "; cin>>ADPA_t;
	ADPA_v=ADPA_d/ADPA_t;
	cout<<"La velocidad calculada es de v= "<<ADPA_t<<endl<<endl;
	return 0;



}
