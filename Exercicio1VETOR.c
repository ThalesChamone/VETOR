//Construir um algoritmo que leia 5 n�meros inteiros e armazene em um
//vetor.Depois da leitura de todos os n�meros exibi - los um a um na tela.

#include <stdio.h>

int num[5];

int main() {
	for (int i = 0; i < 5; i++)
	{


		printf("Informe um numero para a posicao %i: ", i);
		scanf_s("%i", &num[i]);

	}

	for (int i = 0; i < 5; i++) 
	{
		printf("\nposicao %i = %i", i, num[i]);
		
	}

}