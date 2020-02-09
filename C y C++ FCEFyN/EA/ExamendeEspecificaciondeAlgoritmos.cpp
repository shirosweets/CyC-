/*
// ************************************************************

//Lectura: 10 puntos

//Validación de entrada: 15 puntos

//Función 1: 15 puntos

//Función 2: 20 puntos

//Función 3: 20 puntos

//Imprimir: 10 puntos

//Principal: 10 puntos

// ************************************************************

Mantenga la estructura, definiciones, declaraciones y prototipos indicados a continuación. Coloque en el encabezado  la plantilla con sus datos personales.

Se pide hacer un programa en C++ que realice las siguientes tareas, las cuales son bloques de procesos de los algoritmos usados en Tecnologías Inteligentes de Explotación de Información (KDD): 

1º Que permita al usuario ingresar desde el teclado los valores  de 'Matriz', un arreglo de dimensión n*n validando la entrada en tamaño del arreglo (menor que 50*50) y en los valores de sus elementos que deben estar comprendidos entre 0 (cero)  y 100 (cien). 

2º Que, mediante la función 'Perimetro’  recorra el perímetro del arreglo sumando los valores positivos mayores o iguales a 50 que va encontrando y contándolos (esta condición no es argumental en KDD). La función usa transmisión de parámetros por referencia para el registro de los dos valores hallados. -Función 1-

3º Que, mediante la función ‘EncontrarMáx’ recorra la diagonal principal para hallar el valor mayor y su posición.  -Función 2-

4º Que, mediante la función ‘Evoluciona’, actualice  'Matriz' dividiendo a la parte derecha de la fila hallada en el ítem 3° por el valor Suma calculado en el ítem 2° y a toda la triangular inferior del arreglo por el valor hallado en el ítem 3°.   -Función 3-

5º Que muestre, cada vez que regresa de una función, los resultados requeridos para esa tarea.


Prototipos de funciones a utilizar: 

Función 1: 	void Perimetro (int [N] [N], int, int&, int&);

Función 2:	void EncontrarMax (int [N] [N], int, int&, int&);

Función 3:	void Evoluciona (int [N] [N], int, int, int, int);

IMPORTANTE: No incluya en ellas operaciones de entrada/salida, debe hacerlo en el programa principal.   Defina el nombre simbólico N, no utilice variables globales

Exito!

*/

#include <iostream>
#include <iomanip>
using namespace std;
/*
Alumna: Valentina Solange Vispo.
Matricula/DNI: 42.475.060
*/

const int N=50;
void cargar_matriz (int x, int matrizv[N][N]);
void Perimetro (int [N] [N], int, int&, int&);
void EncontrarMax (int [N] [N], int, int&, int&);
void Evoluciona (int matriz_Evo[N][N], int a, int b, int c, int d);
void mostrar_matriz (int tamano_matrizp, int matrizp[N][N]);

int main ()
{
	int matriz[N][N], suma1=0, contar=0, max, posicion;
	int matriz_peri[N][N], matrizEvo [N][N], tamano_matriz=0;
	cout<<"Ingrese la dimension que desea para el arreglo: ";
	cin>>tamano_matriz;
	while (tamano_matriz<0 || tamano_matriz>50)
	{
		cout<<" Ingreso un valor de dimension invalido!!";
		cout<<endl<<" Ingrese un valor mayor a 0 y menor a 50: "<<endl;	
		cin>>tamano_matriz;
	}
	//int matrizv[tamano_matriz][tamano_matriz];
	cargar_matriz(tamano_matriz, matriz);	
	mostrar_matriz (tamano_matriz, matriz);
	Perimetro (matriz, tamano_matriz, suma1, contar);
	cout<<endl<<"La suma de los valores del perimetro de la matriz es igual a: "<<suma1;
	cout<<endl<<"Y la cantidad de elementos que se sumaron fueron: "<<contar;
	EncontrarMax (matriz, tamano_matriz, max, posicion);
	cout<<endl<<"El max es: "<<max<<" y la posicion de fila en el arreglo es: "<<posicion<<endl;
	//matrizEvo=matriz;
	// Evoluciona (int matriz_Evo [N][N], int a, int b, int c, int d)
	//Evoluciona (matriz_Evo, suma1, contar, max, posicion);
}

// Definiciones de Funciones

void cargar_matriz(int x, int matrizv[N][N]) // Carga la matriz;
{
	for (int i=0; i<x; i++) // Recorre filas del arreglo;
	{
		for (int j=0; j<x; j++) // Recorre columnas del arreglo;
		{

		cout<<endl<<"Ingrese el elemento "<<"("<<i<<","<<j<<") (fila "<<i<<" y columna ";
		cout<<j<<"): ";
		cin>>matrizv[i][j];
		while (matrizv[i][j]<0 || matrizv[i][j]>100)
		{
			cout<<" Ingreso un valor invalido!!";
			cout<<endl<<" Ingrese un valor mayor a 0 y menor a 100: "<<endl;	
			cin>>matrizv[i][j];
		}
		}
	}
}

void mostrar_matriz (int tamano_matrizp, int matrizp[N][N]) // Muestra la matriz en consola
{
	for (int i=0; i<tamano_matrizp; i++)
	{
		cout<<endl;
		for (int j=0; j<tamano_matrizp; j++)
		{
			cout<<setw(3)<<matrizp[i][j];
		}
	}
}

// Funcion 1
void Perimetro (int matriz_perimetro[N][N], int tamano, int&suma1, int&contar)
{
	// Recorre el perimetro de la matriz
	for (int i=0; i<tamano; i++) // 0-2
	{
		for (int j=0; j<tamano; j++) // 0-2
		{
			if (i==j && j!=0 && j+1!=tamano)
			{
				cout<<endl;
			}
			else
			{
				suma1+=matriz_perimetro[i][j];
				contar+=1;
			}
		}
	}
}

// Funcion 2
void EncontrarMax (int matriz2[N][N], int tamano, int&max, int&posicion)
{
	max=matriz2[0][0];
	//int posicion[tamano];
	//Recorrer la diagonal principal
	for (int i=0; i<tamano; i++)
	{
		for ( int j=1; j<tamano; j++)
		{
			if (i==j)
			{
				if (matriz2[i][j]>max)
				{
					max=matriz2[i][j];
					posicion=j;
				}
				posicion=j;
			}
		}
	}
} 

// Funcion 3
/*
void Evoluciona (int matriz_Evo [N][N], int a, int b, int c, int d)
					// (matriz_Evo, suma1, contar, max, posicion)
{
	matriz_Evo/(suma*
}  */


// Copiado y pegado (ignorar)
	/*for (int i=0; i<tamano_matriz; i++)
	{
		cout<<endl;
		for (int j=0; j<tamano_matriz; j++)
		{
			cout<<setw(3)<<matriz[i][j];
		}
	}*/
	
	
	
	///// NOTA FINAL 7