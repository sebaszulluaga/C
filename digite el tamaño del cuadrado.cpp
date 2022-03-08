#include <iostream>
#include <math.h>





using namespace std;
int main(int argc, char** argv) {
	
	int f,c,tam;
	f=0;
	cout<<"Digite el tamaño del cuadrado"<<endl;
	cin>>tam;
	
	while(f<tam){
		c=0;
		
		while(c<f){
			cout<<"*";
			c=c+1;
		}
		cout<<endl;
		f=f+1;
	}
		
	return 0;
}
