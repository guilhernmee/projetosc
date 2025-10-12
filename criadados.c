include <stdio.h>
int main() {
    FILE *arquivo = fopen("dados.txt", "w"); // Cria o arquivo .txt
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n"); // Caso dê erro, retonra "Erro ao criar arquivo"
        return 1;

    }
    fprintf(arquivo, "Nome: Gui\nIdade: 19\nCidade: SP\n"); // Inclui dados no arquivo!
    fclose(arquivo);
    return 0;
}
