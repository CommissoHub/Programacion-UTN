#include <iostream>
using namespace std;

     int numero;  // declaracion es de forma GLOBAL --- localmente dentro de calculo.
    int arreglo []= {};
    int sumador=0;
    int contador=0;

void introducir(int num) // no devuelven nada  - SUBPROGRAMA
{


/*
    int numero, contador,sumador;  // declaracion es de forma local --- localmente dentro de calculo.
    int arreglo []= {};
    sumador=0;
    contador=0;
*/

do
{
    cout << "Introduzca un numero mayor que 0 y menor que 100: ";
    numero = num; 
    cout << endl;
}

    while(numero < 0 || numero > 100);
    // La condicion controla el intervalo establecido.
    //Controla que no entren numeros con diferencia inferior a ocho hasta 100 y no superior.

}

void calculo() 
{
/*
    int numero, contador,sumador;  // declaracion es de forma local --- localmente dentro de calculo.
    int arreglo []= {};
    sumador=0;
    contador=0;
*/
for( int i = numero;i <=100; i= i + 20)
{
    sumador = sumador + i;
    arreglo[i] = sumador;
    contador = contador + 1;
    cout << i << " , " ;
}

cout <<endl; 

for(int j= numero;j <=100; j= j + 20)
{
    cout <<  arreglo[j] << " , " ;

}

cout << "\nEsta es la suma: " << sumador << endl;
cout << "El numero total del contador saltando en 20 posiciones hasta 100 es: " << contador-1 << endl;

}


    
int main()
{
    //hacemos la llamada a la funcion introducir
    introducir ( 5 ); // estoy llamando a introducir . y le estoy pasando un parametro !.
    calculo ();  //llamo a calculo

}