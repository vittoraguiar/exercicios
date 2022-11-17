#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

int Dia(Data *data)
{
    return data->dia;
}

int main()
{
    Data data = {15, 4, 1999};
    int ult;
    ult = dia(&data);
    printf("%d", ult);
    return 0;
}