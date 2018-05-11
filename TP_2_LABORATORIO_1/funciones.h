#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
//ESTRUCTURA DE DATOS DE LA PERSONA
typedef struct {

    char nombre[50];
    int edad;
    int estado;
    long dni;
}EPersona;
//FUNCIONES DE MENU
int menu (void);
//VALIDACIONES
int validarDNI (char dni []);
int validarEdad (char edad []);
int validarNombre (char nombre []);
//FUNCIONES DE INICIALIZACION
void inicializador (EPersona vec[],int TAM);
//FUNCIONES DE BUSQUEDA
int buscarLibre (EPersona vec[], int TAM);//BUSCAR UN LUGAR LIBRE EN EL SISTEMA
int buscarPersona (EPersona vec[], int TAM, long dni);//BUSCA UNA PERSONA TOMANDO COMO PARAMETRO EL DNI
//FUNCIONES DE AGREGAR
void agregarPersona (EPersona vec[], int TAM);
//FUNCIONES DE ELIMINAR
void eliminarPersona (EPersona vec[], int tam);
//FUNCIONES DE MOSTRAR
void mostrarPersonas (EPersona vec[], int tam);
//FUNCIONES DE ORDENAMIENTO
void ordenar (EPersona vec[], int tam);
//FUNCIONES DE GRAFICO DE BARRAS
void barras (EPersona vec[], int tam);

#endif // FUNCIONES_H_INCLUDED
