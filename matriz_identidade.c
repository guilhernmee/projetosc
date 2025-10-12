#include <stdio.h>
#include <stdlib.h>

int main() {
    int cub[5][5];
    int i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(i == j)
                cub[i][j] = 1;
            else
                cub[i][j] = 0;
        }
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", cub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
