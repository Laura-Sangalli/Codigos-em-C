#include <stdio.h>

int main(void)
{
    int anterior, atual, proximo, i, j;

    printf("1 => 1\n");
    for(i=1; i<=20; i++)
    {
        anterior = 1;
        atual =1;

        printf("%d => %d  %d  ", i+1, anterior, atual);
        for(j=2; j<=i; j++)
        {
            proximo = anterior + atual;
            printf("%d  ", proximo);
            anterior = atual;
            atual = proximo;

        }
        printf("\n");
    }

    return 0;
}
