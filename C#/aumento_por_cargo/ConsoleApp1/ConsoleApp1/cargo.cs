namespace ConsoleApp1;
internal class Cargo
{
    public char Funcao;
    public double Salario;
    private double _salarioNovo;

    private double Aumento()
    {
        switch (Funcao)
        {
            case 'g':
            case 'G':
                _salarioNovo = Salario + (Salario * 0.05);
                break;
            case 'e':
            case 'E':
                _salarioNovo = Salario + (Salario * 0.10);
                break;
            case 't':
            case 'T':
                _salarioNovo = Salario + (Salario * 0.15);
                break;
            case 'o':
            case 'O':
                _salarioNovo = Salario + (Salario * 0.20);
                break;
        }
        return _salarioNovo;
    }

    public override string ToString()
    {
        return "\nSalário antigo: " + Salario.ToString("C") + "\nSalário novo: " + Aumento().ToString("C")
               + "\nDiferença: " + (Aumento() - Salario).ToString("C");
    }
    
}