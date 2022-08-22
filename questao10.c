#include <stdio.h>

int main(int argc,char** argv)
{

	int num, i, j, valid, primo;
	i = 1;
	valid = 0;

	printf("Digite o número de valores: \n");
	scanf("%d",&num);

	printf("Números primos entre 1 e %d: ",&num);

	while(i<=num)
	{
		if(i==1)
		{
			primo = 0;
		}
		else if(1==2)
		{
			primo = 1;
		}
		else
		{
			j = 2;
		}
		while(j<i)
		{
			valid++;
			if(i%j==0)
			{
				primo = 0;
				break;
			}
			else
			{
				primo = 1;
			}
			j++;
		}
	}
	if(primo==1)
	{
		printf("\n%d",i);
	}

	i++;
	}

	printf("\n");

	printf("Divisões: %d",valid);

	return 0;
}

