#include<iostream>

int main()
{
	int n;
	while (true)
	{
		std::cout << "Nhap n : ";
		std::cin >> n;
		int dem = 0;
		std::cout << "\nKet qua 1 : ";
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				std::cout << i << " ";
				dem++;
			}
		}

		std::cout << "\nKet qua 2 : " << dem;

		bool check = true;

		for (int i = 2; i <= n - 1; i++)
		{
			if (n % i == 0)
			{
				check = false;
				break;
			}
		}

		std::cout << "\nKet qua 3 : " << (check ? "n la so nguyen to." : "n khong phai la so nguyen to.") << "\n";
	}
	

}