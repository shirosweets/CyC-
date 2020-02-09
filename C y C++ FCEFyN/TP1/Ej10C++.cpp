/*
Escriba un programa en C++ que solicite se ingresen dos caracteres y calcule el carácter resultante de la suma de ambos caracteres. Al finalizar, imprima el valor decimal del carácter de la siguiente manera:

Su valor numerico es : xx
Dónde xx un numero decimal entero


Ejemplo de ejecución:

Ingrese primer caracter :
$
Ingrese segundo caracter :
&
Su valor numerico es : 74

--------------------------------
*/

#include<iostream>
using namespace std;

int main()
{
    char a, b;
    int c;
    //cout<<"Ingrese primer caracter: ";
    cin>>a;
    //cout<<"Ingrese segundo caracter: ";
    cin>>b;
    c=a+b;
    cout<<c;
    return 0;
}