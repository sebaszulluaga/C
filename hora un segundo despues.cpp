#include <iostream>

using namespace std;

int main() {
	
	
	int h;
	int m;
	int s;
	
	cout<<"\t Hora un segundo despues \n"; 
	
	cout<<"ingrese hora: ";
	cin>>h;
	
	cout<<"ingrese minuto: ";
	cin>>m;
		
	cout<<"ingrese segundo: ";
	cin>>s;
	
 if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
    {
        s++;
        if ( s == 60 )
        {
            s = 0;
            m++;
            if ( m == 60 )
            {
                m = 0;
                h++;
                if ( h == 24 )
                    h = 0;
            }
        }
        cout<< "\n   Un segundo despues la hora es: "<<h<<":"<<m<<":"<< s;
    }
    else
        cout<< "\n   ERROR: La hora es incorrecta." ;



	return 0;	
	}
		

