#include <stdio.h>
#include <stdlib.h>

int main()  {
    float nota1, nota2, nota3, media;
    printf("informe as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    /* int %d %i
    float %f
    chat %c
    string %s */
    media=(nota1+nota2+nota3)/3;
    printf("Media do aluno: %.1f\n", media);
    /*usando .1f depois da % para limitar o numero depois da virgula */
    if (media>=7.0)
            printf("Aprovado\n");
    else
            printf("Reprovado\n");
    system("pause");
    /*apesar do meu programa nao precisar, USAR PAUSE*/
    return 0;
}
