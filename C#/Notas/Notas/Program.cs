using System;

namespace Notas
{
    class Program
    {
        static void Main(string[] args)
        {
            Aluno al = new Aluno();
            
            Console.Write("Nome do aluno: ");
            al.Nome = Console.ReadLine()!;
            Console.WriteLine("Digite as três notas do aluno:");
            al.Nota1 = double.Parse(Console.ReadLine()!);
            al.Nota2 = double.Parse(Console.ReadLine()!);
            al.Nota3 = double.Parse(Console.ReadLine()!);

            Console.WriteLine("\nNota final: " + al.NotaFinal().ToString("F"));

            if (al.Aprovado())
            {
                Console.WriteLine("Aprovado!");
            }
            else
            {
                Console.WriteLine("Reprovado!");
                Console.WriteLine("Faltaram " + al.NotaFaltou().ToString("F") + " pontos!");
            }
            
        }
    }
}