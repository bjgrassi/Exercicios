public class Empregado
{		
	private int numero;
	private String nome;
	private double salario;

	public Empregado (int numero, String nome, double salario)
	{	this.numero = numero;
		this.nome = nome;
		this.salario = salario;
	}

	public int getNumero()
	{	return numero;
	}

	public String getNome()
	{	return nome;
	}
		
	public double getSalario()
	{	return salario;
	}
}