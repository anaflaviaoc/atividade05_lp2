/*QUESTAO 7*/


#include<stdio.h> 

int main(int argc, char**argv)
{

	int n, par, impar, numero;

	n=1;
	par=0;
	impar=0;

	 printf(" \tPrograma que lê 10 numeros inteiros. \n");

	while(n<=10)
	{
		printf("Digite o %d numero inteiro:", n);
		scanf("%d", &numero);

		n=n+1;
		if(numero%2==0)
		{
			par = par+1;
		}
		else
		{
			impar =impar+1;
		}
	}

	printf("quantidade dos numeros pares: %d \n", par);
	printf("quantidade dos numeros impares: %d \n", impar);

	return 0;
}
