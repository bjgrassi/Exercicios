package introducao09OrdenacaoSemInterface;

public class Ordenacao
{  	public static void ordena(Ordenavel a[]) //Ordenavel[] a
   	{  	int n = a.length;
      	boolean troca = true;
      	while (troca)
      	{	troca = false;
      		for (int i = 0; i < n - 1; i++)
    		{	Ordenavel temp = a[i];
    			if (temp.comparar(a[i+1]) > 0)
      			{	a[i] = a[i + 1];
      				a[i + 1] = temp;
      				troca = true;
      			}
      		}
      	}
   	}
}