/*Escreva um vetor de 300 posições e carregue-o com elementos gerados
com a função randi. Mostre quantos elementos são pares e quantos são
ímpares.*/


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
