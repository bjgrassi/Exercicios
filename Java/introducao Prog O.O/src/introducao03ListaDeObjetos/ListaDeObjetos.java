package introducao03ListaDeObjetos;

import java.util.*;
public class ListaDeObjetos <E>
{	
	private ArrayList <E> lista;
	private int corrente = -1;

	public ListaDeObjetos (int tam)
	{		
		lista= new ArrayList<E>(tam);
	}

	public boolean adicionar(E obj)
	{		
		return(lista.add(obj));
	}

	public int tamanho()
	{		
		return lista.size();
	}

	public boolean remover(int numero)
	{		
		int pos=localizar(numero);
			
			if(pos==-1)
				return false;
			else{
				lista.remove(pos);
				return true;
			}
	}

	public E recuperar(int numero)
	{		
		if(lista.isEmpty())	
			return null;
		else
			{
			corrente=0;
			return lista.get(corrente);
			}
	}

	public boolean vazia()
	{		
		return lista.isEmpty();
	}

	private int localizar(int numero)
	{		
		Integer num=new Integer(numero);	
			
			for(int i=0;i<lista.size();i++)
				if(lista.get(i).equals(num))
					return i;
			
			return -1;
	}

	public E recuperarPrimeiro()
	{		
		if(lista.isEmpty())
			return null;
		else
			{ corrente = 0;
			  return lista.get(corrente);
			}
			
	}
						
	public E recuperarProximo()
	{		
		if(corrente==-1)	
			throw new ArrayIndexOutOfBoundsException("Fora do limite da lista");
		else			
			{ corrente++;
			if(corrente < tamanho())
				
				return lista.get(corrente);
			else
				{
				corrente=-1;
				return null;
				}
			}
	}
}