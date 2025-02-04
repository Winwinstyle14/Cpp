#include<iostream>
#include<cmath>

int main()
{
	while (true) 
	{
		float a, b, c;
		std::cout << "Nhap gia tri a ,b ,c : ";
		std::cin >> a >> b >> c;

		float binhPhuong1 = pow(a, 2) + pow(b, 2) - pow(c, 2);
		float binhPhuong2 = pow(a, 2) + pow(c, 2) - pow(b, 2);
		float binhPhuong3 = pow(c, 2) + pow(b, 2) - pow(a, 2);

		if ((a + b) > c && (a + c) > b && (c + b) > a)
		{
			if ((a == b) && (b == c) && (c == a))
			{
				std::cout << "Ket qua : Tam giac deu.\n";
			}
			else if ((binhPhuong1 >= 0 && binhPhuong1 < 1) ||
				(binhPhuong2 >= 0 && binhPhuong2 < 1) ||
				(binhPhuong3 >= 0 && binhPhuong3 < 1)
				)
			{
				if ((a == b) || (b == c) || (c == a))
				{
					std::cout << "Ket qua : Tam giac vuong can.\n";
				}
				else
				{
					std::cout << "Ket qua : Tam giac vuong.\n";
				}
			}
			else if ((a == b) || (b == c) || (c == a))
			{
				std::cout << "Ket qua : Tam giac can.\n";
			}
			else
			{
				std::cout << "Ket qua : Tam giac thuong.\n";
			}
		}
		else
		{
			std::cout << "Khong phai la 3 canh cua tam giac." << "\n";
		}
	}
	
}