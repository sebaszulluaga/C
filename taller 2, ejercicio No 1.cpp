#include <iostream>

using namespace std;

int main() {
	
	// Declarcion de variable
	
	float n1;
	float n2;
	float n3;
	float n4;
	
	//entrada de datos
	
	cout<<"Ingresa nota #1"<<endl;
	cin>>n1;
	cout<<"Ingresa nota #2"<<endl;
	cin>>n2;
	cout<<"Ingresa nota #3"<<endl;
	cin>>n3;
	cout<<"Ingresa nota #4"<<endl;
	cin>>n4;
	
	if(n1 >= 0 && n1 <= 5 && n2 >= 0 && n2 <= 5 && n3 >= 0 && n3 <= 5 && n4 >= 0 && n4 <= 5 ){
	
		if(n1 >= n2 && n1 >= n3 && n1 >= n4){
			
		cout<<n1<<endl;
		
		if(n2 >= n3 && n2 >= n4){
			
		cout<<n2<<endl;
		if(n3 >= n4){
			
		cout<<n3<<endl;
		}
		else{
			
		cout<<n4<<endl;
		}
		if(n1 < n2 && n1 < n3 && n1 < n4){
			
		cout<<n1<<endl;
}
	}
	}
	
	}
		
	
	
	return 0;
}
