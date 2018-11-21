package introducao02ArrayList;

public class Empregado
{
	private static int cont=0; //atributo de classe. independente da instancia ele existe
	private int numero; //atributo de instancia
	private String nome;
	private double salario;
	
	public Empregado (String v_nome, double v_salario)
	{	numero=++cont; //incrementa o cont e depois passa o valor pra numero
		nome = v_nome;
		salario = v_salario;
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
		
	public void setSalario(double s)
	{	salario = s;
	}
}