/*
*/

#include <stdio.h>
int main(int argc, char** argv)
{
        int soma, media, a, num;

        a=1;
        do
        {
                printf("Digite o %d número: \n", a++);
                scanf("%d", &num);

                soma = soma + num;
        }
        while(a<=5);
        {
                media = soma/5;
                printf("Soma: %d\n", soma);
                printf("Média: %d \n", media);
        }
        return 0;
}
