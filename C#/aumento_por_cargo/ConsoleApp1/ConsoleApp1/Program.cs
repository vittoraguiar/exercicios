using System;
using ConsoleApp1;

namespace aumento_por_cargo
{
    class Program
    {
        public static void Main(string[] args)
        {
            Cargo cargo = new Cargo();
            char criterio = 's';
            do
            {
                Console.Write("Insira o seu salário em reais: ");
                cargo.Salario = double.Parse(Console.ReadLine());
                Console.WriteLine("\nCargos:");
                Console.WriteLine("[G] - Gerente\n[E] - Engenheiro\n" +
                                  "[T] - Técnico\n[O] - Outro\n");
                Console.Write("Insira o seu cargo: ");
                cargo.Funcao = char.Parse(Console.ReadLine());
                Console.WriteLine(cargo);
                Console.WriteLine("\nDigite \"s\" para realizar uma nova consulta: ");
                criterio = char.Parse(Console.ReadLine() ?? string.Empty);
            } while (criterio == 's');
        }
    }
    
}