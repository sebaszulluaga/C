#include <iostream>

using namespace std;

int main() {
	
	
	int importe_bruto;
	int importe_neto;
	
	
	cout<<"ingrese numero"<<endl;
	cin>>importe_bruto; 
	
	if(importe_bruto > 15000)
	{
		importe_neto=importe_bruto-(importe_bruto*0.16);
		cout<<"Resultado"<<importe_neto;
	}
	else
	{
		importe_neto=importe_bruto-(importe_bruto*0.10);
		cout<<"Resultado"<<importe_neto;
		
	}
	
	return 0;
}
