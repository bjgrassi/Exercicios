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
			System.out.println('\n' + "O que você deseja fazer?");
			System.out.println('\n' + "1. Cadastrar um empregado");
			System.out.println("2. Alterar um empregado");
			System.out.println("3. Remover um empregado");
			System.out.println("4. Listar relação de empregados");
			System.out.println("5. Conceder aumento para todos os empregados");
			System.out.println("6. Sair");
						
			int opcao = Console.readInt('\n' + "Digite um número entre 1 e 6:");			
					
		  	switch (opcao)
			{	case 1:
				{	nome = Console.readLine('\n' + "Digite o nome do empregado: ");
					salario = Console.readDouble("Digite o salario do empregado: ");

					String resposta = Console.readLine('\n' + 
						"O empregado que você deseja cadastrar é um gerente? (s/n)");

					if (resposta.equals("s"))
					{	umEmpregado = new Gerente(nome,salario);	
						listaDeEmpregados.adicionar(umEmpregado);
						System.out.println('\n' + "Gerente cadastrado com sucesso!");
					}
					else
					{	resposta = Console.readLine('\n' + 
							"O empregado que você deseja cadastrar é um vendedor? (s/n)");

						if (resposta.equals("s"))
						{	double percComissao = Console.readDouble
								("Informe o percentual de comissão: ");
							double vendasNoMes = Console.readDouble
								("Informe o valor de vendas no mês: ");
													
							umEmpregado = new Vendedor(nome,salario,percComissao,vendasNoMes);						
							listaDeEmpregados.adicionar(umEmpregado);
							System.out.println('\n' + "Vendedor cadastrado com sucesso!");
						}
						else
						{	System.out.println('\n' + 
								"Opção inválida: Um empregado deve ser Gerente ou Vendedor!");
						}
					}
					break;

				}
				case 2:	// Alterar
				{	int resposta = Console.readInt('\n' + 
						"Digite o número do empregado que você deseja alterar: ");
								
					umEmpregado = listaDeEmpregados.recuperar(resposta);
								
					if (umEmpregado != null)			// Significa que achei o empregado 
														// que se deseja alterar	 
					{	System.out.println('\n' + "O que você deseja alterar?");
						System.out.println('\n' + "1. Nome");
						System.out.println("2. Salario");
						System.out.println("3. Percentual de Comissão (p/ Vendedor)");
						System.out.println("4. Vendas no Mês (p/ Vendedor)");

						int opcaoAlteracao = Console.readInt('\n' + "Digite um número de 1 a 4:");			
					
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

							case 3:
								if (umEmpregado instanceof Vendedor)
								{	double novoPercComissao = Console.readDouble
										("Digite o novo percentual de comissão: ");
										((Vendedor)umEmpregado).setPercComissao(novoPercComissao);
																		
									System.out.println('\n' + 
										"Alteração de percentual de comissão efetuada com sucesso!");
								}
								else
									System.out.println('\n' + 
										"Este empregado não é um Vendedor, logo não possui percentual de comissão!");
																
								break;

							case 4:
								if (umEmpregado instanceof Vendedor)
								{	double novoVendasNoMes = Console.readDouble
										("Digite o novo valor de vendas no mês: ");
										((Vendedor)umEmpregado).setVendasNoMes(novoVendasNoMes);
																			
									System.out.println('\n' + 
										"Alteração de vendas no mês efetuada com sucesso!");
								}
								else
									System.out.println('\n' + 
										"Este empregado não é um Vendedor, logo não possui valor de vendas no mês!");
																
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

				case 3:	// Remover
				{	int resposta = Console.readInt('\n' + 
						"Digite o número do empregado que você deseja remover: ");
					if (listaDeEmpregados.remover(resposta))
						System.out.println('\n' + "Empregado removido com sucesso!");
					else
						System.out.println('\n' + "Empregado não encontrado!");
					break;
				}

				case 4:	// Listar tudo
					if (listaDeEmpregados.vazia())
						System.out.println('\n' + "Não há empregados na lista.");
					else
					{	System.out.println("");
						umEmpregado = listaDeEmpregados.recuperarPrimeiro();
						while (umEmpregado != null)  
						{	if (umEmpregado instanceof Gerente) //!(umEmpregado instanceof Vendedor)
							{	System.out.println ("Número = " + umEmpregado.getNumero() + 
							                        "  Nome = " + umEmpregado.getNome() + 
							                        "  Salário = " + umEmpregado.getSalario());
							}
							else
							{	System.out.println ("Número = " + umEmpregado.getNumero() + 
							                        "  Nome = " + umEmpregado.getNome() + 
							                        "  Salário Fixo = " + umEmpregado.getSalario() + 
							                        "  Salário Total = " + ((Vendedor)umEmpregado).getSalarioTotal() + 
							                        "  Percentual de Comissão = " + ((Vendedor)umEmpregado).getPercComissao() + 
							                        "  Vendas no Mês = " + ((Vendedor)umEmpregado).getVendasNoMes());
							}
							umEmpregado = listaDeEmpregados.recuperarProximo();
						}
					}
					break;

				case 5:	// Conceder aumento a todos os empregados
					if (listaDeEmpregados.vazia())
						System.out.println('\n' + "Não há empregados na lista.");
					else
					{	double percentual = Console.readDouble('\n' + "Qual o percentual de aumento?");
						System.out.println("");
						umEmpregado = listaDeEmpregados.recuperarPrimeiro();
						while (umEmpregado != null)  
						{	umEmpregado.aumentaSalario(percentual);
							umEmpregado = listaDeEmpregados.recuperarProximo();
						}
						System.out.println('\n' + "Aumento de salário concedido a todos os empregados!");
					}
					break;

				case 6:	// Sair
					continua = false;
					break;

				default:
					System.out.println('\n' + "Opção inválida!");						
			}
		}		
	}
}