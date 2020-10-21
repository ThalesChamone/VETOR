/*Escreva um algoritmo que possua um vetor com 200 posições. Cada
posição do vetor deve ser alimentada por um valor de retorno da função
randi. Mostre o vetor construído.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

int vet[200], i;

//rand() % 100;

int main() {

	for (i = 0; i < 200; i++) 
	{
		vet[i] = rand() % 200;
		printf("\n Posicao vetor %i = %i",i, vet[i]);

	}
	
}