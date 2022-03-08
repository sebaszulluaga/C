#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float x,v,p;
	int cont, i, k;
	char letra,c;
	bool band, terminar;
	const int MAX; 					//Definimos una constante llamada MAX
	const float PI; 				//Definimos una constante llamada PI
	
	
	cin>>letra;  					//correcto, lee una caracter
	cout<<max<<						//correcto, podemos imprimir una costante
	cin>>c;							//correcto, lee un caracter
	cout<<cont; 					//correcto  lee un entero
	cin>>MAX;   					//Error, no se puede leer una costante 
	cin>>v;    					 	//correcto, lee un float
//	x = 
	letra = 'p'						//no ponemos hacer un cambio de linea con p, ya que 'p' !=  '\n' 
	letra = "p"  					//correcto, lee un char
	letra = p 					 	//error, p es un float
	letra = c   					//error, c es un float 
	p =  v/x* sqrt(p)-band   		//error, no podemos hacer una operacion aritmetica con un dato booleano
	x = "3.2444" + "1.4e-4"			//
	terminar = true; 				//correcto,terminar es un bool y su valor es 1 osea verdadero
	terminar = "falso"				//error, terminar es un bool no un char
	terminar = 'f' <= letra			//
	
}
