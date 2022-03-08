// librerias

#include <iostream>   
#include <math.h>	  
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>


/*	

	Programacion II   
	Elaborado por @Sebaszulluaga
   	Contacto:sebastian.zuluaga2@utp.edu.co

*/

using namespace std;  // cout<<  cin >>

int main(){
	
	int numero;
	
	cout<<"\t\tInfo de la operadora \n\n";
	cout<<"\t1. paquetes y consumo \n";	
	cout<<"\t2. Saldo, Recarga y plan \n";	
	cout<<"\t3. Elegidos y Equipos \n";
	cout<<"\t4. Gestiona tu plan\n";
	cout<<"\t5. larga distancia\n";
	cin>>numero;

		
	switch(numero){
		
		case 1:{
			cout<<"1. paq. datos"<<endl;
			cout<<"2. paq. todo incluido"<<endl;
			cin>>numero;
			switch(numero){
				case 1:{
					
					cout<<"presiona uno para que aparesca holaaa1"<<endl;
					cout<<"presiona cero para regresar";
					cin>>numero;
					if(numero== 1){
					cout<<"holaaa1";
					}
					else if(numero==0){
					
					}
					
				
					break;
				}
				case 2:{
					cout<<"cero para regresar al anterior";
					break;
				}
			}
			break;
		}
		case 2:{
			cout<<"case 2";
			break;
		}
		
		
	}
	
}
