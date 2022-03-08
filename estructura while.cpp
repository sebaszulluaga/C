#include <iostream>

using namespace std;

int main(){
	int n, suma, i;
	
	i=1;
	
	cout<<"escribe un numero"<<endl;
	cin>>n;
	suma=0;
	
	while(i<=n){
		
		suma=suma+i;
		i=i+1;
		
	}
	cout<<"la suma es: "<<suma;
	
	
	
}
