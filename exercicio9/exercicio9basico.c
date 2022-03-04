#include <stdio.h>

int main()
{
    /*
    Desenvolver um algoritmo para ler o nome, 
    idade e peso de três pessoas. 
    Calcular e imprimir idade e o peso médio das três pessoas.
     */
    char nome1,nome2,nome3;
    float idade1,idade2,idade3, peso1, peso2, peso3, mediaI, mediaP;

    printf("idade e peso medio\n");
    printf("Digite o nome da pessoa 1: ");
    scanf("%s", &nome1);
    printf("Digite a idade da pessoa 1: ");
    scanf("%f", &idade1);
    printf("Digite o peso da pessoa 1: ");
    scanf("%f", &peso1);
    printf("Digite o nome da pessoa 2: ");
    scanf("%s", &nome2);
    printf("Digite a idade da pessoa 2: ");
    scanf("%f", &idade2);
    printf("Digite o peso da pessoa 2: ");
    scanf("%f", &peso2);
    printf("Digite o nome da pessoa 3: ");
    scanf("%s", &nome3);
    printf("Digite a idade da pessoa 3: ");
    scanf("%f", &idade3);
    printf("Digite o peso da pessoa 3: ");
    scanf("%f", &peso3);

    mediaI = (idade1 + idade2 + idade3)/3;
    mediaP = (peso1 + peso2 + peso3)/3;

    printf("A idade media resultou em %.2f e o peso medio foi de %.2f", mediaI, mediaP);
    return 0;
}
