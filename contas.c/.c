#include <stdio.h>
#include <math.h>

int main()
{
    //declaração das variáveis

    int ID;
    char NM[20];

    printf("Escreva o nome do usuario : ");
    scanf("%s",NM);

    printf("Escreva a idade do usuario :");
    scanf("%d",&ID);

    //maioridade verificação

    if (ID >= 18){
        printf("O usuario e maior de idade");
}
    else if (ID < 18)
    {
        printf ("O usuario e menor de idade");

        return 0;
    }

}
