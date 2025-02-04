#include<iostream>


int main()
{
	int n;
	std::cout << "Nhap n : ";
	std::cin >> n;
	// Nhập n là một số nguyên dương từ 0 đến 9.
		// Vẽ tam giác cân có chiều cao n như sau :
	//1. Tam giác cân đặc ruột 0
	for (int i = 0 ; i <= n ; i++)
	{
		for (int j = 0 ; j <= n*2 ; j++)
		{
			if ( j > n - i &&  j < n + i)
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
	//2. Tam giác cân đặc ruột 0, viền 1
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n * 2; j++)
		{
			if (j > n - i && j < n + i)
			{
				if ((j - 1) + (i - 1) == n - 1 || i == n || (j + 1) - (i + 1) == n - 1)
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
	//3. Tam giác nhị phân đan xen
	for ()
	{
		for ()
		{

		}
	}
	//4. Tam giác thập phân tăng đều
	//5. Tam giác thập phân đối xứng
	//Xem hình minh họa để rõ yêu cầu đề bài.
}