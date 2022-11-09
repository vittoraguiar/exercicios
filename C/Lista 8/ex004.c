#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que simule o lançamento de uma moeda. Para cada lançamento de moeda o programa deve imprimir CARA ou COROA.
// Deixe o programa lançar 100 moedas e conte o número de vezes que cada lado aparece. 
// Imprima os resultados. 
// O programa deve chamar uma função separada chamada jogada que não utiliza argumentos e retorna 0 para cara e 1 para coroa.

int Jogada() {
    int num = rand() % 2;
    return num;
}

int main(int argc, char const *argv[]) {
    int cara = 0, coroa = 0;
    for (int i = 0; i < 100; i++)
    {
        int num = Jogada();
        switch (num)
        {
        case 0:
            cara++;
            break;
        case 1:
            coroa++;
            break;
        }
    }
    if (cara > coroa)
    {
        printf("O lado da moeda que mais caiu foi CARA, %d vezes!", cara);
    } else {
        printf("O lado da moeda que mais caiu foi COROA, %d vezes!", coroa);
    }
    return 0;
}