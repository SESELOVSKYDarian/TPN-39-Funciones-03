#include <iostream>
using namespace std;
int CalcularMax(int a, int b, int c);
int main ()
{
	int n1, n2, n3;
	cout<<"Ingrese un numero 1: ";
	cin>>n1;
	cout<<"Ingrese un numero 2: ";
	cin>>n2;
	cout<<"Ingrese un numero 3: ";
	cin>>n3;
	cout<<CalcularMax(n1,n2,n3);
	return 0;	
}
int CalcularMax(int a, int b, int c)
{
	int mayor=a;
	if (a<=b && b>=c)
	{
		mayor=b;
	}
	if (a<=c && b>=c)
	{
		mayor=c;
	}
	return mayor;
}