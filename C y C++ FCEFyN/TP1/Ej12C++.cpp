/*
Escriba un programa en C++ que solicite se ingresen dos caracteres. A continuación, calcule e imprima el caracter resultante de la suma de ambos caracteres tal como se indica a continuación:

El caracter resultado es: c 

Dónde c es el caracter resultante de la suma de ambos caracteres 

Ejemplo de ejecución:

Ingrese primer caracter :
$
Ingrese segundo caracter :
&
El  caracter resultado es: J 

--------------------------------
*/

#include<iostream>
using namespace std;

int main()
{
    char a, b, c;
    cin>>a;
    cin>>b;
    c=a+b;
    cout<<c;
    return 0;
}