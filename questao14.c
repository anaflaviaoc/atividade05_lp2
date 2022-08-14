#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	float termo, resultado=0, controlador=1;

	printf("Número de termos:");
	scanf("%d", &n);
	printf("H= ");

	while (controlador<=n)
	{
		termo=(1/controlador);

		if(controlador>1)
		{
			printf("1/%.0f",controlador);
		}
		else
		{
			printf("1");

			if((n-controlador)>0)
			{
				printf("+");
			}
		}
		resultado=resultado+termo;
		controlador++;
	}
	printf("\nResultado de H= %.2f\n", resultado);

	return 0;
}
