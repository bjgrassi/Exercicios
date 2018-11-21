package introducao00;

public class Empregado 
{	private String nome;
	private double salario;
	
	//private static String telefone = "22223333";
	
	public Empregado(String nome, double salario)
	{	this.nome = nome;
		this.salario = salario;
	}
	
	public void imprime()
	{	System.out.println("Nome = " + nome + " salário = " + salario);
	}
	
/*	public String toString()
	{	return "Nome = " + nome + " salário = " + salario;
	}
*/
/*	public static String getTelefone()
	{	return telefone;
	}
*/
	public String getNome() 
	{	return nome;
	}
	public void setNome(String nome) 
	{	this.nome = nome;
	}
	public double getSalario() 
	{	return salario;
	}
	public void setSalario(double salario) 
	{	this.salario = salario;
	}
}
