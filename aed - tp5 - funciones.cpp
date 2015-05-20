/* Ramiro Mendez
 * 145.161.3
 * K1051
 * Tp5: Funciones
 */


#include <iostream>

    using namespace std;
    
    double a,b;
	double getperimetro (double, double);

int main ()  {
	
	cout<< "ingrese el valor de un lado"<<endl;
	cin>> a;
	cout<< "ingrese el valor del otro lado"<<endl;
    cin>> b;
	cout<< "El perimetro del rectangulo es: " <<endl;
	cout<< getperimetro(a,b);
	
}


double getperimetro ( double a, double b) {
	
	double perimetro = a+a+b+b;
	return perimetro;
}



