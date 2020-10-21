//Escreva um algoritmo para carregar um vetor com 10 posições e mostre
//o elemento que está na 5a posição.


#include <stdio.h>
#include <conio.h>
#include <locale.h>

int i, num[10];

int main() {
	setlocale(LC_ALL, "Portuguese");
	for (i = 0; i < 10; i++) 
	{
		printf("Digite os valores: ");
		scanf_s("%i", &num[i]);

		
	}

	for (i = 0; i < 10; i++) 
	{

		if (num[i] == num[5])
		{
			printf("\nValor que esta na posicao 5 é: %i", num[5]);
		}

	}
}
