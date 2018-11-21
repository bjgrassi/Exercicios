package introducao04ExcecaoEmpregado;

public class Empregado 
{
	private static int contador = 0;
	private int numero;
	private String nome;
	private double salario;
	private static double salmax=30000;
		
	public Empregado (String nome, double salario) throws ExcecaoEmpregado
	{	this.numero = ++contador;
		this.nome = nome;
		setSalario(salario);
	}

	public void imprime()
	{	System.out.println ("Número = " + numero + "  Nome = " + nome + "  Salário = " + salario);
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
		
	public void setNome(String n)
	{	nome = n;
	}
		
	public void setSalario(double s) throws ExcecaoEmpregado
	{		
		if(s>=salmax)
			throw new ExcecaoEmpregado("ERRO: Salario maior que o salario maximo!");
		else
			this.salario=s;		
	}
		
//	public boolean equals (Object num)
//	{	return (new Integer(numero).equals(num));
//	}

	public boolean equals (Object num)
	{	return numero == ((Integer)num).intValue();
	}
}