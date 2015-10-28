#include "stdafx.h"
#include <iostream>
#include <iomanip>
#define MAX 1000

using namespace std;

int main()
{
    
	double arr_fib[MAX];
	int n;
	arr_fib[0]=1;
	arr_fib[1]=1;

	cout<<"eingabe n soll kleiner als 1000 n= ";
	cin>>n;

	if((n>0) && (n<=MAX))
	{
		cout<<"\n";
	

		//schleife zur berechnung
		for(int i=2; i<n; i++)
			arr_fib[i]=arr_fib[i-1]+arr_fib[i-2];
	
		// ausgabe-schleife
		for(int i=0; i<n; i++)
			cout<<"arr_fib[ "<<(i+1)<<"]= "<<setprecision(10)<< arr_fib[i]<<"\n";
	}
	else
		cout<<"limit überschritten. ";
	system("pause");
    return 0;
}

