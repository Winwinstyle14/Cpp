#include<iostream>
#include<cmath>

int main()
{
	float toan, ly, hoa, anh, van, su, dia;

	std::cout << "Nhap diem toan : ";
	std::cin >> toan;

	std::cout << "Nhap diem ly : ";
	std::cin >> ly;

	std::cout << "Nhap diem hoa : ";
	std::cin >> hoa;

	std::cout << "Nhap diem anh : ";
	std::cin >> anh;

	std::cout << "Nhap diem van : ";
	std::cin >> van;

	std::cout << "Nhap diem su : ";
	std::cin >> su;

	std::cout << "Nhap diem dia : ";
	std::cin >> dia;

	float diemTB = (toan + ly + hoa + anh + van + su + dia) / 7;

	std::cout << "Diem tong ket la : " << diemTB <<"\n";

	if (toan < 0 || ly < 0 || hoa < 0 || anh < 0 || van < 0 || su < 0 || dia < 0 
		|| toan > 10 || ly > 10 || hoa > 10 || anh > 10 || van > 10 || su > 10 || dia > 10)
	{
		std::cout << "Nhap diem khong hop le :)) \n";
	}
	else
	{
		if (diemTB > 8.0)
		{
			if (toan > 4 && ly > 4 && hoa > 4 && anh > 4 && van > 4 && su > 4 && dia > 4)
			{
				std::cout << "Day la hoc sinh gioi. \n";
			}
			else if (toan < 4 || ly < 4 || hoa < 4 || anh < 4 || van < 4 || su < 4 || dia < 4)
			{
				std::cout << "Day la hoc sinh kha. \n";
			}
		}
		else if (diemTB >= 6.5 && diemTB <= 8.0)
		{
			if (toan > 3 && ly > 3 && hoa > 3 && anh > 3 && van > 3 && su > 3 && dia > 3)
			{
				std::cout << "Day la hoc sinh Kha. \n";
			}
			else if (toan < 3 || ly < 3 || hoa < 3 || anh < 3 || van < 3 || su < 3 || dia < 3)
			{
				std::cout << "Day la hoc sinh trung binh. \n";
			}
		}
		else if (diemTB >= 4.0 && diemTB <= 6.5)
		{
			if (toan > 0 && ly > 0 && hoa > 0 && anh > 0 && van > 0 && su > 0 && dia > 0)
			{
				std::cout << "Day la hoc sinh trung binh. \n";
			}
			else
			{
				std::cout << "Day la hoc sinh yeu. \n";
			}
		}
		else
		{
			std::cout << "Day la hoc sinh yeu. \n";
		}
	}
}