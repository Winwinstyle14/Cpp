#include<iostream>

int main()
{
	int km ;
	int sotien = 15000;

	std::cout << "Nhap so km: ";
	std::cin >> km;

	if (km == 1)
	{
		std::cout << "So tien phai tra la: " << sotien << "\n";
	}
	else if (km >= 2 && km <= 30)
	{
		std::cout << "So tien phai tra la: " << (sotien + (km - 1) * 13000) << "\n";
	}
	else if (km > 30)
	{
		std::cout << "So tien phai tra la: " << (sotien + (29 * 13000) + (km - 30)* 10000) << "\n";

	}
}