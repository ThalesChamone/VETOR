/*Utilizando vetor construa um algoritmo que leia o peso de 10 pessoas.
Calcule e escreva a média dos pesos das 10 pessoas*/

#include <stdio.h>
#include <conio.h>

int i;
float peso[10], soma = 0, media;

int main() {
	for (i = 0; i < 10; i++) 
	{
		printf("\nDigite o peso das pessoas em KG separado por ponto: ");
		scanf_s("%f", &peso[i]);
		soma += peso[i];
	}

	media = soma / i;

	printf("\nMedia dos pesos das pessoas eh: %.2f\n", media);
}