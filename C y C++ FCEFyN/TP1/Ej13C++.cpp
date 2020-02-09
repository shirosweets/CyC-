/*
Escriba, compile y ejecute un programa en C++ que ingrese un número con decimales y lo almacene en una variable acorde. A continuación guarde ese valor en una variable tipo entera de tal modo que permita mostrar por pantalla:

    el valor valor octal del valor entero del punto anterior

La salida deberá producir el despliegue:

Numero Octal correspondiente ingresado es : xx

Ejemplo de ejecución:

Ingrese un número con decimales:

15.36

El valor Octal del numero entero es : 017
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a;
    int b;
    cin>>a;
    b=a;
    cout<<showbase<<oct<<b;
    return 0;
}