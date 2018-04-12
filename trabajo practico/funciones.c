#include <stdio.h>
#include <stdlib.h>

float sumar (float a, float b)//operacion de suma
{
    float resultado; //Creo la variable resultado
    resultado = a + b; //La suma de A + B es el valor de resultado
    printf ("El resultado de la suma es = %.2f\n", resultado);
    return  resultado; // Devuelvo el valor de resultado
}
float restar (float a, float b)//operacion de resta
{
    float resultado;//Creo la variable resultado
    resultado = a - b;//La resta de A - B es el valor de resultado
    printf ("El resultado de la resta es = %.2f\n", resultado);
    return  resultado;// Devuelvo el valor de resultado
}

float division (float a, float b)//opeacion de divsion
{
    float resultado;//Creo la variable resultado
    if (b == 0) //valido de que no divida por 0                    {
    {
        resultado = 0;
        printf("No se puede dividir por 0\n");
    }
    else
    {
    resultado = a / b;//La division de A / B es el valor de resultado
    printf ("El resultado de la division es = %.2f\n", resultado);
    }
    return resultado;// Devuelvo el valor de resultado
}

float multiplicar (float a, float b)//operacion de multiplicacion
{
    float resultado;//Creo la variable resultado
    resultado = a * b;//La multiplicacion de A * B es el valor de resultado
    printf ("El resultado de la multiplicacion es = %.2f\n", resultado);

    return  resultado;// Devuelvo el valor de resultado
}

unsigned long int factorial (int a)// operacion de factorial
{
    int i;//creo las variables para llevar a cabo la factoriazacion
    unsigned long int facto = 1;
    if (a >= 13 || a < 0)
    {
        printf("No se puede factorizar numeros mayores a 12 o menores a 0\n");
    }
    else {
    for (i = a; i> 0; i -- ) // operacion para factoriazar
    {
        facto = facto * i;
    }
    printf ("El resultado del factorial es = %lu\n", facto);
    }
    return facto;// Devuelvo el valor facto
}
