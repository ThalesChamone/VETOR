/*Elabore um algoritmo que leia os valores de um vetor de tamanho 5 e
que em seguida gera um segundo vetor na ordem inversa do primeiro
vetor*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int i, vet[5];

int main() {
	for (i = 0; i < 5; i++)
	{
		printf("Digite valores: ");
		scanf_s("%i", &vet[i]);
	}
	for (i = 5; i > 0; i--) 
	{
		printf("\nVetores em ordem inversa: %i", vet[i-1]);
	}

}