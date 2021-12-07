/*
    Escriba un programa en C que dada la siguiente declaración de estructuras:

    typedef struct {
        char nombre[40];
        char pais[25];
    }DatosPersonales;

    typedef struct{
        DatosPersonales datos;
        char deporte[30];
        int numMedallas;
    }Deportista;

    1. Realice una función que lea de un archivo de TEXTO la información de los deportistas.
    2. Realice una función que reciba los deportistas leídos y calcule e imprima el número de medallas por
    deporte.

    Nota: Dentro del código existe un arreglo que contiene los nombres de todos los deportes que existen en el archivo.

        char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
*/

#include <stdio.h>
#include <string.h>
#define N 5
#define M 4


typedef struct {

    char nombre[40];
    char pais[25];

}DatosPersonales;

typedef struct{
    DatosPersonales datos;
    char deporte[30];
    int numMedallas;

}Deportista;


void Desportistas(Deportista d);

void calculaMedalla(Deportista m );

int main()
{
    Deportista deportistas[100];
    // Puede cambiar la declaración de este arreglo a donde lo considere necesario
    char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};


Desportistas(deportistas);
calculaMedalla(deportistas);

    return 0;
}



void Desportistas(Deportista d)
{

    FILE *archivo;
    char nombres;
    int cerrado;
    archivo = fopen("deportistas.txt","r"); //abriendo archivo


    if(archivo==NULL)
    {
        printf("No se pudo abrir el archivo: ");

    }
    else
        {


    printf("EL contenido del archivo es: ");
    printf(archivo,"\n");

    while(feof(archivo)==0)
        {
        nombres=fgetc(archivo);
        printf("%s",nombres);
        }
    }

    cerrado = fclose(archivo);

if(cerrado==EOF)
{
    printf("No se cerro bien el archivo");
}


}



void calculaMedalla(Deportista m )
{

     char nombres;
    int cerrado;
    archivo = fopen("deportistas.txt","r"); //abriendo archivo


    if(archivo==NULL)
    {
        printf("No se pudo abrir el archivo: ");

    }

    int i;
    for(i=0;i<alumnos;i++)    //i=i+1
    {
        printf("Dime el nombre del Alumno %d: ",i+1);
        scanf("%s",nombre);
       printf("Calificacion: ");
       scanf("%f",&calif[i]);
       printf("\n");
        fprintf(archivo,"alumno:%s  ",nombre);
        fprintf(archivo,"calificacion: %f",calif[i]);
        fprintf(archivo,"\n");


    }

      cerrado = fclose(archivo);

if(cerrado==EOF)
{
    printf("No se cerro bien el archivo");
}


}


