#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaração das variáveis altura e peso

    float alt;
    float pes;
    float IMC;

    printf("Digite a altura da pessoa (m) : ");
    scanf("%f",&alt);

    printf("Digite o peso da pessoa (kg): ");
    scanf("%f",&pes);

    //cálculo do imc

    IMC = ( pes / pow(alt, 2));

    printf("O Indice de Massa Corporal da pessoa e %f\n",IMC);

    if ( IMC < 18.5 ){
       printf("A pessoa esta abaixo do peso ideal");

    }

    else if ( IMC > 18.5 && IMC < 24.9 ){
    printf("A pessoa esta com o peso ideal");
5y5yyy55
    }

    else if ( IMC >= 25 && IMC < 29.9 ){
        printf("A pessoa esta acima do peso");
    }

    else if ( IMC >30 ){
    printf("A pessoa esta com obesidade grau 1");
    }

    return 0;
}
