//Escreva um algoritmo para carregar um vetor com 10 posi��es e mostre
//o elemento que est� na 5a posi��o.


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
			printf("\nValor que esta na posicao 5 �: %i", num[5]);
		}

	}
}
