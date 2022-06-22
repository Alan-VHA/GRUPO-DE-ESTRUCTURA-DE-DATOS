#include "pch.h"
#include "CppUnitTest.h"
#include "/OrdenamientoBurbuja/Arreglo.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int tamanio;
			printf("Ingrese el tamanio del arreglo: ");
			scanf_s("%d", &tamanio);
			int* vector = new int[tamanio];

			Burbuja bubble1;
			bubble1.encerar(vector, tamanio);
			bubble1.ingresar(vector, tamanio);
			bubble1.ordenar(vector, tamanio);
			Burbuja bubble2;
			bubble2.encerar(vector, tamanio);
			bubble2.ingresar(vector, tamanio);
			bubble2.ordenar(vector, tamanio);
			Assert::AreEqual(bubble1,bubble2);
		}
	};
}
