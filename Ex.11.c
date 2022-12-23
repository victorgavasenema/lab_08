#include <stdio.h>
#include <string.h>

struct data{
    int Dia, Mes, Ano;
};
struct compromisso{
    char Compro[30];
};

int main()
{
    struct data Data [5];
    struct compromisso Compromisso [5];
    int i, M, A;
    for (i = 0; i < 5; i++){
        printf("(%d) - Compromisso: ", i);
        fgets(Compromisso[i].Compro, 30, stdin);
        fflush(stdin);
        printf("(%d) - Data: ", i);
        scanf("%d %d %d", &Data[i].Dia, &Data[i].Mes, &Data[i].Ano);
        getchar();
    }
    
    printf("Escreva o ano que deseja ver os compromissos: ");
    scanf("%d", &A);
    printf("Escreva o mes que deseja ver os compromissos: ");
    scanf("%d", &M);
    for (i = 0; i < 5; i++){
        if (Data[i].Ano == A){
            if (Data[i].Mes <= M){
                printf("%d/%d/%d %s", Data[i].Dia, Data[i].Mes, Data[i].Ano, Compromisso[i].Compro);
            }
        }
    }
    
    return 0;
}