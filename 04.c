#include <stdio.h>

int main() {
    int n = 5; 
    int prox = 2 * n - 1;
    int e1 = 5; /* e(n-2) */
    int e2 = 8; /* e(n-1) */
    
    printf("a) Próximo elemento: %d\n", prox);

    n = 7; /* posição do próximo termo */
    prox = 1 << (n - 1); 
    printf("b) Próximo elemento: %d\n", prox);

    n = 8; /* posição do próximo termo */
    prox = (n - 1) * (n - 1);
    printf("c) Próximo elemento: %d\n", prox);

    n = 5; /* posição do próximo termo */
    prox = (2 * n) * (2 * n);
    printf("d) Próximo elemento: %d\n", prox);

    
    prox = e1 + e2;
    printf("e) Próximo elemento: %d\n", prox);

    prox = 20; /* próximo número */
    printf("f) Próximo elemento: %d\n", prox);

    return 0;
}
