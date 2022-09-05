using System;

namespace ex005
{
    /*
     * Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A
     * seguir, calcule e mostre o valor da conta a pagar.
    */
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Cardápio:");
            Console.WriteLine("CODIGO 1 --- CACHORRO QUENTE --- R$ 7,00");
            Console.WriteLine("CODIGO 2 --- XIS SALADA --- R$ 14,50");
            Console.WriteLine("CODIGO 3 --- XIS SALADA --- R$ 20,00");
            Console.WriteLine("CODIGO 4 --- TORRADA SIMPLES --- R$ 5,00");
            Console.WriteLine("CODIGO 5 --- REFRIGERANTE --- R$ 5,50");

            Console.Write("\nQual o código? ");
            int code = int.Parse(Console.ReadLine());
            Console.Write("Qual a quantidade? ");
            int qnt = int.Parse(Console.ReadLine());
            double conta = 0.0;
            switch (code)
            {
                case 1:
                    conta = qnt * 7.00;
                    break;
                case 2:
                    conta = qnt * 14.50;
                    break;
                case 3:
                    conta = qnt * 20;
                    break;
                case 4:
                    conta = qnt * 5;
                    break;
                case 5:
                    conta = qnt * 5;
                    break;
                default:
                    Console.WriteLine("Código inserido inválido!");
                    break;
            }
            Console.WriteLine("\nO valor a pagar é de R$ " + conta);
            Console.BackgroundColo
        }
    }
}
