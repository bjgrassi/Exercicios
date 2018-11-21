import java.sql.*;

public class Principal
{	public static void main (String[] args)
	{	Connection conn = null;			
		PreparedStatement pstmt = null;
		try
		{	DriverManager.registerDriver (new org.postgresql.Driver()); 
			conn = DriverManager.getConnection
	    		("jdbc:postgresql://localhost:5432/Banco","carlos","carlos");
	    	
	    	// No PostgreSQL o nome do usuário e a senha são case sensitive,
	    	// ao contrário do que acontece no Oracle.

			conn.setAutoCommit(false);
	  	}
		catch (SQLException e)
		{	System.out.println ('\n' + "Erro na conexão com o banco.");
			e.printStackTrace();
			System.exit(1);
		}
				
		try
		{	pstmt = conn.prepareStatement
				("SELECT NUMERO, NOME, SALARIO " +
	 			 "FROM EMPREGADOS " +
	 			 "ORDER BY NUMERO"); 
			ResultSet rs = pstmt.executeQuery();
	 								
			boolean continua = rs.next();
			while(continua)
			{	System.out.println ('\n' + "Numero = " + rs.getInt("NUMERO"));
				System.out.println ("Nome = " + rs.getString("NOME"));
				System.out.println ("Salario = " + rs.getDouble("SALARIO"));

				continua = rs.next();
			}
			pstmt.close();
			conn.close();
	    }
		catch (SQLException e)
		{	System.out.println ('\n' + "Erro ao recuperar dados no banco.");
			e.printStackTrace();
			System.exit(1);
		}
	}
}