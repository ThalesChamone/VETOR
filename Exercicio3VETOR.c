//Elaborar um algoritmo que leia a idade de 10 pessoas e informa quantas
//pessoas tem idade maior que a idade média desta turma.


#include <stdio.h>
#include <conio.h>

int i, idade[10], soma = 0;
float media;

int main() 
{
	for (i = 0; i < 10; i++) 
	{
		printf("\nDigite as idades das pessoas: ");
		scanf_s("%i", &idade[i]);

		soma = soma + idade[i];
	}

	media = soma / i;
	printf("\nMedia das idades e: %.2f", media);

	for (i = 0; i < 10; i++) 
	{
		if (idade[i] > media) 
		{
			printf("\n\nAs idades maiores que a media sao: %i", idade[i]);
		}
	}

	
}