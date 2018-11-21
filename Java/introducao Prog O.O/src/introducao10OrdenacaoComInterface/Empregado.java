package introducao10OrdenacaoComInterface;

public class Empregado implements Ordenavel
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
	{	System.out.println ("N�mero = " + numero + "  Nome = " + nome + "  Sal�rio = " + salario);
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
		
//	public boolean equals (Object num)
//	{	return (new Integer(numero).equals(num));
//	}	

	public boolean equals (Object num)
	{	return numero == ((Integer)num).intValue();
	}

	public int comparar(Ordenavel b)
   	{	Empregado e = (Empregado) b;		
   		if (this.salario > e.salario) return 1;    	
		if (this.salario < e.salario) return -1;   		
   		return 0;
   	}
}