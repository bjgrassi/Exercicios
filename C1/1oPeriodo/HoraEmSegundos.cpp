#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

//Transformar horário em segundos

int main (){ 
	float h,m,s;
	
	cout << "Valor hora: ";
	cin >> h;
	cout << "Valor min: ";
	cin >> m;
	cout << "Valor seg: ";
	cin >> s;
	
	float ht = h * 60;
	float mt = m * 60;
	float total = ht * mt + s;
	
	cout << "Valor total em seg: " << total << " segundos";
	
	return 0;
    system ("pause");
}
