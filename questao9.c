#include <stdio.h>

int main(int argc,char** argv)
{

	int a, cont, div;
	div = 0;
	cont = 1;

	printf("digite um número: \n");
	scanf("%d",&a);

	while(cont<=a)
	{
		a/cont;

		if((a%cont)==0)
		{
			div = div + 1;
		}
		cont = cont + 1;
	}

	if(div==2)
	{
		printf("E um número primo\n");
	}
	else
	{
		printf("Não é um número primo\n");
	}

	return 0;
}


