#include<iostream>

int main()
{
	int n;
	while (true)
	{
		std::cout << "\nNhap n ; ";
		std::cin >> n;

		float total = 0;

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				total += i;
			}
		}
		if (total == n)
		{
			std::cout << n << " la so hoan hao.";
		}
		else
		{
			std::cout << n << " khong la so hoan hao.";

		}
	}
	
}