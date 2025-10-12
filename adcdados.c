#include <stdio.h>
int main() {
    FILE *arquivo = fopen("dados.txt", "a");
    char linha[100];
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;

    }
    fprintf(arquivo, "Profissão: Engenheiro\n");
    fclose(arquivo);
    printf("Novo dado adicionado no arquivo!\n");
    return 0;
}
