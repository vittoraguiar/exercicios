using System;

namespace AreaRetangulo
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Programa feito para calcular as medidas de um retâgulo */
            Retangulo medida = new Retangulo();

            Console.Write("Insira a altura do retângulo: ");
            medida.Altura = double.Parse(Console.ReadLine()!);
            Console.Write("Insira a largura do retângulo: ");
            medida.Largura = double.Parse(Console.ReadLine()!);

            Console.WriteLine("Área: " + medida.Area().ToString("F"));
            Console.WriteLine("Perímetro: " + medida.Perimetro().ToString("F"));
            Console.WriteLine("Diagonal: " + medida.Diagonal().ToString("F"));
        }   
    }
}