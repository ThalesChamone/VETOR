/*Ler dois vetores A e B com 10 elementos cada, construir um vetor C,
onde cada elemento de C seja a subtração do elemento correspondente
de A com B.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int i;
float vetA[10], vetB[10], vetC[10];

int main() {
	setlocale(LC_ALL, "Portuguese");
	for (i = 0; i < 10; i++)
	{
		printf("Valores vetor 1: ");
		scanf_s("%f", &vetA[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("Valores vetor 2: ");
		scanf_s("%f", &vetB[i]);
	}

	for (i = 0; i < 10; i++)
	{
		vetC[i] = vetA[i] - vetB[i];
		printf("\nSoma dos vetores no indice %i é: %.2f", i, vetC[i]);
	}

}