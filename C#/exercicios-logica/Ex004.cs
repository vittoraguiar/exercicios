using System;

namespace ex004
{
    /* Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode
     * começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
    */
    class Program
    {
        static void Main(String[] args)
        {
            string[] hours = Console.ReadLine().Split(' ');
            int horaInicio = int.Parse(hours[0]);
            int horaFinal = int.Parse(hours[1]);

            int duracao;
            if (horaInicio < horaFinal)
            {
                duracao = horaFinal - horaInicio;
            }
            else
            {
                duracao = 24 - horaInicio + horaFinal;
            }
            Console.WriteLine("O JOGO DUROU " + duracao + " HORA(S)");
        }
    }
}
