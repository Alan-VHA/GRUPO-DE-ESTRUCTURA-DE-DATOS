#include "Arreglo.h"
using namespace std;

void Burbuja::encerar(int *vec, int tam) {//parametriza el arreglo dinamico y el puntero
	for (int i = 0; i < tam; i++) { //recorre desde 0 hasta el tamanio
		*(vec + i) = 0;
	}
}


void Burbuja::ingresar(int *vec, int tam) {
	for (int i = 0; i < tam; i++) {
		printf("Ingresar valor: ");
		scanf("%d", *(&vec)+ i);//para ingresar, haga referencia a la direecion y asigne un valor al puntero (int *p -> p = 4 no valido)
	}
}


void Burbuja::imprimir(int *vec, int tam) {
	cout << "Arreglo: { ";
	for (int i = 0; i < tam; i++) {
		printf("%d - ", *(&(*vec)));// *vec obtiene el valor del puntero, &(*vec) hace referncia a la direccion de memoria donde se encuentra su valor ,
		*(vec++);
	}
	cout << " }";
}


void Burbuja::ordenar(int *vec, int tam) {
	int aux, vueltas = 0;
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam-1; j++) {
			if (*(vec+j) > *(vec + j + 1)) {
				aux = *(vec+j);
				*(vec + j) = *(vec + j + 1);
				*(vec + j + 1) = aux;
			}
		}
		vueltas++;
	}
	cout << "\nEl numero de vueltas realizadas es: " << vueltas << "\n";
}


