#include<iostream>
using namespace std;
int main()
{
	int *poi, a = 0;
	poi = new int; 
	cout << "Enter a number : "<<endl;
	cin >> *poi;
	int b=2;
	a = 0;
	while (1)
	{
		if (b>*poi/2)
			break;
		if (*poi%b == 0)
		{
			a++;
			break;	
		}
		b++;
	}
	if (a!=0)
		cout << endl << *poi << " is not a prime number";
	else
	{
		cout << endl << *poi << " is a prime number";
		cout << "\nFactorial of " << *poi << " : ";
		for (int i = *poi - 1; i >0; i--)
			*poi = *poi*i;
		cout << *poi<<endl;
	}
	delete[] poi;
}
