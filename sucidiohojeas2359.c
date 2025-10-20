#include <stdio.h>
#include <string.h>

int main() {
    char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                         'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int primos[26] = {2,3,5,7,11,13,17,19,23,29,31,37,41,
                      43,47,53,59,61,67,71,73,79,83,89,97,101};

    char palavra[50], cifrada[50];

    printf("Digite uma palavra minuscula: ");
    scanf("%s", palavra);

    for(int i = 0; palavra[i]; i++){
        int indice = palavra[i] - 'a';       // posição da letra no alfabeto
        int shift = primos[indice];          // shift baseado no primo correspondente
        int novo_indice = indice + shift;    // aplica o shift

        // volta para 'a' se passar de 'z'
        while(novo_indice > 25)
            novo_indice -= 26;

        cifrada[i] = alfabeto[novo_indice];
    }

    cifrada[strlen(palavra)] = '\0';

    printf("Palavra cifrada: %s\n", cifrada);

    return 0;
}
