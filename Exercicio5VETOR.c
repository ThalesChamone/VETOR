//Escreva o algoritmo para carregar um vetor de 10 posições e mostre os
//elementos do vetor.

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int i; n[10];

int main() {
	setlocale(LC_ALL, "Portuguese");
	for (i = 0; i < 10; i++) 
	{
		printf("Digite 10 valores aleatorios: ");
		scanf_s("%i", &n[i]);
	}

	for (i = 0; i < 10; i++) 
	{
		printf("\nValores na posição %i é: %i", i, n[i]);
	}

}
