#include "Arreglo.h"
using namespace std;
template <class tipo>
void Burbuja<tipo>::encerar(tipo *vec, tipo tam) {//parametriza el arreglo dinamico y el puntero
	for (int i = 0; i < tam; i++) { //recorre desde 0 hasta el tamanio
		*(vec + i) = 0;
	}
}

template <class tipo>
void Burbuja<tipo>::ingresar(tipo *vec, tipo tam) {
	for (int i = 0; i < tam; i++) {
		printf("Ingresar valor: ");
		scanf_s("%d", *(&vec)+ i);//para ingresar, haga referencia a la direecion y asigne un valor al puntero (int *p -> p = 4 no valido)
	}
}

template <class tipo>
void Burbuja<tipo>::imprimir(tipo *vec, tipo tam) {
	cout << "Arreglo: { ";
	for (int i = 0; i < tam; i++) {
		printf("%d - ", *(&(*vec)));// *vec obtiene el valor del puntero, &(*vec) hace referncia a la direccion de memoria donde se encuentra su valor ,
		*(vec++);
	}
	cout << " }";
}

template <class tipo>
void Burbuja<tipo>::ordenar(tipo *vec, tipo tam) {
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


