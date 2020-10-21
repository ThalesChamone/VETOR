/*Dado o nome e a idade de um conjunto de 10 pessoas, elabore um
algoritmo que guarde todos os dados na memória e liste o nome da
pessoa de maior e menor idade.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int idade[10], i, maiorIDADE = 0, menorIDADE = 999;
char nome[10][50], nomeNOVO[50], nomeVELHO[50];

int main() {
	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 3; i++) 
	{
		printf("\nDigite seu nome: ");
		scanf_s("%[^\n]s", &nome[i], 50);
		getchar();

		printf("Digite a idade: ");
		scanf_s("%i", &idade[i]);
		getchar();

		if (idade[i] > maiorIDADE)
		{
			maiorIDADE = idade[i];
			nomeVELHO[49] = strcpy_s(nomeVELHO, 49, nome[i]);

		}
		if (idade[i] < menorIDADE)
		{
			menorIDADE = idade[i];
			nomeNOVO[49] = strcpy_s(nomeNOVO, 49, nome[i]);

		}
	}
	 
	printf("\nNome do mais novo é: %s\n", nomeNOVO);
	printf("\nNome do mais velho é: %s\n", nomeVELHO);


}