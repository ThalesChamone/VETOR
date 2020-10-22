/*Criar um algoritmo que defina um vetor para conter 10 nomes de
candidatos e imprima os nomes das que estão nas posições impares.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int i;
char nome[10][40], nomeimpar[40];

int main() {

	for (i = 0; i < 10; i++) 
	{
		printf("Digite os nomes: ");
		scanf_s("%[^\n]s", &nome[i],40);
		getchar();
	}

	for (i = 0; i < 10; i++) 
	{
		if (i % 2 == 1)
		{
			nomeimpar[40] = strcpy_s(nomeimpar, 40, nome[i]);
			printf("\nNome na posicao impar %i = %s\n", i, nomeimpar);

		}
	}
}