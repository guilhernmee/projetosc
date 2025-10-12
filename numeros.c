
#include <stdio.h>

int main() {
    int v[5];
    int *p = v;
    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }
    printf("Valores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main(){
    int numero;
    int *p;
    numero = 100;
    p = &numero;
    printf("\nConteúdo de número %d", *p);
    *p = *p *10;
    printf("\nConteúdo de número = %d", numero);
    printf("\nConteúdo de número = %d", p);
}


#include <stdio.h>
int main(){
    int x = 10;
    int *px;
    px = &x;
    printf("Valor de x (direto): %d\n", x);
    printf("Valor de x (via ponteiro): %d\n", x );
    printf("Endereço de x: %p\n", &x);
    printf("Endereço guardado em px: %p\n", px);
    return 0;
}

#include <stdio.h>
void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main () {
    int x = 5, y = 10;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    trocar(&x, &y);
    printf("Depois da troca: x = %d, y =%d\n", x, y);
    return 0;
}