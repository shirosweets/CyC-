/*
Escriba un programa en C++ que calcule e imprima por pantalla el valor de "d" siendo su ecuación d = \sqrt{G \frac{m1 \cdot m2}{F}}

Ingresando los valores de m1 ,m2  y  F;

G es una constante con valor 6,66 x 10-11

La salida por pantalla  deberá producir el despliegue:      (xx.xx indica un número genérico)

Valor de m1 = XX.XX
Valor de m2= XX.XX
Valor de F=    XX.XX
El valor de d es=  XX.XX

Ejemplo de ejecución:

Valor de m1 = 7.32e22
Valor de m2 =5.97e24
Valor de F =  1.96e20

Valor de  d = 3.85e+08
*/

#include<iostream>
#include<cmath>
using namespace std;
const float G = 6.66e-11;

int main()
{
    float m1, m2, F, d, op1, op2;
    cin>>m1;
    cin>>m2;
    cin>>F;
    op1=(m1*m2)/F;
    op2=G*op1;
    d=sqrt(op2);
    cout<<d;
    return 0;
}