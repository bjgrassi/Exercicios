package introducao07GerenteAumentaSalario;

public class Empregado 
{
	private static int contador = 0;
	private int numero;
	private String nome;
	private double salario;
	
	public Empregado (String nome, double salario)
	{	this.numero = ++contador;
		this.nome = nome;
		this.salario = salario;
	}

	public void imprime()
	{	System.out.println ("Número = " + numero + 
							"  Nome = " + nome + 
							"  Salário = " + salario);
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
		
	public void setSalario(double s)
	{	salario = s;
	}
		
   	public void aumentaSalario(double percentual)
	{	salario = salario + salario*percentual/100;	
			//salario*(1+percentual/100);
   	}

//	public boolean equals (Object num)
//	{	return (new Integer(numero).equals(num));
//	}

	public boolean equals (Object num)
	{	return numero == ((Integer)num).intValue();
	}
}