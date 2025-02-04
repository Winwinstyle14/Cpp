#include<iostream>

int main()
{
	int month;
	std::cout << "Nhap thang: ";
	std::cin >> month;

	switch (month)
	{
	case 1:case 3:
		std::cout << "Thang " << month << " thuoc quy 1 co 31 ngay";
		break;
	case 2:
		std::cout << "Thang " << month << " thuoc quy 1 có 28 ngày hoac 29 neu la nam nhuan";
		break;
	case 4:case 6:
		std::cout << "Thang " << month << " thuoc quy 2 co 30 ngay";
		break;
	case 5:
		std::cout << "Thang " << month << " thuoc quy 2 co 31 ngay";
		break;
	case 7:case 8:
		std::cout << "Thang " << month << " thuoc quy 3 co 31 ngay";
		break;
	case 9:
		std::cout << "Thang " << month << " thuoc quy 3 co 30 ngay";
		break;
	case 10:case 12:
		std::cout << "Thang " << month << " thuoc quy 4 co 31 ngay";
		break;
	case 11:
		std::cout << "Thang " << month << " thuoc quy 4 co 30 ngay";
		break;
	default:
		std::cout << "Thang khong hop le \n";
		break;

	}
}