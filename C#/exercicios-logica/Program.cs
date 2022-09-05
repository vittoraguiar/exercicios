using System;

namespace ex001
{
    // Fazer um programa para ler um número inteiro, e depois dizer se este número é negativo ou não.
    class Program
    {
        static void Main(string[] args)
        {
            int num;
            Console.Write("Insira um número inteiro: ");
            num = int.Parse(Console.ReadLine());
            if (num >= 0)
            {
                Console.WriteLine("O número inserido é positivo!");
            }
            else
            {
                Console.WriteLine("O número inserido é negativo");
            }
        }
    }
}