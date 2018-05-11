#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
#define TAM 20

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona gente [TAM];
    inicializador(gente,TAM);

    while(seguir=='s')
    {
        opcion = menu();

        switch(opcion)
        {
            case 1://AGREGAR
                system("cls");
                agregarPersona(gente,TAM);
                system("pause");
                //agregar
                break;
            case 2://BORRAR
                system("cls");
                eliminarPersona(gente,TAM);
                system("pause");

                break;
            case 3://IMPRIMIR LISTA ORDENADA
                system("cls");
                ordenar(gente,TAM);
                mostrarPersonas(gente,TAM);
                system("pause");
                break;
            case 4://GRAFICO DE BARRAS
                barras (gente,TAM);
                break;
            case 5:
                seguir = 'n';
                break;
            default:
                printf("Ingrese una opcion que este dentro del menu");
                break;
        }
    }
    return 0;
}
