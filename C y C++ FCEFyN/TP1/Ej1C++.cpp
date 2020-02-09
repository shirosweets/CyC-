/*
Escriba, compile y ejecute un programa en C++ que calcule e imprima por pantalla el valor de EC (Energia CInética) siendo su ecuación EC = \frac{1}{2} m (x^2 + y^2 + z^2)

No utilice funciones de librería en cálculo (cmath).

Ingresando los valores de x , y, z y m.

 La salida por pantalla  deberá producir el despliegue:

El valor de EC es =  XX.XX

Dònde xx.xx es el valor calculado por el programa a partir de los datos ingresados de x, y, z y m.

Ejemplo de ejecución:

Valor de x = 3
Valor de  y = 4
Valor de z =  5

Valor de m = 6

El valor de EC es = 150
*/

// Codigo del ejercicio
#include<iostream>
using namespace std;

int main()
{
    float x, x2, y, y2, z, z2, m, w, EC;
    //cout<<"Ingrese el valor de x: ";
    cin>>x;
    x2=x*x;
    //cout<<"Ingrese el valor de y: ";
    cin>>y;
    y2=y*y;
    //cout<<"Ingrese el valor de z: ";
    cin>>z;
    z2=z*z;
    //cout<<"Ingrese el valor de m: ";
    cin>>m;
    w=(x2+y2+z2);
    EC=(0.5*m)*w;
    cout<<"El valor de EC es = "<<EC;
    return 0;
    
}