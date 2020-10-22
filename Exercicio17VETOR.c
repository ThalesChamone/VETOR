//Considere uma escola técnica com 25 cursos.Construa um algoritmo
//que leia o nome do curso e o valor da mensalidade.O algoritmo também
//deverá calcular e exibir :
//● Qual o curso mais barato da escola.
//● Qual é a diferença do valor mensalidade do curso mais barato em
//relação à mensalidade média da escola.


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int i;
float soma = 0, media, menorMENSALIDADE = 999, valorBARATO = 999, mensalidade[25], diferenca;
char cursos[25][250], cursoBARATO[50];



int main() {
	setlocale(LC_ALL, "Portuguese");

	
	for (i = 0; i < 3; i++)
	{
		printf("\nDigite nome do curso: ");
		scanf_s("%[^\n]s", &cursos[i], 250);
		getchar();
		
		printf("\nValor mensalidade: ");
		scanf_s("%f", &mensalidade[i]);
		getchar();

		if (mensalidade[i] < menorMENSALIDADE)
		{
			menorMENSALIDADE = mensalidade[i];
			cursoBARATO[50] = strcpy_s(cursoBARATO, 50, cursos[i]);
		}
		if (mensalidade[i] < valorBARATO) 
		{
			valorBARATO = mensalidade[i];
		}
		
		soma += mensalidade[i];
		
	}
	media = soma / i;
	diferenca = media - valorBARATO;
	

	printf("\nMedias das mensalidades é: %.2f\n", media);
	printf("\nCurso mais barato é: %s\n", cursoBARATO);
	printf("\nDiferença entre curso mais barato e média é: %.2f\n", diferenca);

}


