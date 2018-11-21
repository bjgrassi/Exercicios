import corejava.*;
import java.util.*;   // Em fun��o da classe Vector
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
		{	System.out.println ('\n' + "Erro na conex�o com o banco.");
			e.printStackTrace();
			System.exit(1);
		}
				
		String nome;
		double salario;
		Empregado umEmpregado;
				
		boolean continua = true;
		while (continua)
		{	System.out.println('\n' + "O que voc� deseja fazer?");
			System.out.println('\n' + "1. Cadastrar um empregado");
			System.out.println("2. Alterar um empregado");
			System.out.println("3. Remover um empregado");
			System.out.println("4. Listar todos os empregados");
			System.out.println("5. Sair");
						
			int opcao = Console.readInt('\n' + "Digite um n�mero entre 1 e 5:");			
			
		  	switch (opcao)
			{	case 1:
					nome = Console.readLine('\n' + "Digite o nome do empregado: ");
					salario = Console.readDouble("Digite o salario do empregado: ");
					try
==>					{		
											
											
											
					}
					catch (SQLException e)
					{	System.out.println ('\n' + "Erro na inclus�o de um empregado.");
						e.printStackTrace();
						System.exit(1);
					}
					break;
				case 2:
				{	int resposta = Console.readInt('\n' + "Digite o n�mero do empregado que voc� deseja alterar: ");
								
==>								
										
					if (umEmpregado != null)
					{	System.out.println('\n' + "N�mero = " + umEmpregado.getNumero() + 
											  "    Nome = " + umEmpregado.getNome() +
											  "    Sal�rio = " + umEmpregado.getSalario());
																							
						System.out.println('\n' + "O que voc� deseja alterar?");
						System.out.println('\n' + "1. Nome");
						System.out.println("2. Salario");

						int opcaoAlteracao = Console.readInt('\n' + "Digite um n�mero de 1 a 2:");			
					
					  	switch (opcaoAlteracao)
						{	case 1:
								String novoNome = Console.readLine("Digite o novo nome: ");
								try
==>								{		
																	
																	
																	
																	
																	
																	
								}
								catch (SQLException e)
								{	System.out.println ('\n' + "Erro na altera��o de um empregado.");
									e.printStackTrace();
									System.exit(1);
								}
								break;
							case 2:
								double novoSalario = Console.readDouble("Digite o novo sal�rio: ");
								try
==>								{		
																	
																	
																	
																	
																	
																	
								}
								catch (SQLException e)
								{	System.out.println ('\n' + "Erro na altera��o de um empregado.");
									e.printStackTrace();
									System.exit(1);
								}
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
				case 3:
				{	int resposta = Console.readInt('\n' + "Digite o n�mero do empregado que voc� deseja remover: ");
										
					try
==>					{		
											
											
											
											
											
											
					}		
					catch (SQLException e)
					{	System.out.println ('\n' + "Erro na exclus�o de um empregado.");
						e.printStackTrace();
						System.exit(1);
					}	
					break;
				}
				case 4:
==>				{		
										
					if (arrayEmpregados == null)
					{	System.out.println('\n' + "N�o h� empregados cadastrados.");
						break;
					}
										
					System.out.println("");
==>					for (                                    )
==>					{		
						System.out.println(	"N�mero = " + umEmpregado.getNumero() + 
											"  Nome = " + umEmpregado.getNome() +
											"  Sal�rio = " + umEmpregado.getSalario());
					}
							
					break;
				}
				case 5:
					continua = false;
					try
					{	conn.close();
					}
					catch (SQLException e)
					{	System.out.println ('\n' + "Erro ao fechar a conex�o com o banco de dados.");
						e.printStackTrace();
						System.exit(1);
					}
					break;
				default:
					System.out.println('\n' + "Op��o inv�lida!");						
			}
		}		
	}
}
