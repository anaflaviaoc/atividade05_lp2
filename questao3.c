/*

Ágatha Lemos Batista - 2115200001 (athy2003)
Ana Flávia Oliveira Candido - 2015090057 (anaflaviaoc)
Carlos Flávio de Lima Maia - 1915120007 (cmaia7)
Carlos Rodrigo Santos da Silva - 2015090002 (zCarlosRodrigo)
Cassiel Stavros de Melo Dutra - 2115310005 (cassiel-st4v0rs)
Emilly Gabrielly de Freitas Lima - 2115200061 (gaby1316)

*/

#include<stdio.h>

int main (int argc, char** argv)
{

	int impar, i = 25;

	printf("Os números ímpares entre 1 e 50 são: ");

	while(i>=1)
	{

		impar = 2*i-1;
		printf("%d ", impar);
		i--;

	}

	return 0;

}
