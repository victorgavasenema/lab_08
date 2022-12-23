#include <stdio.h>
//Parei aqui boas festas corretores!
struct dados_produtos{
    char Nome[15];
    int Codigo, Quantidade;
    float Preco;
};
int main()
{
    struct dados_produtos Produto[5];
    int i, codigo, quanti;
    printf("--- Tabela Produtos ---\n");
    for(i = 0; i < 5; i++){
        printf("(%d) - Produto: ", i);
        fgets(Produto[i].Nome, 15, stdin);
        printf("(%d) - Codigo: ", i);
        scanf("%d", &Produto[i].Codigo);
        getchar();
        printf("(%d) - Quantidade no Estoque: ", i);
        scanf("%d", &Produto[i].Quantidade);
        getchar();
        printf("(%d) - Preco: ", i);
        scanf("%f", &Produto[i].Preco);
        getchar();
        fflush(stdin);
    }
    printf("Escreva o codigo: ");
    scanf("%d", &codigo);
    printf("Escreva o quantidade: ");
    scanf("%d", &quanti);
 
    for(i = 0; i < 5; i++){
        if(codigo == Produto[i].Codigo){
            if(quanti <= Produto[i].Quantidade){
                printf("Produto em Estoque:\n");
                printf("%d %s", Produto[i].Quantidade, Produto[i].Nome);
                Produto[i].Quantidade -= quanti;
            }
            else{
                printf("Codigo ou quantidade Invalido\n");
            }
        }
    }
    
    return 0;
}