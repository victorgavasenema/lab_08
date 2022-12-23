#include <stdio.h>

struct dados_carros{
    char Nome [15];
    int Ano;
    float Preco;
};

int main()
{
    struct dados_carros Carros [5];
    int i;
    float p;
    for (i = 0; i < 5; i++){
        printf("(%d) - Carro: ", i);
        fgets(Carros[i].Nome, 15, stdin);
        fflush(stdin);
        printf("(%d) - Ano: ", i);
        scanf(" %d", &Carros[i].Ano);
        getchar();
        printf("(%d) - Preco: ", i);
        scanf(" %f", &Carros[i].Preco);
        getchar();
    }
    printf("Escreva ate qual preco voce quer ver a lista de carros: ");
    scanf("%f", &p);
    for(i = 0; i <= 5; i++){
        if(Carros[i].Preco < p){
            printf("%s", Carros[i].Nome);
        }
    }
    return 0;
}