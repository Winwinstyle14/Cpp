#include<iostream>

int main()
{
	int n;
	std::cout << "\nNhap n : ";
	std::cin >> n;

	int tong = 0;
	int a;

	for (int i = 0 ; i <= n ; i++)
	{
		tong += i;
		if (tong > n)
		{
			a = i;
			std::cout << "X nho nhat la: " << a;
			break;
		}
	}

}