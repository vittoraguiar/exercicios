using System;
namespace ex003
{
    /* Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao
     * Multiplos", indicando se os valores lidos são múltiplos entre si. Atenção: os números devem poder ser digitados em
     * ordem crescente ou decrescente.
    */
    class Program
    {
        static void Main(string[] args)
        {
            string[] numbers = Console.ReadLine().Split(' ');
            int num1 = int.Parse(numbers[0]);
            int num2 = int.Parse(numbers[1]);

            if (num1 % num2 == 0 || num2 % num1 == 0)
            {
                Console.WriteLine("SAO MULTIPLOS");
            }
            else
                Console.WriteLine("NAO SAO MULTIPLOS");
        }
    }
}
