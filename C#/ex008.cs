using System;

namespace Homens21
{
    class Program
    {
        static void Main(String[] args)
        {
            string[,] pessoas = new string[5, 3]; // Matriz que recebe todos os dados
            string[] nomes = new string[5]; // Vetor que recebe somente os nomes dos homens maiores de 21 anos
            int j = 0, x = 0; // Variaveis auxiliares
            
            Console.WriteLine("Insira abaixo os dados das pessoas:");
            for (int i = 0; i < 3; i++)
            {
                Console.Write("Insira o nome da " + (i+1) + " pessoa: "); 
                pessoas[0, j] = Console.ReadLine();

                Console.Write("Insira a idade da " + (i+1) + " pessoa: ");
                pessoas[1, j] = Console.ReadLine();
                    
                Console.Write("Insira o sexo da " + (i+1) + " pessoa: ");
                pessoas[2, j] = Console.ReadLine();
                Console.WriteLine();
                if (int.Parse(pessoas[1, j]) > 21 && (char.Parse(pessoas[2, j]) == 'M' || char.Parse(pessoas[2, j]) == 'm'))
                {
                    nomes[x] = pessoas[0, j];
                    x++;
                }
                j++;
            }
            if (x != 0)
            {
                Console.WriteLine("\nHomens maiores de 21 anos:");
                for (int i = 0; i < x; i++)
                {
                    Console.Write("Nome: " + nomes[i]);
                }
            }
            else
            {
                Console.WriteLine("Nenhum dado inserido bate com o requerido...");
            }
            Console.WriteLine();
        }
    }
}
