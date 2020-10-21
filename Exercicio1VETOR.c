//Construir um algoritmo que leia 5 números inteiros e armazene em um
//vetor.Depois da leitura de todos os números exibi - los um a um na tela.

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