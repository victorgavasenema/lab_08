#include <stdio.h>

struct dados_eletrodomesticos{
    char Nome[15];
    float Potencia;
    int Tempo;
};
int main()
{
    struct dados_eletrodomesticos Eletro[5];
    float ConsumoTotal = 0, ConsumoRelativo[5];
    int i;
    printf("--- Tabela Eletrodomesticos ---\n");
    for(i = 0; i < 5; i++){
        printf("(%d) - Nome: ", i);
        fgets(Eletro[i].Nome, 15, stdin);
        printf("(%d) - Potencia em Kw: ", i);
        scanf("%f", &Eletro[i].Potencia);
        getchar();
        printf("(%d) - Tempo em dias: ", i);
        scanf("%d", &Eletro[i].Tempo);
        getchar();
        ConsumoTotal += (Eletro[i].Potencia * (Eletro[i].Tempo * 24));
        ConsumoRelativo[i] = (Eletro[i].Potencia * (Eletro[i].Tempo * 24));
        fflush(stdin);
    }
    printf("O consumo total eh: %.2f Kwh\n", ConsumoTotal);
    for(i = 0; i < 5; i++){
        printf("%.2f - %s", ConsumoRelativo[i], Eletro[i].Nome);
    }
    
    return 0;
}