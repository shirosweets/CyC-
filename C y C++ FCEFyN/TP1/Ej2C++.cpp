*/
Realice un programa en C++ que devuelva el valor del área de una esfera, solicitando al usuario que ingrese el radio y muestre por pantalla área. No utilice funciones de librería en cálculo. 

Nota: a PI la definiremos como una  constante double con el valor de  3.141592653589793.

La salida deberá producir el despliegue: 

Area de la esfera: x.x

donde x.x es el valor calculado por el programa, a partir del valor de radio ingresado.

Ejemplo de ejecución:

Ingrese el radio: 2.4

Área de la esfera:  72.3823
*/

// Codigo del ejercicio

#include<iostream>
using namespace std;
const double PI = 3.141592653589793;

int main()
{
    float r, a, r2;
    cin>>r;
    r2=r*r;
    a=4*PI*r2;
    cout<<"Area de la esfera: "<<a<<endl;
    return 0;
    
}