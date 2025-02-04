#include<iostream>

int main()
{
	//1. Hình vuông các chữ số thập phân tăng giảm đan xen
		/*for (int i = 0 ; i <= 9 ; i++)
		{
			if (i % 2 == 0)
			{
				for (int j = 0 ; j <= 9 ; j++)
				{
					std::cout << j << " ";
				}
			}
			else
			{
				for (int j = 9; j >= 0; j--)
				{
					std::cout << j << " ";
				}
			}
			std::cout << "\n";
		}*/
	//2. Hình vuông nhị phân ruột 0 viền 1
		/*for (int i = 0 ; i <= 9 ; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				if (i == 0 || j == 0 || i == 9 || j == 9) 
				{
					std::cout << "1 ";
				}
				else
				{
					std::cout << "0 ";
				}
			}
			std::cout << "\n";
		}*/
	//3. Hình vuông nhị phân ruột 1 có một đường chéo số 0
	
		/*for (int i = 0 ; i <= 9 ; i++)
		{
			for (int j = 0 ; j <= 9 ; j++)
			{
				if (i == j)
				{
					std::cout << "0 ";
				}
				else
				{
					std::cout << "1 ";
				}
			}
			std::cout << "\n";
		}*/
	//4. Hình vuông nhị phân ruột 1 có hai đường chéo số 0
		/*for (int i = 0; i <= 9; i++)
		{
			for (int j = 0; j <= 9; j++)
			{
				if (i == j || j == 9 - i)
				{
					std::cout << "0 ";
				}
				else
				{
					std::cout << "1 ";
				}
			}
			std::cout << "\n";
		}*/
	//5. Hình vuông nhị phân đan xen
		/*for (int i = 0; i <= 10; i++)
		{
			for (int j = 0; j <= 10; j++)
			{
				if (i % 2 != 0 && j % 2 == 0|| j % 2 != 0 && i % 2 == 0)
				{
					std::cout << "1 ";
				}
				else
				{
					std::cout << "0 ";
				}
			}
			std::cout << "\n";
		}*/
	//6. Hình vuông thập phân đường chéo 0
	/*for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			std::cout << abs(i - j) << " ";
			
		}
		std::cout << "\n";
	}*/
}