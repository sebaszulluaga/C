#include <iostream>

using namespace std;

int main(){
	int x=5;
	int y=1;
	int z=2;
	int w=6;
	
	
	cout<<"________________________"<<endl;
	
	if(x>y && x>z && x>w){
			cout<<"el numero mayor es: "<<x<<endl;
	}
	
	if(y>x && y>z && y>w){
	
			cout<<"el numero mayor es: "<<y<<endl;
	}
	
	if(z>x && z>y && z>w){
			cout<<"el numero mayor es: "<<z<<endl;
		}
	if(w>x && w>y && w>z){
		
			cout<<"el numero mayor es: "<<w<<endl;
	}
	
	
	
	
	cout<<"________________________"<<endl;
	
	if(y>x && y>z && y>w){
		cout<<x<<endl;
		cout<<z<<endl;
		cout<<w<<endl;}
		
	else if(x>y && x>z && x>w){
		cout<<y<<endl;
		cout<<z<<endl;
		cout<<w<<endl;
		}
	else if(z>y && z>x && z>w){
		cout<<x<<endl;
		cout<<y<<endl;
		cout<<w<<endl;
		}
	else if(w>y && w>x && w>z){
		cout<<y<<endl;
		cout<<z<<endl;
		cout<<w<<endl;
		}
	cout<<"_________________________"<<endl;


	if(x<y && x<z && x<w){
			cout<<"el numero menor es: "<<x<<endl;
	}
	
	if(y<x && y<z && y<w){
	
			cout<<"el numero menor es: "<<y<<endl;
	}
	
	if(z<x && z<y && z<w){
			cout<<"el numero menor es: "<<z<<endl;
		}
	if(w<x && w<y && w<z){
		
			cout<<"el numero menor es: "<<w<<endl;
	}
	cout<<"_________________________"<<endl;
	
	if(x<y && x>z || x>w){
		cout<<" intermedio es: "<<x;
	}
	if(y<x && y>z || y>w){
		cout<<" intermedio es: "<<y;

	}
	if(z<x && z>y || z>w){
		cout<<" intermedio es: "<<z;

	}
	if(w<x && w>z || w>y){
		cout<<" intermedio es: "<<w;

	}
	
				
				}

