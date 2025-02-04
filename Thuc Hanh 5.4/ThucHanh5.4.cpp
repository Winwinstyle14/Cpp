#include<iostream>

int main()
{
	int a, b;

	std::cout << "Nhap a : ";
	std::cin >> a;
	std::cout << "Nhap b : ";
	std::cin >> b;

	float tich = a * b;

	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}

	float BCNN = tich / a;

	std::cout << "UCLN la : " << a << "\n";
	std::cout << "BCNN la : " << BCNN;
}