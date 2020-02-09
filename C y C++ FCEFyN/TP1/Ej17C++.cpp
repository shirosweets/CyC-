/*
Escriba un programa en C++ que calcule e imprima por pantalla el valor del volumen de un cono. Para ello, solicite al usuario que ingrese dos valores flotantes que describan el radio (r) y la altura del cono (h). A continuación, calcule y muestre por pantalla el volumen solicitado con el siguiente formato:

Volumen del Cono: x.x

donde x.x es el valor calculado para el volumen del mencionado cono.
*/

#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.141592653589793;

int main()
{
    float v, h, r;
    cin>>r;
    cin>>h;
    v=0.3333333333333333*PI*(pow(r,2))*h;
    cout<<"Volumen del Cono: "<<v<<endl;
    return 0;
}