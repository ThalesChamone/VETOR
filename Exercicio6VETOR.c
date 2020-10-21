//Escreva o algoritmo para carregar um vetor de 10 posições e mostre os
//elementos do vetor na ordem invertida utilize o comando Enquanto.


#include <stdio.h>
#include <conio.h>
#include <locale.h>


int i, num[10];


int main() {

	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 10; i++) 
	{
		printf("Digite 10 valores: ");
		scanf_s("%i", &num[i]);
	}

	while (i) 
	{
		i--;
		printf("\nImprimindo vetor em ordem invertida %i : %i",i,num[i]);
	}
	
}