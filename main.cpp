//UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
//NOMBRE: ALAN HERRERA
//TEMA: RECURSIVIDAD
//FECHA: 16/05/22
//FECHA MODIFICADA: 16/05/22
/////////////////////////////////////////
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include "Ingresar.h"
#include "Ingresar.cpp"
#include "recursividad.h"

using namespace std;


int main()
{
	Recursividad p;
    Ingresar* in= new Entero();
    char dato[10];
    int n;	
    strcpy(dato,in->ingresarDatos("Ingrese un numero"));
    fflush(stdin);
    n = atoi(dato);
    for(int i=1;i<=n;i++){
		printf("\nSUMA %d ",p.suma(i));
		printf("factorial = %d",p.factorial(i));
	}
    
    
    return 0;

}

