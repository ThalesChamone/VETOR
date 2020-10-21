//Escreva um algoritmo que leia e mostre um vetor de 20 números.A
//seguir, conte quantos valores pares existem no vetor.


#include <stdio.h>
#include <conio.h>
#include <locale.h>

int num[20], i, par;

int main() {

	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 6; i++) 
	{
		printf("\nDigite 20 números aleatórios: ");
		scanf_s("%i", &num[i]);
	
		if (num[i] % 2 == 0) 
		{
			par++;
		}
	}


	printf("\nNúmero de valores pares é: %i", par);



}
