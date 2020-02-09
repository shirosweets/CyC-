/*
Escriba, compile y ejecute un programa en C++ que ingrese un número con decimales y guarde en un tipo de variable de tal modo que cuando esta variable se imprima muestre un entero. Imprima por pantalla el entero generado a partir del decimal ingresado.

Ejemplo de ejecución:

Ingrese un numero con decimales:  342.56

Numero Decimal, truncado a entero es:  342
*/

#include<iostream>
using namespace std;

int main()
{
    int b;
    float a;
    cin>>a;
    b=a;
    cout<<b;
    return 0;
}