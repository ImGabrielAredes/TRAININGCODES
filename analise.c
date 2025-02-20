#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declaração das variaveis de idade
    int ID;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &ID);

    // analise da idade
    if (ID >= 0 && ID <= 12)
    {
        printf("O user e crianca"); /* code */
    }
    else if (ID >= 13 && ID <= 17)
    {
        printf("O user e adolescente");
    }
    else if (ID > 18 && ID <= 59)
    {
        printf("O user e adulto");
    }
    else if (ID >= 60)
    {
        printf("O user e adulto");
    }
    return 0;
}

