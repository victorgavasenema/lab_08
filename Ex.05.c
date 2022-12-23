#include <stdio.h>

struct vetor {
    float a;
    float b;
    float c;
};


int main()
{   
    struct vetor vetor[3];
    int i;
    for(i = 0; i < 2; i++){
        printf("Digite as coordenadas do %d vetor: \n", i);
        scanf("%f %f %f",&vetor[i].a,&vetor[i].b,&vetor[i].c);
    }
    vetor[2].a = vetor[0].a + vetor[1].a;
    vetor[2].b = vetor[0].b + vetor[1].b;
    vetor[2].c = vetor[0].c + vetor[1].c;
    printf("O resultado da soma do vetor eh: %f %f %f",vetor[2].a, vetor[2].b, vetor[2].c);
    return 0;
}