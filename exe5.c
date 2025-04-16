#include <stdio.h>
#include "igualdade.h"

    int main(void) {
        int x, y;

        printf("Digite o primeiro número: ");
        scanf("%d", &x);

        printf("Digite o segundo número: ");
        scanf("%d", &y);

        if (iguais(x, y)) {
            printf("Os números são iguais.\n");
        }else{
            printf("Os números são diferentes.\n");
            
            if(maior(x, y)){
                printf("O maior número é %d.\n", maior(x, y));
                printf("O menor número é %d.\n", menor(x, y));
            }
        }
        return 0;
    }