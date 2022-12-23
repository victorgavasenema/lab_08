#include <stdio.h>
//Fui incapaz nao sei fazer fiz oq consegui
struct dados_pessoa {
    char Nome [50], Endereco [50];
    int Telefone;
};

int main()
{   
    struct dados_pessoa Pessoa[5];
    int i, j;
    int r;
    for(i = 0; i < 5; i++){
        printf("-----Insira as informacoes----\n");
        printf("Nome: ");
        fgets(Pessoa[i].Nome, 50, stdin);
        printf("Endereco: ");
        fgets(Pessoa[i].Endereco, 50, stdin);
        printf("Telefone: ");
        scanf("%d", Pessoa[i].Telefone);
    }
    
    for(i = 0; i < 5; i++){
        for (j = i+1; j < 5; j++){
            r = strcmp (Pessoa[i].Telefone, Pessoa[j].Telefone)
            if(r > 0){
                
            }
        }
    }
    
    return 0;
}