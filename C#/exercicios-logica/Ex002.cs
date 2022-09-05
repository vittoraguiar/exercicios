using System;

namespace ex002
{
    // Fazer um programa para ler um número inteiro e dizer se este número é par ou ímpar.
    class Program
    {
        static void Main(String[] args)
        {
            int num = int.Parse(Console.ReadLine());

            if (num % 2 == 0)
            {
                Console.WriteLine("PAR!");
            }
            else if (num % 2 != 0)
            {
                Console.WriteLine("ÍMPAR!");
            }
        }
    }
}
