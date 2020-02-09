/*
Escriba, compile y ejecute un programa en C++ que le pida al usuario que ingrese dos números enteros (coordenadas) "x" e "y" y el programa informe con valor "1": Si el punto formado por x e y es interno (incluye perímetro) al rectángulo cuyos vértices son: (0,0) - (4,0) - (0,5) - (4,5), en caso de que sea externo indicar con "0".

Imprima el resultado por pantalla.

La salida deberá producir el deliegue: 

El punto es (0-externo / 1-intero): x

donde x es el valor de verdad calculado por el programa, a partir de los valores ingresados.

Ejemplo de ejecución:

Ingrese X: 1

Ingrese Y: 0

El punto es:   1
*/

#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"Ingrese el valor de y: ";
    cin>>y;
    //Coord. X=0,4,0,4 Y=0,0,5,5
    
    //cout<<"El punto es (0-externo / 1-interno): x"<<;
    
    if (x<=4 && x>=0 && y<=5 && y>=0)
    {
        cout<<"Valor "<<1;
    }
    else
    {
        cout<<"Valor "<<0;
    }
    return 0;
}