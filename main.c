#include<stdio.h>
#include<stdlib.h>

int main() {
    int **matriz, taml, tamc, i, j;
    scanf("%d %d", &taml, &tamc);
    matriz = (int**)malloc(taml * sizeof(int*));
    for(i = 0; i < taml; i++) {
        matriz[i] = (int*)malloc(tamc * sizeof(int));
    }

    if(matriz == NULL) {
        printf("[vazio]");
    } else {
        for(i = 0; i < taml; i++) {
            for (j = 0; j < tamc; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        for(i = 0; i < taml; i++) {
            printf("\n");
            for (j = 0; j < tamc; j++) {
                printf("%d ", matriz[i][j]);

            }
        }
    }

    for(i = 0; i < taml; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}

