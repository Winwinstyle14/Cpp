#include<iostream>
#include<cmath>

int main()
{
	int x , y;


	std::cout << "Nhap so chia x: ";
	std::cin >> x;

	std::cout << "Nhap so bị chia y: ";
	std::cin >> y;

	if (y == 0)
	{
		std::cout << "Phep chia khong hop le.";
	}
	else
	{
		if (x % y == 0)
		{
			std::cout << x << " chia het cho " << y << "\n";
		}
		else if (x % y != 0)
		{
			int soDu = x % y;
			std::cout << x << " khong chia het cho " << y << ". So du la: "<< soDu << "\n";
		}
	}
}