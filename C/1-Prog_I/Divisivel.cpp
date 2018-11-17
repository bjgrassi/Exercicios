#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

//Se o numero for divisivel por 2 dos numeros, ele printa o primeiro da lista
int main()
{
	int A;
	
	cout << "Informe um numero: ";
	cin >> A;
	
	if (A % 10 == 0)
		cout << "\nDivisivel por 10\n";
	else
		if (A%5 == 0)
			cout << "\nDivisivel por 5\n";
		else
			if (A%2 == 0)
				cout << "\nDivisivel por 2\n";
			else
				cout << "\nNao eh divisivel por 10, 5 e 2\n";
	
	system ("pause");
	return 0;	
}
