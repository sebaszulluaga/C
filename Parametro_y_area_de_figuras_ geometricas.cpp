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


int main () {
	
	
	    //Titulo
		cout<<"\t\t FIGURAS GEOMETRICAS \n\n";
		
		
		//Funcion para permitir acentos
		setlocale(LC_ALL, "");
		
		
		// variable y constantes globales
		int a,b, B,c,h,d,D,r, numero; //declaracion de variables		
		const float PI  = 3.1416; //Definimos una constante llamada PI

		
		// Guia para escoger figura
		cout<<"\tPerimetros y areas de figuras planas \n\n"<<endl;
		cout<<"\tEscoge una figura: \n"<<endl;
		cout<<"\t1. Triángulo \n"<<endl;
		cout<<"\t2. Paralelogramo \n"<<endl;
		cout<<"\t3. Rectángulo \n"<<endl;
		cout<<"\t4. Cuadrado \n"<<endl;
		cout<<"\t5. Rombo \n"<<endl;
		cout<<"\t6. Cometa \n"<<endl;
		cout<<"\t7. Trapecio \n"<<endl;
		cout<<"\t8. Círculo \n"<<endl;
		
		
		//Ingresar numero para escoger figura
		cin>>numero;
		system("cls");
		
		
		//Condicion de acuerdo a la figura escogida
	    switch(numero){
	    	
	    	
	    
	
        case 1:{	//opcion #1 Triángulo
		
		
		//Aviso de seleccion
		cout<<"\n\t¡GENIAL! :)   Acabas de  elegir el Triangulo, para conocer su perimetro y area Ingresa el valor de"<<endl;
		
		// leer datos
		cout<<"\n\t A,B,C,H: \n"<<endl;
		cin>>a>>b>>c>>h; 
		system("cls");
		

		// Procesos Matematicos 
		int perimetro_triangulo=a+b+c;    //Perimetro triangulo
		int area_triangulo=b*h/2;		  //Area triangulo
		
		
		// Salida 
		cout<<"\tTu resultado :) "<<"\n\n";
		cout<<"__________________________________________________________________\n"<<endl;
		cout<<"| \t Figura"<<"\t \t|"<<"\t Perimetro"<<"\t | \t"<<"Area \t | \n"<<endl;
		cout<<"| \t Triangulo"<<"\t| \t "<<a<<"+"<<b<<"+"<<c<<"="<<perimetro_triangulo<<"\t | \t"<<b<<"*"<<h<<"/"<<2<<"="<<area_triangulo<<"\t | \t"<<endl;
	    cout<<"__________________________________________________________________\n"<<endl;	
		break;
		}
		
		
		
		
 		case 2: {   //opcion #2 Paralelogramo
 			
 	
		//Aviso de seleccion
		cout<<"\n\t¡GENIAL! :)   Acabas de  elegir el paralelogramo, para conocer su perimetro y area"<<endl;
			   	
 		// leer datos
		cout<<"\tIngrese los valores de A,B,H: \n"<<endl;
		cin>>a>>b>>h; 
		system("cls");
		
		
		// Procesos Matematicos 
		int perimetro_paralelogramo=2*(a+b);    //Perimetro paralelogramo
		int area_paralelogramo=b*h;		  //Area Paralelogramo
		
		
		// Salida 
		cout<<"\tTu resultado :) "<<"\n\n";
		cout<<"__________________________________________________________________\n"<<endl;
		cout<<"| \t Figura"<<"\t \t|"<<"\t Perimetro"<<"\t | \t"<<"Area \t | \n"<<endl;
		cout<<"| \t Paralelogramo"<<"\t| \t "<<"2"<<"x"<<a<<"+"<<b<<"="<<perimetro_paralelogramo<<"\t | \t"<<b<<"x"<<h<<"="<<area_paralelogramo<<"\t | \t"<<endl;
	    cout<<"__________________________________________________________________\n"<<endl;   	
		break;
		}
			
				
			
		
		case 3: {  	//opcion #3 Rectangulo
 			
 		//Aviso de seleccion
		cout<<"\n\t¡GENIAL! :)   Acabas de  elegir el Rectangulo, para conocer su perimetro y area"<<endl;
			   	
				      	
 		// leer datos
		cout<<"\tIngrese los valores de A,B: \n"<<endl;
		cin>>a>>b; 
		system("cls");

		
		// Procesos Matematicos 
		int perimetro_rectangulo=2*(b+a);    //Perimetro rectangulo
		int area_rectangulo=b*a;		  //Area rectangulo
		
		
		// Salida 
		cout<<"\tTu resultado :) "<<"\n\n";
		cout<<"__________________________________________________________________\n"<<endl;
		cout<<"| \t Figura"<<"\t \t|"<<"\t Perimetro"<<"\t | \t"<<"Area \t | \n"<<endl;
		cout<<"| \t Rectangulo"<<"\t| \t "<<"2"<<"x"<<b<<"+"<<a<<"="<<perimetro_rectangulo<<"\t | \t"<<b<<"x"<<a<<"="<<area_rectangulo<<"\t | \t"<<endl;
	    cout<<"__________________________________________________________________\n"<<endl;
		break;
		}
 			
 			
 			
 		
 		case 4: {   //opcion #4 cuadrado
 		
		 
		 //Aviso de seleccion
		cout<<"\n\t¡GENIAL! :)   Acabas de  elegir el Cuadrado, para conocer su perimetro y area"<<endl;
			   	
					
 		   	
 		// leer datos
		cout<<"\tIngrese el valor de A: \n"<<endl;
		cin>>a; 
		system("cls");
		

		
		// Procesos Matematicos 
		int perimetro_cuadrado=4*a;    //Perimetro cuadrado
		int area_cuadrado=a*a;		  //Area cuadrado
		
		
		// Salida 
		cout<<"\tTu resultado :) "<<"\n\n";
		cout<<"__________________________________________________________________\n"<<endl;
		cout<<"| \t Figura"<<"\t \t|"<<"\t Perimetro"<<"\t | \t"<<"Area \t | \n"<<endl;
		cout<<"| \t Cuadrado"<<"\t| \t "<<"4"<<"x"<<a<<"="<<perimetro_cuadrado<<"\t\t | \t"<<a<<"^"<<a<<"="<<area_cuadrado<<"\t | "<<endl;
	    cout<<"__________________________________________________________________\n"<<endl;  	
		break;
		}		
 			
 		 			
 	
 	
 		case 5: {   //opcion #5 Rombo
 		
		 
		//Aviso de seleccion
		cout<<"\n\t¡GENIAL! :)   Acabas de  elegir el Rombo, para conocer su perimetro y area"<<endl;
			  	
 		   	
 		// leer datos
		cout<<"\tIngrese el valor de A, d, D: \n"<<endl;
		cin>>a>>d>>D; 
		system("cls");
		
	
		
		// Procesos Matematicos 
		int perimetro_rombo=4*a;      //Perimetro Rombo
		int area_rombo=D*d/2;		  //Area Rombo
		
		
		// Salida 
		cout<<"\tTu resultado :) "<<"\n\n";
		cout<<"__________________________________________________________________\n"<<endl;
		cout<<"| \t Figura"<<"\t \t|"<<"\t Perimetro"<<"\t | \t"<<"Area \t | \n"<<endl;
		cout<<"| \t Rombo"<<"\t \t|"<<"\t4"<<"x"<<a<<"="<<perimetro_rombo<<"\t\t | \t"<<D<<"*"<<d<<"/2="<<area_rombo<<"\t |"<<endl;
	    cout<<"__________________________________________________________________\n"<<endl; 	
		break;
		}	
			
			
			
	 	
 		case 6: {   //opcion #6 Cometa
 			
 	    //Aviso de seleccion
		cout<<"\n\t¡GENIAL! :)   Acabas de  elegir el Cometa, para conocer su perimetro y area"<<endl;
			     	
 		// leer datos
		cout<<"\tIngrese el valor de A,B, d, D: \n"<<endl;
		cin>>a>>b>>d>>D; 
		system("cls");
		
		
		// Procesos Matematicos 
		int perimetro_cometa=2*(b+a);        //Perimetro cometa
		int area_cometa=D*d/2;		 		 //Area cometa
		
		
		// Salida 
		cout<<"\tTu resultado :) "<<"\n\n";
		cout<<"__________________________________________________________________\n"<<endl;
		cout<<"| \t Figura"<<"\t \t|"<<"\t Perimetro"<<"\t | \t"<<"Area \t | \n"<<endl;
		cout<<"| \t Cometa"<<"\t \t| "<<"\t2"<<"x"<<b<<"+"<<a<<"="<<perimetro_cometa<<"\t\t | \t"<<D<<"*"<<d<<"/2="<<area_cometa<<"\t | "<<endl;
	    cout<<"__________________________________________________________________\n"<<endl;
		break;
		}
 		
		 			
			
	 	
 		case 7: {  //opcion #7 Trapecio
 		
		//Aviso de seleccion
		cout<<"\n\t¡GENIAL! :)   Acabas de  elegir el Trapecio, para conocer su perimetro y area"<<endl;
			  	
 		   	
 		// leer datos
		cout<<"\tIngrese el valor de A, B, b, c, h: \n"<<endl;
		cin>>a>>B>>b>>c>>h; 
		system("cls");
		

		
		// Procesos Matematicos 
		int perimetro_trapecio=B+b+a+c;          //Perimetro trapecio
		int area_trapecio=(B+b)*h/2;		 	 //Area trapecio
		
		
		// Salida 	
		cout<<"\tTu resultado :) "<<"\n\n";
		cout<<"__________________________________________________________________\n"<<endl;
		cout<<"| \t Figura"<<"\t \t|"<<"\t Perimetro"<<"\t | \t"<<"Area \t | \n"<<endl;
		cout<<"| \t Trapecio"<<"\t| \t "<<B<<"+"<<b<<"+"<<a<<"+"<<c<<"="<<perimetro_trapecio<<"\t | "<<"("<<B<<"+"<<b<<")"<<"*"<<h<<"/2="<<area_trapecio<<"\t | \t"<<endl;
	    cout<<"__________________________________________________________________\n"<<endl;
	
		   	
		break;
		}
 			
	 			
			
	 	
 		case 8: {   //opcion #8 circulo
 			
 		
		//Aviso de seleccion
		cout<<"\n\t¡GENIAL! :)   Acabas de  elegir el circulo, para conocer su perimetro y area"<<endl;
			     	
 		
		// leer datos
		cout<<"\tIngrese el valor de r: \n"<<endl;
		cin>>r; 
		system("cls");
		
		
		// Procesos Matematicos 
		int perimetro_circulo=2*PI*r;          //Perimetro circulo
		int area_circulo=PI*(r*r);		 	   //Area circulo
		
		
		// Salida 
		cout<<"\tTu resultado :) "<<"\n\n";
		cout<<"__________________________________________________________________\n"<<endl;
		cout<<"| \t Figura"<<"\t \t|"<<"\t Perimetro"<<"\t | \t"<<"Area \t | \n"<<endl;
		cout<<"| \t Circulo"<<"\t| \t "<<"2"<<"x"<<PI<<"x"<<r<<"="<<perimetro_circulo<<"\t | "<<PI<<"x"<<r<<"x"<<r<<"="<<area_circulo<<" | \t"<<endl;
	    cout<<"__________________________________________________________________\n"<<endl;
	
		break;
		
		}
 		default: cout << "\tOpción no válida, intentalo nuevamente :)" << endl;
		 	
	}	
	cout<<"\n\tGracias por utilizar este programa" << endl;
    return 0;
}
