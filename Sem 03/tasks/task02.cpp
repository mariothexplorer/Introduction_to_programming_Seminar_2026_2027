#include <iostream>

int main()
{
	unsigned n=0;
	std::cin>>n;
	unsigned current;
	unsigned sum = 0;
	bool even = false;
	for (unsigned i =1; i <= n; i++)
	{
		std::cin >> current;
		if (current % 2 == 0)
		{
			sum = sum * 10 + current;
		}		
	}
	std::cout << sum;

}
