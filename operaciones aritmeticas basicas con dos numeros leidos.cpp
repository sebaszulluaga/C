#include <iostream>
#include<math.h>

using namespace std;

//programa para sumar, restar, multiplicar y dividir  dos numeros ingresados
int main (){
	
	int x;
	int y;

	cout<<"Programa para sumar, restar, multiplicar y dividir  dos numero, ingresa dos numero enteros\n"<<endl;
	cin>>x>>y;


	
	//operaciones matematicas
	int sumar=x+y;     		//suma
	int restar=x-y;   		//resta
	int multiplicar=x*y;	//Multiplicacion
	int dividir=x/y;		//division

	cout<<"resultado de Sumar = "<<sumar<<endl;
	cout<<"resultado de Restar = "<<restar<<endl;
	cout<<"resultado de Multiplicar = "<<multiplicar<<endl;
	cout<<"resultado de dividir = "<<dividir<<endl;

	cout<<"\nGracias por utilizar este programa :)";

}
