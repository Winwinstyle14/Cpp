#include<iostream>

int main()
{
	int dai, rong;
	std::cout << "Nhap chieu dai : ";
	std::cin >> dai;
	std::cout << "Nhap chieu rong : ";
	std::cin >> rong;
	//1 - Hình chữ nhật đặc	
		/*for (int i = 1 ; i <= rong ; i++)
		{
			for (int j = 1 ; j <= dai ; j++)
			{
				std::cout << "* ";
			}
			std::cout << "\n";
		}*/
	//2 - Hình chữ nhật rỗng
	/*for (int i = 1; i <= rong; i++)
	{
		for (int j = 1; j <= dai; j++)
		{
			if (i == 1 || j == 1 || j == dai || i == rong )
			{
				std::cout << "* ";
			}
			else
			{
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}*/
	//3 - Hình chữ nhật lưới(m, n lẻ)
	for (int i = 1 ; i <= rong ; i++)
	{
		for (int j = 1; j <= dai; j++)
		{
			if ( i % 2 == 0 && j % 2 == 0)
			{
				std::cout << "  ";
			}
			else
			{
				std::cout << "* ";
			}
		}
		std::cout << "\n";
	}

}