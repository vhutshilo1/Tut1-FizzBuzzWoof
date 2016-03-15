#include <iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		if ((i % 3) == 0)   //fizz condition
		{
			cout << "fizz\n";
		}
		else if ((i % 5) == 0)
		{
			cout << "buzz\n";   //buzz condition
		}
		else if ((i%5)==0 &&(i%3)==0)   //fizz buzz condition
		{
		cout << "fizz buzz\n";   
		}
		else
		{
			cout << i << endl;
		}
	}

	return 0;
}