#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

int main()
{
	int salario;
	
	cout << "Informe o salario: ";
	cin >> salario;
	
	if (salario <= 600)
		cout << "\nIsento de desconto\n\n";
	else 
		if (salario <= 1200)
			cout << "\nDesconto de 20%: " << salario - salario*0.2 << "\n";
		else
			if (salario <= 2000)
				cout << "\nDesconto de 25%: " << salario - salario*0.25 << "\n";
			else
				cout << "\nDesconto de 30%: " << salario - salario*0.3 << "\n";
	
	system ("pause");
	return 0;	
}
