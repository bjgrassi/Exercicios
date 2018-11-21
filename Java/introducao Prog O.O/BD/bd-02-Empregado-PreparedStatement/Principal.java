import corejava.*;
import java.util.*;   // Em função da classe Vector
import java.sql.*;
import oracle.jdbc.driver.*;

public class Principal
{	public static void main (String[] args)
	{	Connection conn = null;			
				
		try
		{	DriverManager.registerDriver(new OracleDriver()); 
			conn = DriverManager.getConnection
	    		("jdbc:oracle:thin:@sbd:1521:orcl","java02","java02");
			conn.setAutoCommit(false);
		}
		catch (SQLException e)
		{	System.out.println ('\n' + "Erro na conexão com o banco.");
			e.printStackTrace();
			System.exit(1);
		}
				
		String nome;
		double salario;
		Empregado umEmpregado;
				
		boolean continua = true;
		while (continua)
		{	System.out.println('\n' + "O que você deseja fazer?");
			System.out.println('\n' + "1. Cadastrar um empregado");
			System.out.println("2. Alterar um empregado");
			System.out.println("3. Remover um empregado");
			System.out.println("4. Listar todos os empregados");
			System.out.println("5. Sair");
						
			int opcao = Console.readInt('\n' + "Digite um número entre 1 e 5:");			
			
		  	switch (opcao)
			{	case 1:
					nome = Console.readLine('\n' + "Digite o nome do empregado: ");
					salario = Console.readDouble("Digite o salario do empregado: ");
					try
==>					{		
											
											
											
					}
					catch (SQLException e)
					{	System.out.println ('\n' + "Erro na inclusão de um empregado.");
						e.printStackTrace();
						System.exit(1);
					}
					break;
				case 2:
				{	int resposta = Console.readInt('\n' + "Digite o número do empregado que você deseja alterar: ");
								
==>								
										
					if (umEmpregado != null)
					{	System.out.println('\n' + "Número = " + umEmpregado.getNumero() + 
											  "    Nome = " + umEmpregado.getNome() +
											  "    Salário = " + umEmpregado.getSalario());
																							
						System.out.println('\n' + "O que você deseja alterar?");
						System.out.println('\n' + "1. Nome");
						System.out.println("2. Salario");

						int opcaoAlteracao = Console.readInt('\n' + "Digite um número de 1 a 2:");			
					
					  	switch (opcaoAlteracao)
						{	case 1:
								String novoNome = Console.readLine("Digite o novo nome: ");
								try
==>								{		
																	
																	
																	
																	
																	
																	
								}
								catch (SQLException e)
								{	System.out.println ('\n' + "Erro na alteração de um empregado.");
									e.printStackTrace();
									System.exit(1);
								}
								break;
							case 2:
								double novoSalario = Console.readDouble("Digite o novo salário: ");
								try
==>								{		
																	
																	
																	
																	
																	
																	
								}
								catch (SQLException e)
								{	System.out.println ('\n' + "Erro na alteração de um empregado.");
									e.printStackTrace();
									System.exit(1);
								}
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
										
					try
==>					{		
											
											
											
											
											
											
					}		
					catch (SQLException e)
					{	System.out.println ('\n' + "Erro na exclusão de um empregado.");
						e.printStackTrace();
						System.exit(1);
					}	
					break;
				}
				case 4:
==>				{		
										
					if (arrayEmpregados == null)
					{	System.out.println('\n' + "Não há empregados cadastrados.");
						break;
					}
										
					System.out.println("");
==>					for (                                    )
==>					{		
						System.out.println(	"Número = " + umEmpregado.getNumero() + 
											"  Nome = " + umEmpregado.getNome() +
											"  Salário = " + umEmpregado.getSalario());
					}
							
					break;
				}
				case 5:
					continua = false;
					try
					{	conn.close();
					}
					catch (SQLException e)
					{	System.out.println ('\n' + "Erro ao fechar a conexão com o banco de dados.");
						e.printStackTrace();
						System.exit(1);
					}
					break;
				default:
					System.out.println('\n' + "Opção inválida!");						
			}
		}		
	}
}
