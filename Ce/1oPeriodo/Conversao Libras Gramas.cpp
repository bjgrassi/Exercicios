#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

int main ()
{ float libras;

	cout << "Valor em libras: ";
	cin >> libras;
	
	float gramas = libras * 453.59; //Conversao libras para gramas
	
	cout << "\nConversao de libras para gramas: " << gramas << "g \n\n";
	system ("PAUSE");
	
	return 0;
}
