/*
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int n1, n2, resultado, controlador = 1;

	printf("Digite o número base: ");
	scanf("%d", &n1);
	printf("Digite o número expoente: ");
	scanf("%d", &n2);

	if(n2 == 0)
	{
		resultado = 1;
	}
	else
	{
		while(controlador <= n2)
		{
			if(controlador == 1)
			{
				resultado = n1;
			}
			else
			{
				resultado = resultado * n1;
			}

			controlador ++;
		}
	}
	printf("Resultado: %d\n", resultado);

	return 0;
}
