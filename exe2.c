#include <stdio.h>

int soma(int x, int y) {
    return x + y;
}

int main(void) {
    int resultado = soma(2,3);
    printf("O resultado é %d\n", resultado);
    return 0;
}