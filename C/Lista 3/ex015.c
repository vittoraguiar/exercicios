#include <stdlib.h>
#include <stdio.h>

int main(void){
            int code, qnt;
            double total = 0.0;

            printf("Cardapio:\n");
            printf("Codigo --- Produto --- Valor (R$)\n");
            printf("1 --- Refrigerante --- 2,50\n");
            printf("2 --- Bolo ----------- 3,50\n");
            printf("3 --- Torrada -------- 4,50\n");
            printf("4 --- Picadinho ------ 10,00\n");
            printf("5 --- Agua mineral --- 2,00\n");
            printf("99 -- Finalizar --- \n");

            do
            {
                printf("\nInsira o codigo do produto: ");
                scanf("%d", &code);
                if (code == 99)
                {
                    printf("Pedido finalizado!\n");
                    break;
                }
                printf("Insira a quantidade: ");
                scanf("%d", &qnt);
                switch (code)
                {
                    case 1:
                        total += qnt * 2.50;
                        break;
                    case 2:
                        total += qnt * 3.50;
                        break;
                    case 3:
                        total += qnt * 4.50;
                        break;
                    case 4:
                        total += qnt * 10.00;
                        break;
                    case 5:
                        total += qnt * 2.00;
                        break;
                    case 99:
                        break;
                    default:
                        printf("\nCodigo invalido!\n");
                        break;
                }
            } while (code != 99);
            printf("\nO total do pedido foi de R$%.2f", total); // R$ 0,00
}