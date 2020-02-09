/*
Escriba, compile y ejecute un programa en C++ que devuelva el valor R ; donde a,b, c y d son variables booleanas y R es entera.

R = 6 ((a  AND  b) OR  (c AND  NOT d));      

La salida del programa será:

El valor de verdad de R es: xx

donde xx es el valor calculado por el programa  y x el valor ingresado por el usuario en cada variable booleana

_____________

Ejemplo de ejecución:

Ingrese valor variable booleana a: 1

Ingrese el valor de la variable booleana b: 0
Ingrese el valor de la variable booleana c: 0
Ingrese el valor de la variable booleana d: 1
El valor de verdad de R es: 0
--------------------------------
*/

#include<iostream>
using namespace std;

int main()
{
    bool a, b, c, d;
    int R, op1, op2, op3;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    op1= (a&&b);
    op2= (c&!d);
    op3= op1 || op2;
    R=6*op3;
    //R = 6 ((a  AND  b) OR  (c AND NOT d));  
    //if((a&&b)||(c&!d))
    //    R=6;
    cout<<R;
    return 0;
}