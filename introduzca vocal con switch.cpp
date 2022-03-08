#include <iostream>

using namespace std;


int main() {
	char ch;
	
	cout<<"introduzca una vocal";
	ch=getchar();
	switch(ch){
	case 'a': cout<<"se ha pulsado una a";
	break;
	case 'e': cout<<"se ha pulsado una e";
	break;
	case 'i': cout<<"se ha pulsado una i";
	break;
	case 'o': cout<<"se ha pulsado una o";
	break;
	case 'u': cout<<"se ha pulsado una u";
	break;
	default:cout<<"error";
	
	}
	
	return 0;
}
