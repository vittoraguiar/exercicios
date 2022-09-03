using System;

namespace ex015
{
    class Program
    {
        static void Main(String[] args)
        {
            int code, qnt;
            double total = 0.0;

            Console.WriteLine("Cardápio:");
            Console.WriteLine("Código --- Produto --- Valor (R$)");
            Console.WriteLine("1 --- Refrigerante --- 2,50");
            Console.WriteLine("2 --- Bolo ----------- 3,50");
            Console.WriteLine("3 --- Torrada -------- 4,50");
            Console.WriteLine("4 --- Picadinho ------ 10,00");
            Console.WriteLine("5 --- Água mineral --- 2,00");
            Console.WriteLine("99 --- Finalizar --- ");

            do
            {
                Console.Write("\nInsira o código do produto: ");
                code = int.Parse(Console.ReadLine());
                if (code == 99)
                {
                    Console.WriteLine("Pedido finalizado!");
                    break;
                }
                Console.Write("Insira a quantidade: ");
                qnt = int.Parse(Console.ReadLine());

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
                        Console.WriteLine("Código inválido!");
                        break;
                }
            } while (code != 99);
            Console.WriteLine("\nO total do pedido foi de " + total.ToString("C")); // R$ 0,00
        }
    }
}
