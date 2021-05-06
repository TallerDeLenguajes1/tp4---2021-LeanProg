#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef struct Tarea
{   
    int TareaID;
    char *Descripcion;
    int Duracion;

}Tarea;

typedef struct Nodo
{
     Tarea T;
     Nodo *siguiente;   
}Nodo;

Nodo * crearlistavacia();

int main(){
        int cantidadTareas;
        Nodo *Lista1=crearlistavacia();
        Nodo *Lista2= crearlistavacia();
        printf("\nPor favor ingrese cantidad de tareas: ");
        scanf("%d",&cantidadTareas);

      




return 0;
}

Nodo* crearlistavacia(){
        return NULL;
}
