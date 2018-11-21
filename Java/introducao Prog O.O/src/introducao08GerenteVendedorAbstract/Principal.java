package introducao08GerenteVendedorAbstract;

import corejava.*;

public class Principal
{	public static void main (String[] args)
	{	final int TAM = Console.readInt('\n' + "Informe o tamanho da lista de empregados: ");
		ListaDeObjetos<Empregado>  listaDeEmpregados = new ListaDeObjetos<Empregado>(TAM);
		String nome;
		double salario;
		Empregado umEmpregado;

		boolean continua = true;
		while (continua)
		{	System.out.println('\n' + "==============================================================");
			System.out.println('\n' + "O que voc� deseja fazer?");
			System.out.println('\n' + "1. Cadastrar um empregado");
			System.out.println("2. Alterar um empregado");
			System.out.println("3. Remover um empregado");
			System.out.println("4. Listar rela��o de empregados");
			System.out.println("5. Conceder aumento para todos os empregados");
			System.out.println("6. Sair");
						
			int opcao = Console.readInt('\n' + "Digite um n�mero entre 1 e 6:");			
					
		  	switch (opcao)
			{	case 1:
				{	nome = Console.readLine('\n' + "Digite o nome do empregado: ");
					salario = Console.readDouble("Digite o salario do empregado: ");

					String resposta = Console.readLine('\n' + 
						"O empregado que voc� deseja cadastrar � um gerente? (s/n)");

					if (resposta.equals("s"))
					{	umEmpregado = new Gerente(nome,salario);	
						listaDeEmpregados.adicionar(umEmpregado);
						System.out.println('\n' + "Gerente cadastrado com sucesso!");
					}
					else
					{	resposta = Console.readLine('\n' + 
							"O empregado que voc� deseja cadastrar � um vendedor? (s/n)");

						if (resposta.equals("s"))
						{	double percComissao = Console.readDouble
								("Informe o percentual de comiss�o: ");
							double vendasNoMes = Console.readDouble
								("Informe o valor de vendas no m�s: ");
													
							umEmpregado = new Vendedor(nome,salario,percComissao,vendasNoMes);						
							listaDeEmpregados.adicionar(umEmpregado);
							System.out.println('\n' + "Vendedor cadastrado com sucesso!");
						}
						else
						{	System.out.println('\n' + 
								"Op��o inv�lida: Um empregado deve ser Gerente ou Vendedor!");
						}
					}
					break;

				}
				case 2:	// Alterar
				{	int resposta = Console.readInt('\n' + 
						"Digite o n�mero do empregado que voc� deseja alterar: ");
								
					umEmpregado = listaDeEmpregados.recuperar(resposta);
								
					if (umEmpregado != null)			// Significa que achei o empregado 
														// que se deseja alterar	 
					{	System.out.println('\n' + "O que voc� deseja alterar?");
						System.out.println('\n' + "1. Nome");
						System.out.println("2. Salario");
						System.out.println("3. Percentual de Comiss�o (p/ Vendedor)");
						System.out.println("4. Vendas no M�s (p/ Vendedor)");

						int opcaoAlteracao = Console.readInt('\n' + "Digite um n�mero de 1 a 4:");			
					
						switch (opcaoAlteracao)
						{	case 1:
								String novoNome = Console.readLine("Digite o novo nome: ");
								umEmpregado.setNome(novoNome);
								System.out.println('\n' + "Altera��o de nome efetuada com sucesso!");						
								break;

							case 2:
								double novoSalario = Console.readDouble("Digite o novo sal�rio: ");
								umEmpregado.setSalario(novoSalario);
								System.out.println('\n' + "Altera��o de sal�rio efetuada com sucesso!");						
								break;

							case 3:
								if (umEmpregado instanceof Vendedor)
								{	double novoPercComissao = Console.readDouble
										("Digite o novo percentual de comiss�o: ");
										((Vendedor)umEmpregado).setPercComissao(novoPercComissao);
																		
									System.out.println('\n' + 
										"Altera��o de percentual de comiss�o efetuada com sucesso!");
								}
								else
									System.out.println('\n' + 
										"Este empregado n�o � um Vendedor, logo n�o possui percentual de comiss�o!");
																
								break;

							case 4:
								if (umEmpregado instanceof Vendedor)
								{	double novoVendasNoMes = Console.readDouble
										("Digite o novo valor de vendas no m�s: ");
										((Vendedor)umEmpregado).setVendasNoMes(novoVendasNoMes);
																			
									System.out.println('\n' + 
										"Altera��o de vendas no m�s efetuada com sucesso!");
								}
								else
									System.out.println('\n' + 
										"Este empregado n�o � um Vendedor, logo n�o possui valor de vendas no m�s!");
																
								break;

							default:
								System.out.println('\n' + "Op��o inv�lida!");						
								break;
						}
					}
					else
					{	System.out.println('\n' + "Empregado n�o encontrado!");
					}						
					break;
				}

				case 3:	// Remover
				{	int resposta = Console.readInt('\n' + 
						"Digite o n�mero do empregado que voc� deseja remover: ");
					if (listaDeEmpregados.remover(resposta))
						System.out.println('\n' + "Empregado removido com sucesso!");
					else
						System.out.println('\n' + "Empregado n�o encontrado!");
					break;
				}

				case 4:	// Listar tudo
					if (listaDeEmpregados.vazia())
						System.out.println('\n' + "N�o h� empregados na lista.");
					else
					{	System.out.println("");
						umEmpregado = listaDeEmpregados.recuperarPrimeiro();
						while (umEmpregado != null)  
						{	if (umEmpregado instanceof Gerente) //!(umEmpregado instanceof Vendedor)
							{	System.out.println ("N�mero = " + umEmpregado.getNumero() + 
							                        "  Nome = " + umEmpregado.getNome() + 
							                        "  Sal�rio = " + umEmpregado.getSalario());
							}
							else
							{	System.out.println ("N�mero = " + umEmpregado.getNumero() + 
							                        "  Nome = " + umEmpregado.getNome() + 
							                        "  Sal�rio Fixo = " + umEmpregado.getSalario() + 
							                        "  Sal�rio Total = " + ((Vendedor)umEmpregado).getSalarioTotal() + 
							                        "  Percentual de Comiss�o = " + ((Vendedor)umEmpregado).getPercComissao() + 
							                        "  Vendas no M�s = " + ((Vendedor)umEmpregado).getVendasNoMes());
							}
							umEmpregado = listaDeEmpregados.recuperarProximo();
						}
					}
					break;

				case 5:	// Conceder aumento a todos os empregados
					if (listaDeEmpregados.vazia())
						System.out.println('\n' + "N�o h� empregados na lista.");
					else
					{	double percentual = Console.readDouble('\n' + "Qual o percentual de aumento?");
						System.out.println("");
						umEmpregado = listaDeEmpregados.recuperarPrimeiro();
						while (umEmpregado != null)  
						{	umEmpregado.aumentaSalario(percentual);
							umEmpregado = listaDeEmpregados.recuperarProximo();
						}
						System.out.println('\n' + "Aumento de sal�rio concedido a todos os empregados!");
					}
					break;

				case 6:	// Sair
					continua = false;
					break;

				default:
					System.out.println('\n' + "Op��o inv�lida!");						
			}
		}		
	}
}