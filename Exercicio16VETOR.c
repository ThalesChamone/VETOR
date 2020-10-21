//Em uma cidade do interior, sabe - se que, durante 31 dias do mês de
//outubro, foi feita a coleta de temperatura diariamente pela manhã.
//Elabore um algoritmo que leia os dados e que calcule e escreva :
//● A temperatura média
//● Quantos dias a temperatura foi inferior à temperatura média;
//● Quais os dias do mês nos quais a temperatura foi superior à
//temperatura média;

#include <stdio.h>
#include <conio.h>
#include <locale.h>

float temperatura[31], media, soma = 0, tempINFERIOR = 0, tempSUPERIOR = 0;
int i;

int main() {

	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i < 31; i++) 
	{
		printf("\nDigite as temperaturas: ");
		scanf_s("%f", &temperatura[i]);
		soma += temperatura[i];
	}

	media = soma / i;
	printf("\nMedia das temperaturas é: %.2f", media);

	for (i = 0; i < 31; i++) 
	{
		if (temperatura[i] < media) 
		{
			tempINFERIOR++;
		}
	}

	for (i = 0; i < 31; i++) 
	{
		if (temperatura[i] > media) 
		{
			tempSUPERIOR++;
		}
	}

	printf("\n\nTemperatura superior a media: %.0f", tempSUPERIOR);
	printf("\n\nTemperatura inferior a media: %.0f", tempINFERIOR);
}

