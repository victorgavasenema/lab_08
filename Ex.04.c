#include <stdio.h>

struct aluno{
    char Matricula [10];
    char Nome [50];
    int P1, P2, P3;
    float Media; 
};

int main()
{
    int MaiorNota, MenorNota;
    float MaiorMedia;
    int MaiorNotaAluno, MenorNotaAluno, MaiorMediaAluno;
    struct  aluno alu[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Escreva a matricula: ");
        fgets(alu[i].Matricula, 10, stdin);
        fflush(stdin);
        printf("Escreva a matricula do aluno: ");
        fgets(alu[i].Nome, 50, stdin);
        fflush(stdin);
        printf("Escreva as notas da P1, P2 e P3: ");
        scanf(" %d %d %d", &alu[i].P1, &alu[i].P2, &alu[i].P3);
        getchar();
        alu[i].Media = (alu[i].P1 + alu[i].P2 + alu[i].P3)/3;
    }
    
    MaiorNota = alu[0].P1;
    MenorNota = alu[0].P1;
    MaiorMedia = alu[0].Media;
    MaiorNotaAluno = 0;
    MenorNotaAluno = 0;
    MaiorMediaAluno = 0;
    for(i = 0; i < 2; i++){
        if (alu[i].Media > MaiorMedia){
            MaiorMedia = alu[i].Media;
            MaiorMediaAluno = i;
        }
        else if (alu[i].P1 > MaiorNota){
            MaiorNota = alu[i].P1;
            MaiorNotaAluno = i;
        }
        else if (MenorNota > alu[i].P1){
            MenorNota = alu[i].P1;
            MenorNotaAluno = i;
        }
    }
    printf("Maior nota na P1: %d (aluno: %s)", alu[MaiorNotaAluno].P1, alu[MaiorNotaAluno].Nome);
    printf("Menor nota na P1: %d (aluno: %s)", alu[MenorNotaAluno].P1, alu[MenorNotaAluno].Nome);
    printf("Maior media: %f (aluno: %s)", alu[MaiorMediaAluno].Media, alu[MaiorMediaAluno].Nome);
    
    for(i = 0; i < 5; i++){
        if (alu[i].Media >= 6){
            printf("Aprovado %s", alu[i].Nome);
        }
        else if (alu[i].Media < 6){
            printf("Reprovado %s", alu[i].Nome);
        }
    }
    return 0;
}