/*
Escriba, compile y ejecute un programa en C++ que calcule el área de un círculo, pidiéndole al usuario que ingrese el valor de radio en flotante. Utilice la variable PI  y la funcion  POW de la librería matemática. La salida deberá producir el despliegue: 

El area es: x.x

donde x.x es el valor calculado para el área  del mencionado círculo.

Ejemplo de ejecución:

Ingresa el radio:0.5

El area es: 0.785398
*/


#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.141592653589793;

int main()
{
    float r, a; // r=radio, a=area
    cin>>r;
    a=PI*pow(r,2);
    cout<<"El area es: "<<a<<endl;
    return 0;
}