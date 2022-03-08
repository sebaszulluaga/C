#include <iostream>

using namespace std;


int main(){
	// La clave correcta
	int menu, retirar, servicios, aceptar_cancelar;
	int clave = 1234;
	int saldo=1000000;
	cout << "Bienvenido al cajero automático de daviplata\n";
	cout << "Ingrese la clave: ";
	cin >> clave;
	
	
	switch(clave)
	{
	case 1234: 
	// Si llegamos hasta aquí, podemos estar seguros de que el usuario introdujo la clave correcta
	cout << "\tClave correcta\nBienvenido\n\n";	
	
		cout<<"escoja una opcion"<<endl;
		cout<<"1. saldo"<<endl;
		cout<<"2. retirar"<<endl;
		cout<<"3. pago servicios"<<endl;
		cout<<"4. cambiar clave"<<endl;
		cin>>menu;
		
	switch(menu){
	
		case 1:
		cout<<saldo;
		case 2:
		cout<<"cuanto quieres retirar"<<endl;
		cout<<"1. 50000"<<endl;
		cout<<"2. 100000"<<endl;
		cout<<"2. 320000"<<endl;
		cin>>retirar;
		
		switch(retirar){
			case 1: 
			cout<<"nuevo saldo: ";
			cout<<saldo-50000<<endl;
			break;
			case 2:
			cout<<"nuevo saldo: ";
			cout<<saldo-100000<<endl;
			break;
			case 3:
			cout<<"nuevo saldo: ";
			cout<<saldo-320000<<endl;	
			break;
		}
		case 3: 
		cout<<"1. agua"<<endl;
		cout<<"2. energia"<<endl;
		cout<<"3. gas"<<endl;
		cin>>servicios;
		
		switch(servicios){
			
			case 1: 
			cout<<"valor de agua es 20000"<<endl;
			cout<<"1. aceptar"<<endl;
			cout<<"2. cancelar"<<endl;
			cin>>aceptar_cancelar;
			switch(aceptar_cancelar){
				case 1: 
				cout<<"Nuevo saldo: ";
				cout<<saldo-20000;
				break;
				case 2:
						
					return main();
					break;
				
			}
			break;
			case 2:
				cout<<"valor de energia es 50000"<<endl;
			cout<<"1. aceptar"<<endl;
			cout<<"2. cancelar"<<endl;
			cin>>aceptar_cancelar;
			switch(aceptar_cancelar){
				case 1: 
				cout<<"Nuevo saldo: ";
				cout<<saldo-50000<<endl;
				case 2:
						
					return main();
				
			}	
		case 4:
			
			cout<<"1. cambiar clave";
		}
	
	}
	
	
	
    break;
	
	default:
	cout << "Clave incorrecta";
    // Con return detenemos la ejecución del programa
	
	}
	
	
	
	
	return 0;
}



