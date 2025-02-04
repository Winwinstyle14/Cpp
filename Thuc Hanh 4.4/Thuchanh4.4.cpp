#include<iostream>

int main()
{
	int hour;
	int minutes;
	int second;
	
	std::cout << "Nhap gio: ";
	std::cin >> hour;
	std::cout << "Nhap phut: ";
	std::cin >> minutes;
	std::cout << "Nhap giay: ";
	std::cin >> second;

	if (hour >= 0 && hour < 24 && minutes >= 0 && minutes < 60 && second >= 0 && second < 60)
	{
		std::cout << "Hop le \n";
	}
	else
	{
		std::cout << "Khong hop le \n";
	}
}