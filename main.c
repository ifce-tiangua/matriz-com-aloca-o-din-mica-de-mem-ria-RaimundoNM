#include<stdio.h>
#include<stdlib.h>

int main() {
    int **matriz, tc, tl, i, j;
    scanf("%d %d", &tl, &tc);
    matriz = (int**)malloc(tl * sizeof(int*));
    if(matriz == NULL) {
        printf("[matriz vazia]");
    }
    for(i = 0; i < tl; i++) {
        matriz[i] = (int*)malloc(tc * sizeof(int));

    }

    for(i = 0; i < tl; i++) {
        for(j = 0; j < tc; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < tl; i++) {
        
        for(j = 0; j < tc; j++) {
            printf("%d", matriz[i][j]);
            if(j < tc - 1) {
                printf(" ");
                
                
            }
            
         
        }
        if(i < tl -1){
        printf('\n');
        
        }
        
    }
    for(i = 0; i < tl; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
}