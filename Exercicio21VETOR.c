/*Escreva um vetor de 300 posi��es e carregue-o com elementos gerados
com a fun��o randi. Mostre quantos elementos s�o pares e quantos s�o
�mpares.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

int vet[300], i, par, impar;

int main() {
	for (i = 0; i < 300; i++) 
	{
		vet[i] = rand() % 300;
		printf("\n Posicao vetor %i = %i", i, vet[i]);

		if (vet[i] % 2 == 0) 
		{
			par++;
		}
		else 
		{
			impar++;
		}
	}

	printf("\n\nNumero de pares eh: %i", par);
	printf("\n\nNumero de impares eh: %i\n", impar);

}
