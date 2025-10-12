#include <stdio.h>
#include <stdlib.h>
int main (int agrc, char* argv[])

{
    int i, qtd;
    float V[7], soma, media;
    for (i=0; i<=6; i++)
    {
        printf("Digite a %da. temperatura = ", i+1);
        scanf("%f", &V[i]);
        soma = soma + V[i];
    }
    media = soma /7;
    for (i=0; i<=6; i++)
        if (V[i] > media)
        qtd++;
    printf("A qtd %d",qtd);
    printf("A média foi %.2f\n",media);
    printf("A temperatura ficou acima da média: %d dias",qtd);
    return 0;
}