//Escreva um algoritmo que leia e mostre um vetor de 20 n�meros.A
//seguir, conte quantos valores pares existem no vetor.


#include <stdio.h>
#include <conio.h>
#include <locale.h>

int num[20], i, par;

int main() {

	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 6; i++) 
	{
		printf("\nDigite 20 n�meros aleat�rios: ");
		scanf_s("%i", &num[i]);
	
		if (num[i] % 2 == 0) 
		{
			par++;
		}
	}


	printf("\nN�mero de valores pares �: %i", par);



}
