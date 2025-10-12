#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("Raiz única: x = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Duas raízes reais:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }

    return 0;
}
