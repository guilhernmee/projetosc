#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
double base, altura, perimetro, area;
printf("Entre com a base: ");
scanf("%1f",&base);
printf("Entre com a altura: ");
scanf("%1f",&altura);
perimetro = 2 * (base + altura);
area = base * altura;
printf("\nO perimetro do retangulo e: %4.11f\n\n",perimetro);
printf(\"nA area do retangulo e: %4.11f\n\n",area);
system("PAUSE");
return 0;
}
