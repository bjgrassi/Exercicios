package introducao03ListaDeObjetos;

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
		
	public boolean equals (Object num)
	{	Integer n=(Integer)num;
		if(n.intValue()==numero)
			return true;
			else
				return false;
	}
}