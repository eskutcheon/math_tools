#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Permutations
{
	public:
	
	Permutations()
	{
	}
	
	long int factorial(int n)
	{
		if(n < 0)
		{
			cerr << "Factorials must be nonnegative. " << endl;
			exit(1);
		}
		if(n > 1)
			return n * factorial(n - 1);
		else
			return 1;
	}
	
	long int permutation(int n, int r)
	{	//permutations of r distinguishable ordered selections chosen from n things, without repetition
		// 	n!/(n-r)!
		return factorial(n)/factorial(n-r);
	}
	
	long int combination(int n, int r)
	{
		//combinations of r indistinguishable unordered selections chosen from n things, without repetition
		//  n!/r!(n-r)!
		return permutation(n, r)/factorial(r);
	}
	
	long int multinomial(int n, int r)
	{
		//unordered with repetition - sampling with replacement
		return combination((n + r - 1), (n - 1));
	}
	
	double Prob_draw(int draws, int n, int r)
	{
		//number of desired sets possible/total sets of same size
		//for straight flushes:
			//(10*4) / C(52, 2)
		return draws/combination(n, r);
	}
	
	long int possible_draws()
	{
		//do later
	}
};

int main()
{
	cout << obj.multinomial(n, r) << endl;
	cout << obj.permutation(n, r) << endl;
	cout << obj.combination(n, r) << endl;
	cout << obj.factorial(n) << endl;

	return 0;
}
