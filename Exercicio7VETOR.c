/*Escreva o algoritmo para carregar um vetor de 10 posições em seguida
gera um vetor com os mesmos elementos do primeiro vetor
multiplicados por 2.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int i, vetA[10], vetB[10];

int main() {

    setlocale(LC_ALL, "Portuguese");

    for (i = 0; i < 10; i++) 
    {
        printf("Informe um número: ");
        scanf_s("%i", &vetA[i]);
    }

    for (i = 0; i < 10; i++) 
    {
        vetB[i] = (vetA[i] * 2);
        printf("\nValor multiplicação: %i", vetB[i]);
    }

   
}