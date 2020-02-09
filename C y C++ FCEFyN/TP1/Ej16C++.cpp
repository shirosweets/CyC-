/*
Escriba, compile y ejecute un programa en C++ que ingrese un número entero y guarde en un tipo de variable

de tal modo que cuando esta variable se imprima muestre un número decimal. 

La salida deberá producir el despliegue: 

Decimal en Memoria: x.x

donde x.x es el valor tomado en memoria, a partir del valor entero ingresado.

Ejemplo de ejecución:

Ingrese un entero:  3

El decimal en memoria:  3.0
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int b;
    float a;
    cin>>b;
    a=b;
    cout<<fixed<<a;
    return 0;
    //dar formato para que haya 3 lugares desp de la coma
}