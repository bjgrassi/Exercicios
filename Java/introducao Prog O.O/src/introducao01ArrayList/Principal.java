package introducao01ArrayList;
import corejava.*;
import java.util.ArrayList;

public class Principal
{	public static void main (String[] args)
	{		
		final int TAM = Console.readInt("Informe o tamanho da lista:");

		ArrayList <Empregado> ListaDeEmpregados = new ArrayList<Empregado>(TAM);

		Empregado umEmpregado;


		boolean continua = true;
		while (continua)
		{	System.out.println('\n' + "O que você deseja fazer?");
			System.out.println('\n' + "1. Cadastrar um empregado");
			System.out.println("2. (Nao Funfa) Alterar um empregado");
			System.out.println("3. (Nao Funfa) Remover um empregado");
			System.out.println("4. Listar relação de empregados");
			System.out.println("5. Sair");
						
			int opcao = Console.readInt('\n' + "Digite um número entre 1 e 5:");			
					
			switch (opcao)
			{	case 1:
					String nome = Console.readLine("Informe o nome:");
					double salario = Console.readDouble("Informe o salario:");
					
					umEmpregado = new Empregado(nome, salario);

					ListaDeEmpregados.add(umEmpregado);
					break;
				case 2:
										
					break;
				case 3:

					break;
				case 4:

					for(int i=0;i<ListaDeEmpregados.size();i++)
						{
							umEmpregado=ListaDeEmpregados.get(i);
							umEmpregado.imprime();
						}
					break;
				case 5:
					continua = false;
					break;
				default:
					System.out.println('\n' + "Opção inválida!");			
					break;
			}
		}		
	}
}