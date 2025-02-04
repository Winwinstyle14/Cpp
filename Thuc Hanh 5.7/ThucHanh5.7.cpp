#include<iostream>

int main()
{
	int n;
	while (true)
	{
		std::cout << "\nNhap n : ";
		std::cin >> n;
		double tong = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i < 5)
			{
				tong += (- 2 * pow(( i), 2) + (4 * i) - 9);
			}
			else
			{
				tong += (2 * pow(( i), 2) + (5 * i) + 9);
			}
		}

		std::cout << "Ket qua : " << tong;
	}
	
}