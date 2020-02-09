/*
Realice un programa en C++ que calcule e imprima por pantalla el valor de la expresión:

 m1 mayor que  m2 + d 

 Ingresando los valores de m1, m2  y  d

 La salida por pantalla deberá producir el siguiente despliegue:

Resultado = X

Ejemplo de ejecución:

Valor m1 = 1
Valor m2 = 1
Valor d =    1
Resultado = 0
*/

#include<iostream>
using namespace std;

int main()
{
    float m1, m2, d, x;
    cin>>m1;
    cin>>m2;
    cin>>d;
    x=m1>m2+d;
    cout<<"Resultado = "<<x;
    return 0;
}