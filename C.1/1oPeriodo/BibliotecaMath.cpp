#include<math.h>
#include <iostream> //cout cin, printf scanf
using namespace std; //cout cin

int main()
{
	double x,y;
	
	cout << "Informe um numero: ";
	cin >> x;
	
	if (x <= 1)
		y = 1;
	else
		if (x <= 2)
			y = 2;
		else
			if (x <= 3)
				y = pow(x,2);
			else
				y = pow(x,3);
			

	cout << "\n" << y << "\n\n";
	
	system ("pause");
	return 0;	
}
