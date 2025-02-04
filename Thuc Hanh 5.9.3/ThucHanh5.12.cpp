#include<iostream>

int main()
{
	/*Nhập n là 1 số nguyên dương.
		Vẽ tam giác cân có độ dài cạnh n như sau :
	1 - Tam giác cân đặc ruột 0, lệch phải
		2 - Tam giác cân đặc ruột 0, viền 1, lệch phải
		Xem hình minh họa để rõ yêu cầu đề bài.*/

	int n;
	std::cout << "Nhap n : ";
	std::cin >> n;
	//1 - Tam giác cân đặc ruột 0, lệch phải
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i + j >= n)
			{
					std::cout << "0 ";
			}
			else
			{
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}
	//2 - Tam giác cân đặc ruột 0, viền 1, lệch phải
	for (int i = 0 ; i <= n ; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i + j >= n)
			{
				if (i + j == n || i == n || j == n)
				{
					std::cout << "1 ";

				}
				else
				{
					std::cout << "0 ";
				}
			}
			else
			{
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}
}