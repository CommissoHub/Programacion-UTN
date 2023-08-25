#include <iostream>
using namespace std;

//Antes del int main la struct

struct Libro 
{
    string titulo;
    string autor;
    int anio;
    int criticas[3];
};

//------------  ACA TENEMOS HECHA LA STRUCT  ------------ 

void llenarLista (Libro arr[], int longitud, int& cant); //
void ingresarLibro(Libro& libro);                          //
void mostrar(Libro arr[], int cant);                     // 
void buscarPorAutor(Libro arr[], int cant);              // Prototypes
double promedio(int arr[], int longitud);               //
double promedioGeneral(Libro arr[], int cant);           //
                                                           //
int main() 
{
     int max_libros = 100;
    Libro lista[max_libros];
    int cant_libros = 0;  //Para recorrer hasta los libros que tengo y no si o si los 100 lugares
    llenarLista(lista, max_libros, cant_libros);
    mostrar(lista, cant_libros); // mostramos la lista que llenamos en la linea anterior
    cout << "El promedio general es --> " << promedioGeneral(lista, cant_libros) << endl;
    buscarPorAutor(lista, cant_libros);
    return 0;
}

void ingresarLibro(Libro & libro){

    cout<<"Titulo\n";
    cin>>libro.titulo;

    cout<<"Autor\n";
    cin>>libro.autor;

    cout<<"Año\n";
    cin>>libro.anio;

    for(int i=0; i<3; i++){
        cout<<"Criticas\n";
        cin>>libro.criticas[i];
    }
}

void llenarLista(Libro arr[], int longitud, int & cantidad){

    char opcion= 'n';
    bool sigue=true;
    do{
        if (cantidad<longitud){
            Libro nuevo;
            ingresarLibro(nuevo);
            arr[cantidad]=nuevo;
            cantidad++;
        }
        else{
            cout<<"Lleno"<<endl;
            sigue=false;
        }
        if(sigue){
            cout<<"Igrese 's' o 'n'"<<endl;
            cin>>opcion;
        }
    }while(opcion=='s' || opcion=='s');
}

void mostrar(Libro arr[], int cantidad){
    for(int i=0; i<cantidad; i++){
        cout<<"Titulo"<<arr[i].titulo<<endl;
        cout<<"Autor"<<arr[i].autor<<endl;
        cout<<"Año"<<arr[i].anio<<endl;
        cout<<"Promedio criticas"<< promedio(arr[i].criticas, 3)<<endl;
    }
}

void buscarPorAutor(Libro arr[], int cantidad){
    string busqueda;
    bool bandera=false;
    cout<<"Nombre a buscar"<<endl;
    cin>>busqueda;
    for(int i=0;i<cantidad;i++){
        if (busqueda ==arr[i].autor){
            cout<<"Titulo"<<arr[i].titulo<<endl;
            cout<<"Auror"<<arr[i].autor<<endl;
            cout<<"Año"<<arr[i].anio<<endl;
            cout<<"Promedio critica"<<promedio(arr[i].criticas, 3)<<endl;
        }
    }
    if(!bandera){
        cout<<"No se encontro..."<<endl;
    }
}

double promedio(int arr[], int longitud){
    
    double suma=0;
    for(int i=0;i<longitud;i++){
        suma+=arr[i];
    }
    return(suma/longitud);
}

double promedioGeneral(Libro arr[], int cantidad){
    double suma=0;
    for (int i=0; i<cantidad;i++){
        suma+=promedio(arr[i].criticas, 3);
    }
    return(suma/cantidad);
}