#include<iostream>
using namespace std;

int main()
{
	float ADPA_x,ADPA_y,ADPA_s,ADPA_m,ADPA_d,ADPA_r;
	
	cout<<"Ingrese en valor de x=:";
	cin>>ADPA_x;
	cout<<"Ingrese en valor de y=:";
	 
	cin>>ADPA_y;
	ADPA_s=ADPA_x+ADPA_y;
	ADPA_m=ADPA_x*ADPA_y;
	ADPA_d=ADPA_x/ADPA_y;
	ADPA_r=ADPA_x-ADPA_y;
	
	cout<<"Las suma de "<<ADPA_x<<" + "<<ADPA_y<<" = "<<ADPA_s<<endl;
	cout<<"Las multiplicacion de "<<ADPA_x<<" * "<<ADPA_y<<" = "<<ADPA_m<<endl;
	cout<<"Las division de "<<ADPA_x<<" / "<<ADPA_y<<" = "<<ADPA_d<<endl;
	cout<<"Las resta de "<<ADPA_x<<" - "<<ADPA_y<<" = "<<ADPA_r<<endl;
	return 0 ;

}
