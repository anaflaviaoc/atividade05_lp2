#include <stdio.h>

int main(int argc,char** argv)
{

	int num, f = 1;

	printf("Digite um n° para ver seu fatorial: \n");
	scanf("%d",&num);

	do
	{
		printf("|%d|",num);
		f = f*num;
		num = num - 1;
	}
	while(num!=0);

	printf("\n O fatorial é:|%d|",f);

	return 0;
}
