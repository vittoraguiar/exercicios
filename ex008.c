#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vet1[10], vet2[10], vetAux[10];
    int i, j, cont, tamanhoVet, numDif;
    cont = 0;
    tamanhoVet = 0;
    numDif = 0;
    // Leitura dos vetores 1 e 2
    printf("Insira os valores para o primeiro vetor:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet1[i]);
    }
    printf("\nInsira os valores para o segundo vetor:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet2[i]);
    }
    // Passar os valores diferentes do vet 1 para o vet auxiliar
    for (i = 0; i < 10; i++)
    {
        cont = 0;
        for (j = 0; j < 10; j++)
        {
            if (vet1[i] != vet2[j])
            {
                cont++; // Contagem para verificar se o numero nao existe no outro vetor
            }            
        }
        if (cont > 8)
        {
            vetAux[tamanhoVet] = vet1[i];
            tamanhoVet++;
            numDif++;
        }
    }
    // Mostrar os vetores
    printf("\nPrimeiro vetor inserido:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet1[i]);
    }
    printf("\nSegundo vetor inserido:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet2[i]);
    }
    printf("\nVetor com os numeros diferentes:\n");
    for (i = 0; i < tamanhoVet; i++)
    {
        printf("%d ", vetAux[i]);
    }
    if (numDif > 0)
    {
        printf("\nForam inseridos %d numeros diferentes...", numDif);
    }
    printf("\n");
    return 0;
}