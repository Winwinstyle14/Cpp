#include<iostream>
#include<cmath>

int main()
{
	while (true)
	{
		int x;
		std::cout << "Nhap gia tri x la : ";
		std::cin >> x;

		bool kq1 = (x >= 0);
		bool kq2 = (x >= -1 && x <= 2) || (x >= 4 && x <= 6);
		bool kq3 = (x > -2 && x < 2) || (x == 5);
		bool kq4 = (x > -4 && x <= 0) || x > 4;

		std::cout << "Ket qua 1: " << kq1 << "\n";
		std::cout << "Ket qua 2: " << kq2 << "\n";
		std::cout << "Ket qua 3: " << kq3 << "\n";
		std::cout << "Ket qua 4: " << kq4 << "\n";
	}
}