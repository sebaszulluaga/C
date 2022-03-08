#include <iostream>

using namespace std;

int main(){
	switch(eleccion=getchar())
	{
		case'r'':
		case'R':
			cout<<"ROJO";
			break;
		case'b':
		case'B':
			cout<<"BLANCO";
			break;
		case'a':
		case'A':
			cout<<"AZUL";
			break;
	}
	return 0;
}
