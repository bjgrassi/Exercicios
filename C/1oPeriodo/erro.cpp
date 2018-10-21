//LISTA EXTRA 11-

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
 
int main ()
{
    char frase [50], temp[1];
    int i=0, j=0, subcont=0, somacont=0;
 
    printf("Digite uma frase: \n");
    fflush(stdin);
    scanf("%[^\n]s",&frase);
 
 	
 
    while (i<strlen(frase))
     {	j=0;
	 	strcpy(temp,frase);
        {
            if (temp[j]==frase[i])
            	{
					subcont++;
            		
            	}
            else	
       		if (temp[j]!=frase[i])
    			{
					somacont++;
    		    	
    		    }
        	
    	}
        
        
     }
     
 	int total=somacont-subcont;
    printf("cont: %d", total);

	system("pause");
    return 0;
}

