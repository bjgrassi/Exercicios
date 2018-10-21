#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

//Tres formas diferentes de fazer a mesma coisa

int main()
{
	int n1,n2,n3;
	
	cout << "Informe tres numeros: ";
	cin >> n1 >> n2 >> n3;
	
	if ((n1 < n2) && (n1 < n3))
		cout << "\nO menor numero eh: " << n1 << "\n\n";

	if ((n2 < n1) && (n2 < n3))
		cout << "\nO menor numero eh: " << n2 << "\n\n";

	if ((n3 < n1) && (n3 < n2))
		cout << "\nO menor numero eh: " << n3 << "\n\n";
   
	system ("pause");
	return 0;	
}

#include<iostream>
using namespace std; //so roda com isso e o include juntos

int main()
{
	int n1,n2,n3;
	
	cout << "Informe três numeros: ";
	cin >> n1 >> n2 >> n3;
	
	if ((n1 < n2) && (n1 < n3))
		cout << "\nO menor numero eh: " << n1 << "\n\n";
	else 
		if (n2 < n3)
			cout << "\nO menor numero eh: " << n2 << "\n\n";
		else
			cout << "\nO menor numero eh: " << n3 << "\n\n";
    
	system ("pause");
	return 0;	
}

#include<iostream>
using namespace std; //so roda com isso e o include juntos

int main()
{
	int n1,n2,n3, menor;
	
	cout << "Informe três numeros: ";
	cin >> n1 >> n2 >> n3;
	
	menor = n1;
	
	if (n2 < menor)
		menor = n2;
	 
	if (n3 < menor)
		menor = n3;
		
	cout << "\nO menor numero eh: " << menor << "\n\n";
    
	system ("pause");
	return 0;	
}
