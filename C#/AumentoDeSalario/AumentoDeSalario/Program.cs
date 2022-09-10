using System;

namespace AumentoDeSalario
{
    class Program
    {
        static void Main(string[] args)
        {
            Funcionario func = new Funcionario();

            Console.WriteLine("Insira os dados do funcionário:");
            Console.Write("Nome: ");
            func.Nome = Console.ReadLine()!;
            Console.Write("Salário bruto: ");
            func.SalarioBruto = double.Parse(Console.ReadLine()!);
            Console.Write("Imposto: ");
            func.Imposto = double.Parse(Console.ReadLine()!);
            
            Console.WriteLine("Funcionário: " + func);
            Console.Write("Digite a porcentagem para aumentar o salário: ");
            double porcent = double.Parse(Console.ReadLine()!);
            func.AumentarSalario(porcent);
            Console.WriteLine("\nDados atualizados: " + func);
        }
    }
}