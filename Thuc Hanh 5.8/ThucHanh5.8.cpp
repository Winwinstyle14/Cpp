#include<iostream>

int main()
{
	int n;
	std::cout << "Nhap n : ";
	std::cin >> n;
	int sum = 0;
	int soDaoNguoc = 0;
	int dem = 0;
	int temp = n;
	if (n > 0)
	{
		
		while (temp > 0)
		{
			
			int chiaLayDu = temp % 10;
			soDaoNguoc = soDaoNguoc * 10 + chiaLayDu;
			sum = sum + chiaLayDu;
			temp = temp / 10;
			dem++;


		}

		std::cout << "Ket qua 1 : " << soDaoNguoc << "\n";
		std::cout << "Ket qua 2 : So n co " << dem << " chu so !" << "\n";
		std::cout << "Ket qua 3 : " << sum << "\n";

		int t;
		std::cout << "Nhap vi tri muon lay : ";
		std::cin >> t;
		if (t < 1 || t > dem)
		{
			std::cout << "Khong ton tai vi tri nay !!\n";
		}
		else
		{
			temp = n;
			for (int i = 1 ; i < dem - t + 1; i ++)
			{
				
				temp = temp / 10;
			}

			std::cout << "Ket qua 4 : " << (temp % 10) << "\n";
		}
	}
	else
	{
		std::cout << "Vui long nhap so nguyen duong !!";
	}
}