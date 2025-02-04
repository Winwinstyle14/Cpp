#include<iostream>
#include<cmath>

int main()
{
	int n;
	std::cout << "Nhap n: ";
	std::cin >> n;
	if (n < 0)
	{
		std::cout << "Khong hop le. Yeu cau nhap so nguyen duong.";
	}
	else
	{
		int a = sqrt(n) * sqrt(n);

		if (a == n) {
			std::cout << "n la so ching phuong" << "\n";
		}
		else
		{
			std::cout << "n khong phai so la ching phuong" << "\n";
		}
	}
}