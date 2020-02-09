/*
Realice un programa en C++ que devuelva el valor de "y" de la siguiente ecuación: y=a*x+b, pidiendole al usuario los valores de "a, b, x"  todos tipo float. No utilice funciones de librería en cálculo (cmath).

La salida deberá producir el despliegue: 

El valor de y: x.x

donde x.x es el valor calculado por el programa, a partir del los  valores  ingresados.

Ejemplo de ejecución:

Ingrese a:  0.23
Ingrese b:  23.12
Ingrese x:  1.33

Valor de y = 23.4259
*/

#include<iostream>
using namespace std;

int main()
{
    float a, b, x, y;
    cin>>a;
    cin>>b;
    cin>>x;
    y=(a*x)+b;
    cout<<"El valor de y: "<<y;
    return 0;
    
}