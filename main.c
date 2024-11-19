#include<stdio.h>
#include<stdlib.h>


int main() {
    int **matriz, taml, tamc, i, j, k;
    scanf("%d  %d", &taml, &tamc);
    matriz = (int**)malloc(taml * sizeof(int*));
    if(matriz == NULL) {
        printf("[matriz vazia]");
        
    }

    for(i = 0; i < taml; i++) {
        matriz[i] = (int*)malloc(tamc * sizeof(int));
        if(matriz[i] == NULL) {
            for(k = 0; k < i; k++) {
                free(matriz[k]);
            }
            free(matriz);
            printf("[matriz vazia]");
            
        }

    }

    for(i = 0; i < taml; i++) {
        for(j = 0; j < tamc; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < taml; i++) {
        for(j = 0; j < tamc; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");

    }
    for(i = 0; i < taml; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

