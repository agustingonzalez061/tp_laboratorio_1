#include <stdio.h>
#include <stdlib.h>

float PedidoNum (void)
{
    int esNum;
    float Numero;

    printf("Ingrese el numero: \n");
    esNum=scanf("%f", &Numero); //Valida que sea un numero
    fflush(stdin);

    while(esNum == 0)
    {
        printf("No es un numero, por favor, ingrese un numero: \n");
        esNum=scanf("%f", &Numero);
        fflush(stdin);
    }
        return Numero;
}

int Entero (float a) //validacion si un numero es entero o con decimal
{
    int numEntero = a;
    float numDecimal = a;
    if ((numEntero - numDecimal) == 0)
        return 1;
    else
        return 0;
}

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

unsigned long int factorial (float a)// operacion de factorial
{
    int i; //contador
    unsigned long int facto = 1; //unsigned long int ya que el resultado es amplio.

    if (Entero ( a ) == 0)//si el numero contiene decimales devuelve un mensaje de error
        printf("No se puede factorear numeros con decimales, solo numeros del 0 al 12\n");

    else if (a >= 13 || a < 0) //Compruebo que el numero no sea negativo o mayor a 12
        printf("No se puede factorizar numeros mayores a 12 o menores a 0\n");

    else {
    for (i = a; i> 0; i -- ) // operacion para factoriazar
    {
        facto = facto * i;
    }
    printf ("El resultado del factorial es = %lu\n", facto);
    }
    return facto;// Devuelvo el valor facto
}

