#include <stdio.h>
#include <stdlib.h>

int main()
{
    char MA;
    char ME;
    char IG;

    printf("Escreva o caracter requerido: ");
    scanf("%c", &MA);

    switch (MA){
        case '<':
        printf("SINAL DE MENOR");
        break;
        case '>':
        printf("SINAL DE MAIOR");
        break;
        case '=':
        printf("SINAL DE IGUAL");
        break;
        default:
        printf("OUTRO SINAL");
    }
    return 0;
}