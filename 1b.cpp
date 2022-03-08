


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

#define pi 3.14

int main() {
	
	int R,r,h;
	 
	cout<<"ingresa R,r,h "<<endl;
	cin>>R>>r>>h;

	int volumen_de_un_cono_truma = 3.14*(((R*R)+(r*r)+(R*r))*(h/3));
	
	cout<<volumen_de_un_cono_truma;
	
	
	
	return main();
}
