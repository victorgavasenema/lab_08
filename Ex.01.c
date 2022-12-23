#include <stdio.h>

struct horario{
    int hora, min, sec;
};
typedef horario horario;
struct data{
    int dia, mes, ano;
};
typedef data data;
struct compromisso{
    char compromisso[40];
    char data[11]; //tipo data: DD/MM/AAAA
    char horario [9]; //tipo horario HH:MM:SS
};
typedef compromisso compromisso;

int main()
{
    return 0;
}