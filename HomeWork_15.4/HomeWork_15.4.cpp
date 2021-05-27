#include <iostream>


int main()
{
	const int N = 15;
	int i = 0;

	for (i = 0; i < N; i++)
	{
		if ((i % 2) == 0)
		{
			std::cout << "Even__" << i << '\n';
		}

		else
		{
			std::cout << "Odd__" << i << '\n';
		}
	}
}