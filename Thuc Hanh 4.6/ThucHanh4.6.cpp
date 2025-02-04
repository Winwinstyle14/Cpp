#include<iostream>

int main()
{
	float x, y;

	std::cout << "Nhap x: ";
	std::cin >> x;
	std::cout << "Nhap y: ";
	std::cin >> y;


	if (x == 0)
	{
		if (y == 0)
		{
			std::cout << "x bang 0 " << "\n";
			std::cout << "y bang 0 " << "\n";
		}
		else
		{
			std::cout << "x bang 0 " << "\n";
			std::cout << "y khac 0 " << "\n";
		}
	}
	else
	{
		if (x > 0 && y > 0 || x < 0 && y < 0)
		{
			std::cout << "x khac 0 " << "\n";
			std::cout << "y khac 0 " << "\n";
			std::cout << "Hai so cung dau " << "\n";
		}
		else if (x > 0 && y < 0 || x < 0 && y > 0)
		{
			std::cout << "x khac 0 " << "\n";
			std::cout << "y khac 0 " << "\n";
			std::cout << "Hai so trai dau " << "\n";
		}
	}
}