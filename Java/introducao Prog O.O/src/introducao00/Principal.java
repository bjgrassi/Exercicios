package introducao00;

import corejava.Console;

public class Principal 
{	public static void main(String[] args) 
	{	
		String nome = Console.readLine("Informe o nome: ");
		double salario = Console.readDouble("Informe o salário: ");
	
		Empregado e1 = new Empregado(nome, salario);
		
		//System.out.println(e1);
		
		//e1.setNome("Brubs");
		
		//e1.setSalario(100000);
		
		e1.imprime();
		
		//System.out.println(e1);
		
		/*
		Empregado e1, e2;
		e1 = new Empregado("Jorge", 5000);
		System.out.println(e1.getNome());
		e2 = new Empregado("Lucia", 6000);
		
		e2.setSalario(7000);
		e2.imprime();
		System.out.println(e2);
		*/
		//System.out.println(Empregado.getTelefone());
	}
}
