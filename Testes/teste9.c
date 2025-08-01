#include <stdio.h>

int main (){
    float nota1, nota2, nota3;
    float media;
    //se a media/notas for em int, o resultado sairá numero inteiro

    printf("Programa de Calculo de Media \n");

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);

     printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    //pode ser também: media = (float)(nota1, nota2, nota3) / 3 - resultado em casas decimais

    printf("A media é: %f \n", media);
    // se fosse em int, seria %d
    //pode ser em duas (ou mais) casas decimais ex: %.2f














return 0;



}