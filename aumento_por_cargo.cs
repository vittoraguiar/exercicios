using System;

namespace aumento_por_cargo
{
    class Program
    {
        public static void Main(string[] args)
        {
            char cargo, criterio = 's';
            double salario, salarioNovo;
            do
            {
                Console.Write("Insira o seu salário em reais: ");
                salario = double.Parse(Console.ReadLine() ?? string.Empty);
                Console.WriteLine("\nCargos:");
                Console.WriteLine("[G] - Gerente\n[E] - Engenheiro\n[T] - Técnico\n[O] - Outro\n");
                Console.Write("Insira o seu cargo: ");
                cargo = char.Parse(Console.ReadLine() ?? string.Empty);
                Console.WriteLine();

                switch (cargo)
                {
                    case 'G':
                    case'g':
                        salarioNovo = Gerente(salario);
                        Console.WriteLine("Como o seu cargo é de Gerente, o seu aumento será de 5%.");
                        Console.WriteLine("Salário antigo: " + salario.ToString("C"));
                        Console.WriteLine("Salário novo: " + salarioNovo.ToString("C"));
                        Console.WriteLine("Diferença: " + (salarioNovo - salario).ToString("C"));
                        break;
                    case 'E':
                    case 'e':
                        salarioNovo = Engenheiro(salario);
                        Console.WriteLine("Como o seu cargo é de Engenheiro, o seu aumento será de 10%.");
                        Console.WriteLine("Salário antigo: " + salario.ToString("C"));
                        Console.WriteLine("Salário novo: " + salarioNovo.ToString("C"));
                        Console.WriteLine("Diferença: " + (salarioNovo - salario).ToString("C"));
                        break;
                    case 'T':
                    case 't':
                        salarioNovo = Tecnico(salario);
                        Console.WriteLine("Como o seu cargo é de Técnico, o seu aumento será de 15%.");
                        Console.WriteLine("Salário antigo: " + salario.ToString("C"));
                        Console.WriteLine("Salário novo: " + salarioNovo.ToString("C"));
                        Console.WriteLine("Diferença: " + (salarioNovo - salario).ToString("C"));
                        break;
                    case 'O':
                    case 'o':
                        salarioNovo = Outro(salario);
                        Console.WriteLine("Como o seu cargo é outro, o seu aumento será de 20%.");
                        Console.WriteLine("Salário antigo: " + salario.ToString("C"));
                        Console.WriteLine("Salário novo: " + salarioNovo.ToString("C"));
                        Console.WriteLine("Diferença: " + (salarioNovo - salario).ToString("C"));
                        break;
                    default:
                        Console.WriteLine("Valor inválido!!!");
                        break;
                }
                Console.WriteLine("Digite \"s\" para realizar uma nova consulta: ");
                criterio = char.Parse(Console.ReadLine() ?? string.Empty);
            } while (criterio == 's');
        }
        private static double Gerente(double x)
        {
            var resultado = (x * 0.05) + x;
            return resultado;
        }

        private static double Engenheiro(double x)
        {
            var resultado = (x * 0.10) + x;
            return resultado;
        }

        private static double Tecnico(double x)
        {
            var resultado = (x * 0.15) + x;
            return resultado;
        }
        private static double Outro(double x)
        {
            var resultado = (x * 0.20) + x;
            return resultado;
        }
    }
    
}
