//Elaborar um algoritmo que leia 20 números, calcule a média entre eles e
//exiba os números que forem maior que a média.


#include <stdio.h>
#include <conio.h>

int num[20], i, soma = 0;
float media;

int main() 
{

	for (i = 0; i < 20; i++) 
	{
		printf("\nDigite os numeros: ");
		scanf_s("%i", &num[i]);

		soma += num[i];
		
	}


	media = soma / i;
	printf("\nMedia dos valores e: %.2f", media);

	for (i = 0; i < 20; i++) 
	{
		if (num[i] > media) 
		{
			printf("\n\nNumeros maiores que a media sao: %i", num[i]);
		}
	}


}