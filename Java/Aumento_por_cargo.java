package curso_java;

import java.util.Scanner;

public class Aumento_por_cargo {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		char criterio = 's';
		double salario, salarioNovo;
		
		while (criterio == 's') {
			
			System.out.print("Insira o seu salário em reais: ");
			salario = sc.nextDouble();
			System.out.println();
			System.out.println("Cargos:");
			System.out.print("[G] - Gerente\n[E] - Engenheiro\n[T] - Técnico\n[O] - Outro\n");
			System.out.print("Insira o seu cargo: ");
			char cargo = sc.next().charAt(0);
			System.out.println();
			
			if (cargo == 'G' || cargo == 'g') {
				salarioNovo = Gerente(salario);
				System.out.println("Como o seu cargo é de Gerente, o seu aumento será de 10%.");
				System.out.println("Logo, o seu salário que antes era de R$" + String.format("%.2f", salario) + " passará "
						+ "a ser de R$" + String.format("%.2f", salarioNovo) + "!\nA diferença entre os salários é de "
								+ "R$" + String.format("%.2f", (salarioNovo - salario)) + ".");
			}
			else if(cargo == 'E' || cargo == 'e') {
				salarioNovo = Engenheiro(salario);
				System.out.println("Como o seu cargo é de Engenheiro, o seu aumento será de 20%.");
				System.out.println("Logo, como o seu salário era de R$" + String.format("%.2f", salario) + " passará a ser "
						+ "de R$" + String.format("%.2f", salarioNovo) + "!\nA diferença entre os salários é de R$"
						+ String.format("%.2f", (salarioNovo - salario)));
			}
			else if(cargo == 'T' || cargo == 't') {
				salarioNovo = Tecnico(salario);
				System.out.println("Como o seu cargo é de Técnico, o seu aumento será de 30%.");
				System.out.println("Logo, como o seu salário era de R$" + String.format("%.2f", salario) + " passará a ser "
						+ "de R$" + String.format("%.2f", salarioNovo) + "!\nA diferença entre os salários é de R$"
						+ String.format("%.2f", (salarioNovo - salario)));
			}
			else if(cargo == 'O' || cargo == 'o') {
				salarioNovo = Outro(salario);
				System.out.println("Como o seu cargo é outro, o seu aumento será de 40%.");
				System.out.println("Logo, como o seu salário era de R$" + String.format("%.2f", salario) + " passará a ser "
						+ "de R$" + String.format("%.2f", salarioNovo) + "!\nA diferença entre os salários é de R$"
						+ String.format("%.2f", (salarioNovo - salario)));
			}
			else {
				System.out.println("Cargo inválido!");
			}
			System.out.print("\nTecle \"s\" para realizar uma nova consulta: ");
			criterio = sc.next().charAt(0);
		}
		if(criterio != 's') {
			System.out.println("\nFim do programa. Obrigado!\n");
		}
		sc.close();
	}

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
