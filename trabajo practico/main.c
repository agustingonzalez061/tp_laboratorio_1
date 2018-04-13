#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    float primero = 0;
    float segundo = 0;
    int opcion = 0;
    char seguir = 's';
    while (seguir == 's')
    {
        printf("1: para ingresar primer numero A = %.2f\n", primero);
        printf("2: para ingresar segundo numero B = %.2f\n", segundo);
        printf("3: Calcular la suma (A+B)\n");
        printf("4: Calcular la resta (A-B)\n");
        printf("5: Calcular la division (A/B)\n");
        printf("6: Calcular la multiplicacion (A*B)\n");
        printf("7: Calcular el factorial (A!)\n");
        printf("8: Calcular todas las operaciones\n");
        printf("9- Salir\n");
        fflush (stdin);
        scanf ("%d" , &opcion);
        switch (opcion)
        {
            case 1: // Operacion de primer numero
                primero = PedidoNum();
                system("cls"); //Uso esta funcion para limpiar pantalla
                break;
            case 2: // Operacion de segundo numero
                segundo = PedidoNum();
                system("cls");
                break;
            case 3:// Operacion de suma
                sumar (primero , segundo); //Llamado de la funcion sumar
                system("pause"); //Uso esta funcion para dar una pausa mientras que el usuario no toque otra tecla
                system("cls");
                break;
            case 4:// Operacion de resta
                restar (primero , segundo); //Llamado de la funcion restar
                system("pause");
                system("cls");
                break;
            case 5:// Operacion de division
                division (primero , segundo); //Llamado de la funcion division
                system("pause");
                system("cls");
                break;
            case 6:// Operacion de multiplicacion
                multiplicar (primero , segundo); //Llamado de la funcion multiplicar
                system("pause");
                system("cls");
                break;
            case 7:// Operacion de factorizacion
                factorial (primero); //Llamado de la funcion factorial
                system("pause");
                system("cls");
                break;
            case 8:// Se realizan todas las operaciones juntas
                sumar (primero , segundo);
                restar (primero , segundo);
                division (primero , segundo);
                multiplicar (primero , segundo);
                factorial (primero);
                system("pause");
                system("cls");
                break;
            case 9:// Operacion de salida
                seguir = 'n';
                break;
            default:
                printf("Ingrese un numero en que este en el menu\n");
        }
    }
    return 0;
}
