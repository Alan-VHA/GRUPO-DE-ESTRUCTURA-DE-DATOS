
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include "Arreglo.h"
#include "Arreglo.cpp"
using namespace std;
int main()
{
    int tamanio;

    printf("Ingrese el tamanio del arreglo: ");
    scanf_s("%d",&tamanio);


    int* vector = new int[tamanio];
    Burbuja<int> bubble;
    bubble.encerar(vector,tamanio);
    bubble.ingresar(vector,tamanio);
    printf("\nArreglo Desordenado: \n");
    bubble.imprimir(vector,tamanio);

    bubble.ordenar(vector,tamanio);
    printf("\nArreglo Ordenado: \n");
    bubble.imprimir(vector,tamanio);
    printf("\n\n");

    system("pause");
    return 0;
   
    
    

}




