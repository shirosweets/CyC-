/*
Escriba, compile y ejecute un programa en C++ que le pida al usuario que ingrese dos variables booleanas (1 o 0) y el programa muestre el resultado de realizar la conjunción (and) de la negación de las operaciones de conjunción (and) y disyunción (or) entre las variables:

La salida por pantalla deberá producir el despliegue:

Resultado de operar las variable es = X

Dónde x es el valor que surge de operar las variables booleanas de entrada, según lo solcitado anteriormete

Ejemplo de Ejecución:

Ingrese booleano 1: 0
Ingrese booleano 2: 0

El Resultado de operar las variables booleanas es: 1
*/

#include<iostream>
using namespace std;

int main()
{
    bool a, b;
    cin>>a;
    cin>>b;
    cout<<(!(a&&b)&&!(a||b));
    return 0;
}