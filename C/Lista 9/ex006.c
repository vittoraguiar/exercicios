#include <stdio.h>
#include <stdlib.h>

// Escrever uma funcao void datecpy(struct data *dt1, struct data dt2), que atribui o conteúdo de dt2 para dt1.

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

void datecpy(Data *dt1, Data dt2)
{
    Data aux, *pto;
    pto = &aux;
    pto->dia = dt1->dia;
    dt1->dia = dt2.dia;
    dt2.dia = pto->dia;

    pto->mes = dt1->mes;
    dt1->mes = dt2.mes;
    dt2.mes = pto->mes;

    pto->ano = dt1->ano;
    dt1->ano = dt2.ano;
    dt2.ano = pto->ano;
}

int main()
{
    Data da = {1, 5, 1999}, db = {15, 8, 1980};
    datecpy(&da, db);
    printf("\n%d/%d/%d", da.dia, da.mes, da.ano);
    printf("\n%d/%d/%d", db.dia, db.mes, db.ano);
    return 0;
}