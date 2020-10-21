//Escreva um algoritmo que leia um vetor de 20 posições e mostre - o.Em
//seguida, troque o primeiro elemento com o último, o segundo com o
//penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente.
//Mostre o novo vetor depois da troca.

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int vet[20], i, conversor;


int main() 
{
	for (i = 0; i < 10; i++) 
	{
		printf("Valores aleatorios: ");
		scanf_s("%i", &vet[i]);
	}
	for (i = 0; i < 10; i++) 
	{
		printf("Vetor: %i\n", vet[i]);
	}
	for (i = 0; i < 5; i++) 
	{
		conversor = vet[i];
		vet[i] = vet[10 - i];
		vet[10 - i] = conversor;
	}
	for (i = 0; i < 10; i++) 
	{
		printf("\nVetor: %i", vet[i+1]);
	}
	


}