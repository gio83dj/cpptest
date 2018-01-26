#include <iostream>
using namespace std;

int main()
{
	int n,i;
	bool isPrime = true;
		
	cout << "Inserisci un intero positivo:  ";
	cin >> n;
	
	for(i = 2; i <= n / 2; ++i)
	{
		if(n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
if (isPrime)
	cout << "Questo è un numero primo!!!" << endl;
else
	cout << "Questo non è un numero primo." << endl;
return 0;
} 
