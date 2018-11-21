package introducao08GerenteVendedorAbstract;

public class Vendedor extends Empregado
{
	private double percComissao;
	private double vendasNoMes;
	
	public Vendedor (String nome,         double salario, 
	                 double percComissao, double vendasNoMes)
	{ 
		super(nome,salario);		
		this.percComissao = percComissao/100;
		this.vendasNoMes = vendasNoMes;		
			
	}

	public void aumentaSalario (double percentualDeAumento)
	{	percComissao += percComissao*percentualDeAumento/100;
	}

	public double getPercComissao()
	{	return percComissao;
	}

	public double getVendasNoMes()
	{	return vendasNoMes;
	}

	public double getSalarioTotal()
	{	return (super.getSalario()+percComissao*vendasNoMes);
	}

	public void setVendasNoMes(double vendasNoMes)
	{	this.vendasNoMes = vendasNoMes;
	}

	public void setPercComissao(double percComissao)
	{	this.percComissao = percComissao;
	}
}