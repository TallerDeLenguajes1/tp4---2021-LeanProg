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

void cargarTareas(Tarea **vec_t,int cant);
void mostrar(Tarea **vec_mostrar,int cant);
void tareasrealizadas(Tarea**VEC_1,Tarea **VEC_2,int cant);
int main(){
        int cantidadTareas;
        
        printf("\nPor favor ingrese cantidad de tareas: ");
        scanf("%d",&cantidadTareas);

        Tarea **vec_tarea=(Tarea**)malloc(sizeof(Tarea*)*cantidadTareas);
        Tarea **vec_realiza=(Tarea**)malloc(sizeof(Tarea*)*cantidadTareas*1);
       
        cargarTareas(vec_tarea,cantidadTareas);
        mostrar(vec_tarea,cantidadTareas);
        tareasrealizadas(vec_tarea,vec_realiza,cantidadTareas);




return 0;
}


void cargarTareas(Tarea**vec_t,int cant){
    
   // printf("cantidad:%d",cant);
   // printf("tamaño del vector: %d",sizeof(vec_t));
    for (int i = 0; i < cant; i++)
    {
        
                vec_t[i]=(Tarea*)malloc(sizeof(Tarea)*1);
                for (int j= 0; j < 1; j++)
                {
                    /* code */
                    vec_t[i][j].Duracion=rand()%100-10;
                    (vec_t[i][j]).TareaID=i+1;
                    printf("\ningrese la descripcion para la tarea %d :",i+1);
                    (vec_t[i][j]).Descripcion=(char*)malloc(sizeof(char)*20);
                    fflush(stdin);
                    gets((vec_t[i][j]).Descripcion);
                }
                
                
             
    }
    

}


void mostrar(Tarea **vec_mostrar,int cant){
        for (int i = 0; i < cant; i++)
        {
            /* code */
            for (int j = 0; j < 1; j++)   
             {
                /* code */
                printf("\nId Tarea: %d",vec_mostrar[i][j].TareaID);
                printf("\nDescripcion: %s",vec_mostrar[i][j].Descripcion);
                printf("\nDuracion: %d",vec_mostrar[i][j].Duracion );


            }
            
        }
        

}


void tareasrealizadas(Tarea**VEC_1,Tarea **VEC2,int cant){
        int valor;
        for(int i=0;i<cant;i++){
               for (int j = 0; j< 1; j++)
               {
                   /* code */
                    printf("la tarea %d se realizo? presione 1 si se realizo sino presione 0 ",VEC_1[i][j].TareaID);
                    scanf("%d",&valor);
                    if(valor==1){
                        
                        VEC2[i][j]=VEC_1[i][j];
                        VEC_1[i][j]=NULL;
                       
                    }else{
                         VEC2[i][j]=NULL;
                           
                    }
               }
                

        }
}