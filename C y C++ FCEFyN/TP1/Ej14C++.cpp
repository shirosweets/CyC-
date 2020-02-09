/*
Escriba, compile y ejecute un programa en C++ que le pida al usuario que ingrese un número cualquiera pero se guarde en memoria como una variable  entera y el programa devuelva el triple de dicho número más 20, guardándolo en otra variable entera. Imprima por pantalla el entero generado a partir del ingresado.

La salida deberá producir el despliegue: 

El triple del nùmero + 20 es: x

donde x es el valor tomado en memoria, a partir del valor ingresado multiplicàndolo por tres y sumàndole 20.

Ejemplo de ejecución:

Ingrese un nùmero:  342.56

El triple del nùmero + 20 es: 1046 
*/


#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a;
    b=(a*3)+20;
    cout<<b;
    return 0;
}