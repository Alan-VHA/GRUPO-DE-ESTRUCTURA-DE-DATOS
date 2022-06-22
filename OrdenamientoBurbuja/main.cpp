
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include "Arreglo.h"
#include "Arreglo.cpp"
using namespace std;
int main()
{
	typedef int (WINAPI *Validar_int_NP)(char*);
	Validar_int_NP validar_int_NP;
	HINSTANCE libDLL=NULL;// inicializamos la libreria con Null
	libDLL = LoadLibrary ("ingresar.dll"); //Cargamos la libreria
	validar_int_NP=(Validar_int_NP)GetProcAddress(libDLL,"ingresarDatos_Int_N_P");

    int tamanio;
	tamanio=validar_int_NP("\n Ingrese el tamanio del arreglo:");
	
    /*printf("Ingrese el tamanio del arreglo: ");
    scanf("%d",&tamanio);*/


    int* vector = new int[tamanio];
    Burbuja bubble;
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




