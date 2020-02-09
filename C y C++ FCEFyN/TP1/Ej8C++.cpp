/*
Escriba, compile y ejecute un programa en C++ que devuelva el valor de la operación OR de las variables booleanas a y  b, ingresadas desde el teclado por el usuario. Con este resultado realice una operación lógica  AND, con la variable  booleana  c,  también ingresada desde el teclado por el usuario. Imprima el resultado por pantalla.

La salida deberá producir el despliegue: 

El valor de verdad es: x

donde x es el valor de verdad calculado por el programa, a partir del los valores ingresados.

Ejemplo de ejecución:

Ingrese valor variable booleana a: 1

Ingrese valor variable booleana b: 0

Ingrese valor variable booleana c: 1

El valor de verdad de verdad  es: 1
*/

#include<iostream>
using namespace std;

int main()
{
    bool a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<((a||b)&&c);
    return 0;
}