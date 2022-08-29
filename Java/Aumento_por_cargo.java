package curso_java;

import java.util.Scanner;

public class Aumento_por_cargo {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char criterio = 's';
		double salario, salarioNovo;
		
		do { 
			System.out.print("Insira o seu salário em reais: ");
			salario = sc.nextDouble();
			System.out.println();
			System.out.println("Cargos:");
			System.out.print("[G] - Gerente\n[E] - Engenheiro\n[T] - Técnico\n[O] - Outro\n");
			System.out.print("Insira o seu cargo: ");
			char cargo = sc.next().charAt(0);
			System.out.println();

			switch (cargo) {
			case 'G':
			case 'g':
				salarioNovo = Gerente(salario);
				System.out.println("Como o seu cargo eh de Gerente, o seu aumento sera de 10%.");
				System.out.printf("Logo, o seu salario que antes era de R$ %.2f", salario);
				System.out.printf("Passara a ser de R$ %.2f", salarioNovo);
				System.out.printf("A diferenca entre os salarios eh de R$ %.2f", (salarioNovo - salario));
				break;

			case 'E':
			case 'e':
				salarioNovo = Engenheiro(salario);
				System.out.println("Como o seu cargo eh de Engenheiro, o seu aumento sera de 20%.");
				System.out.printf("Logo, o seu salario que antes era de R$ %.2f", salario);
				System.out.printf("Passara a ser de R$ %.2f", salarioNovo);
				System.out.printf("A diferenca entre os salarios eh de R$ %.2f", (salarioNovo - salario));
				break;

			case 'T':
			case 't':
				salarioNovo = Tecnico(salario);
				System.out.println("Como o seu cargo eh de Tecnico, o seu aumento sera de 30%.");
				System.out.printf("Logo, o seu salario que antes era de R$ %.2f", salario);
				System.out.printf("Passara a ser de R$ %.2f", salarioNovo);
				System.out.printf("A diferenca entre os salarios eh de R$ %.2f", (salarioNovo - salario));
				break;

			case 'O':
			case 'o':
				salarioNovo = Outro(salario);
				System.out.println("Como o seu cargo eh Outro, o seu aumento sera de 40%.");
				System.out.printf("Logo, o seu salario que antes era de R$ %.2f", salario);
				System.out.printf("Passara a ser de R$ %.2f", salarioNovo);
				System.out.printf("A diferenca entre os salarios eh de R$ %.2f", (salarioNovo - salario));
				break;

			default:
				System.out.println("Cargo Invalido!");
			}

			// Verificação do critério
			System.out.print("\nTecle \"s\" para realizar uma nova consulta: ");
			criterio = sc.next().charAt(0);
			
		if (criterio != 's')
		{
			System.out.println("\nFim do programa. Obrigado!\n");
		}
			
		}while(criterio=='s');

	sc.close();

	}

	// Funções
	public static double Gerente(double x) {
		double resultado;
		resultado = (x * 0.10) + x;
		return resultado;
	}

	public static double Engenheiro(double x) {
		double resultado;
		resultado = (x * 0.20) + x;
		return resultado;
	}

	public static double Tecnico(double x) {
		double resultado;
		resultado = (x * 0.30) + x;
		return resultado;
	}

	public static double Outro(double x) {
		double resultado;
		resultado = (x * 0.40) + x;
		return resultado;
	}
}
