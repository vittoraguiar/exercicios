#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Faça um programa que leia 3 notas de N alunos aluno e calcule a média final de cada um deles mostrando-as ao final da execução.
    int M, i, j;
    printf("Please insert the number of students: ");
    scanf("%d", &M);
    float average = 0.0;
    float score[M][3];
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Pls insert the %d score: ", j + 1);
            scanf("%f", &score[i][j]);
        }
    }
    for (i = 0; i < M; i++)
    {
        average = 0;
        printf("\nScore of the %d student:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%.1f\n", score[i][j]);
            average += score[i][j];
        }
        printf("Average score: %.1f", average / 3);
    }
    printf("\n\n");
    return 0;
}