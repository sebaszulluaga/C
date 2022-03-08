
#include <iostream>

using namespace std;

int main(){
	
	int num1, num2;
	int contador=1, elevado=1;
	
	cout<<"ingrese num1";
	cin>>num1;
	
	cout<<"ingrese num2";
	cin>>num2;
	

	
	while(contador<=num2)
	{
		elevado = elevado* num1;
		contador=contador+1;
	}
	
	
	
	cout<<elevado;
	
}
