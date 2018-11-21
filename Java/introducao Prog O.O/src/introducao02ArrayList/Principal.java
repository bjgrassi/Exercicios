package introducao02ArrayList;

import corejava.*;
import java.util.ArrayList;

public class Principal
{	public static void main (String[] args)
	{	final int TAM = Console.readInt('\n' + "Informe o tamanho da lista de empregados: ");
		ArrayList <Empregado> listaDeEmpregados = new ArrayList<Empregado>(TAM); //<>parametrizar, nao precisa fazer cash
		String nome;
		double salario;
		Empregado umEmpregado = null;

		boolean continua = true;
		while (continua)
		{	System.out.println('\n' + "O que você deseja fazer?");
			System.out.println('\n' + "1. Cadastrar um empregado");
			System.out.println("2. Alterar um empregado");
			System.out.println("3. Remover um empregado");
			System.out.println("4. Listar relação de empregados");
			System.out.println("5. Listar apenas Número e Nome dos empregados");
			System.out.println("6. Sair");
						
			int opcao = Console.readInt('\n' + "Digite um número entre 1 e 6:");			
					
		  	switch (opcao)
			{	case 1:
					nome = Console.readLine('\n' + "Digite o nome do empregado: ");
					salario = Console.readDouble("Digite o salario do empregado: ");
					umEmpregado = new Empregado (nome, salario);
					listaDeEmpregados.add(umEmpregado);
					System.out.println('\n' + "Empregado cadastrado com sucesso!");
					break;

				case 2:
				{	int resposta = Console.readInt('\n' + "Digite o número do empregado que você deseja alterar: ");
					boolean achou = false;								

					for (int i=0;i<listaDeEmpregados.size();i++)
					{	umEmpregado=listaDeEmpregados.get(i);
							
						if(umEmpregado.getNumero()==resposta)
						{	achou=true;
							break;
						}
					}
								
					if (achou)			 
					{	System.out.println('\n' + "O que você deseja alterar?");
						System.out.println('\n' + "1. Nome");
						System.out.println("2. Salario");

						int opcaoAlteracao = Console.readInt('\n' + "Digite 1 ou 2:");			
			
						switch (opcaoAlteracao)
						{	case 1:
								String novoNome = Console.readLine("Digite o novo nome: ");
								umEmpregado.setNome(novoNome);
								System.out.println('\n' + "Alteração de nome efetuada com sucesso!");						
								break;
							case 2:
								double novoSalario = Console.readDouble("Digite o novo salário: ");
								umEmpregado.setSalario(novoSalario);
								System.out.println('\n' + "Alteração de salário efetuada com sucesso!");						
								break;
							default:
								System.out.println('\n' + "Opção inválida!");						
								break;
						}
					}
					else
					{	System.out.println('\n' + "Empregado não encontrado!");
					}						
					break;
				}

				case 3:
				{	int resposta = Console.readInt('\n' + "Digite o número do empregado que você deseja remover: ");
					boolean achou = false;								

					int i; //guardar o indice
					for (i = 0; i < listaDeEmpregados.size(); i++)
					{	umEmpregado = listaDeEmpregados.get(i); //umEmpregado = (Empregado)listaDeEmpregados.get(i);
											
						if (resposta == umEmpregado.getNumero())
						{	achou = true;
							break;				// Sai do for
						}
					}
								
					if (achou)			 
					{	listaDeEmpregados.remove(i);
						System.out.println('\n' + "Empregado removido com sucesso!");
					}
					else
					{	System.out.println('\n' + "Empregado não encontrado!");
					}						
					break;
				}

				case 4:
					if (listaDeEmpregados.isEmpty())
						System.out.println('\n' + "Não há empregados na lista.");
					else
					{	System.out.println("");
						for (int i = 0; i < listaDeEmpregados.size(); i++)  
						{	umEmpregado = (Empregado)listaDeEmpregados.get(i);
							umEmpregado.imprime();
						}
					}
					break;

				case 5:
					if (listaDeEmpregados.isEmpty())
						System.out.println('\n' + "Não há empregados na lista.");
					else
					{	System.out.println("");
						for (int i = 0; i < listaDeEmpregados.size(); i++)  
						{	umEmpregado = listaDeEmpregados.get(i);
							System.out.println ("Numero = " + umEmpregado.getNumero() + 
							                  "  Nome = " + umEmpregado.getNome());
						}
					}
					break;
				
				case 6:
					continua = false;
					break;

				default:
					System.out.println('\n' + "Opção inválida!");						
			}
		}		
	}
}