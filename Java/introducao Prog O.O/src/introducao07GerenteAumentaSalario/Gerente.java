package introducao07GerenteAumentaSalario;

public class Gerente extends Empregado
{
   	private Empregado secretaria;

	public Gerente(String nome, double salario, Empregado secretaria)
   	{  	super(nome, salario);
		this.secretaria = secretaria;
    }

   	public void aumentaSalario(double percentual)
	{	super.aumentaSalario(percentual*2);

   		//double sal = getSalario();
   		//sal = sal + sal*(percentual*2/100);
   		//setSalario(sal);


   	}

   	public void setSecretaria(Empregado e)
   	{  	secretaria = e;
   	}

   	public Empregado getSecretaria()
   	{  	return secretaria;
   	}
}
