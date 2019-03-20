//cayley table generator

#include <iostream>

using namespace std;

//meant exclusively for cayley tables of multiplication mod n

int main()
{
	int n;
	cout << "For a table of multiplication mod n, n= ";
	cin >> n;
	
	int myArray[n-1][n-1];
	
	for(int i = 0; i < (n-1); i++) //rows
	{
		for(int j = 0; j < (n-1); j++)//columns
			myArray[i][j] = ((j+1)*(i+1)) % n;
	}
	
	
	for(int i = 0; i < (n-1); i++)
	{
		for(int j = 0; j < (n-1); j++)
			cout << myArray[i][j] << "\t";
		
		cout << endl;
	}
}
