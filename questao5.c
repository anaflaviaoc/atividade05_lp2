/*
*/

#include <stdio.h>

int main(int argc, char** argv)

{
	int a;

	do
	{
		printf("Digite um número: ");
		scanf("%d", &a);

		if(a<0 || a>10)
		{
			printf("Valor inválido!\n");
		}
	}
	while(a<0 || a>10);

	return 0;
}
