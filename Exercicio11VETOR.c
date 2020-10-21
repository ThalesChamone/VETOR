/*Construa um algoritmo que leia 10 números e armazene em um vetor A.
Leia outros 10 números e armazene em um vetor B. Gere um terceiro
vetor onde cada elemento seja a soma dos outros dois elementos.*/

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
		vetC[i] = vetA[i] + vetB[i];
		printf("\nSoma dos vetores no indice %i é: %.2f",i, vetC[i]);
	}

}