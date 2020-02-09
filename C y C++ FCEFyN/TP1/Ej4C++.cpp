/*
Escriba, compile y ejecute un programa en C++ que le pida al usuario que ingrese un número de coordenadas (x,y) y el mismo determine si en dicho número su valor de y está  sobre  la recta y=ax+b.

La salida por pantalla  deberá producir el despliegue:

(x,y) n esta sobre la recta y=ax+b

Donde n valdrá cero o 1 si en número ingresado de coordenada y está  sobre la recta

Ejemplo de ejecución:

Ingrese a: 2
Ingrese b: 5

Ingrese x: 5
ingrese y: 2

(2,5) 1 con respecto a la recta y=2x+5
*/

#include <iostream>

using namespace std;

int main ()
{
    int x, y, a, b;
    
    
    cout << "Ingrese a: ";
    cin >> a;
    
    cout << "Ingrese b: ";
    cin >> b;
    
    cout << "Ingrese x: ";
    cin >> x;
    
    cout << "Ingrese y: "<<endl;
    cin >> y;
    
    if ( y == a*x + b )
        cout << "("<<x<<","<<y<<")" " 1 con respecto a la recta y="<<a<<"x+"<<b;
    else
        cout << "("<<x<<","<<y<<")" " 0 con respecto a la recta y="<<a<<"x+"<<b;
        
    return 0;
}