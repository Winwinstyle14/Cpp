#include<iostream>


int main()
{
	//Viết chương trình nhập số nguyên dương n
	//	In ra màn hình :
	//Các số chẵn từ 1 đến n
	//	Các số từ 1 đến n mà chia hết cho 3
	//	Các số lẻ từ 1 đến n mà chia hết cho 3
	//	Các số từ - n đến n và chia hết cho 5

	int n;
	std::cout << "Nhap n : ";
	std::cin >> n;
	if (n < 0)
	{
		std::cout << "Vui long nhap n nguyen duong :)).";
	}
	else
	{
		std::cout << "\n Ket qua 1:";
		for (int i = 1 ; i <= n ; i++)
		{
			if (i % 2 == 0)
			{
				std::cout << i << " ";
			}

		}
		std::cout << "\n Ket qua 2:";
		for (int i = 1; i <= n; i++)
		{
			if (i % 3 == 0)
			{
				std::cout << i << " ";
			}

		}
		std::cout << "\n Ket qua 3:";
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 != 0 && i % 3 == 0)
			{
				std::cout  << i <<" ";
			}

		}
		std::cout << "\n Ket qua 4:";
		for (int i = -n; i <= n; i++)
		{
			if (i % 5 == 0)
			{
				std::cout << i << " ";
			}

		}
		std::cout << "\n";
	}
}
