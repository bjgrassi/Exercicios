package introducao06GerenteComSecretaria;

public class Gerente     extends Empregado
{  	
	private Empregado secretaria;			

	public Gerente(String nome, double salario, Empregado secretaria)
	{  	super(nome,salario);
		this.secretaria=secretaria;
				
    }
    
   	public void setSecretaria(Empregado e)
	{  	secretaria=e;
   	}

   	public Empregado getSecretaria()
	{  	return secretaria;
   	}
}