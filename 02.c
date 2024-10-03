#include <stdio.h>
#include <string.h>

/* declaração de funções*/
int ContaA(char*);

int main() {
    char str[100]; 
    int quantidade; 
             

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    quantidade = ContaA(str);
    printf("A letra 'a' apareceu %d vezes", quantidade);
    return 0;
}

/* funções */

int ContaA(char str[])
{
    int count = 0;  
    int i; 

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

        return count;

}