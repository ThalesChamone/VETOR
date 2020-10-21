/*Construir um algoritmo que leia 10 números reais e armazene em um
vetor. Depois do preenchimento total, percorrer esse vetor uma vez
procurando pelo maior elemento.*/

#include <stdio.h>
#include <conio.h>

float vet[10], maior;
int i;

int main() {
	for (i = 0; i < 10; i++)
	{
		printf("Digite valores aleatorios: ");
		scanf_s("%f", &vet[i]);
	}
	maior = vet[0];
	for (i = 0; i < 10; i++) 
	{
		if (vet[i] > maior) 
		{
			maior = vet[i];
		}
	}
	
	printf("\nMaior valor do vetor eh: %.2f\n", maior);

}