/*
Escriba un programa en C++ que calcule e imprima por pantalla el valor del área de un cono. Para ello, deberá solicitar al usuario que ingrese dos valores flotantes el radio (r) y el valor de la generatriz (g).  A partir de los valores ingresados, calcule el área del cono y muestre por pantalla el valor resultante con el siguiente formato.

Área del Cono: x.x

donde x.x es el valor calculado para el área del mencionado cono.
*/

#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.141592653589793;

int main()
{
    float r, g, a;
    cin>>r;
    cin>>g;
    //a=pi*r*g+pi*r^2;
    a=(PI*r*g)+PI*pow(r,2);
    cout<<a;
    return 0;
}