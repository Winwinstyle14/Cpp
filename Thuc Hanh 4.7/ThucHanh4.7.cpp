#include<iostream>

int main()
{
	float x, y, z;

	std::cout << "Nhap x: ";
	std::cin >> x;
	std::cout << "Nhap y: ";
	std::cin >> y;
	std::cout << "Nhap z: ";
	std::cin >> z;

	if (x > y && x > z)
	{
		std::cout << "Ket qua 1: So lon nhat la : " << x << "\n";
		if (y > z)
		{
			std::cout << "Ket qua 2: So nho nhat la : " << z << "\n";
		}
		else
		{
			std::cout << "Ket qua 2: So nho nhat la : " << y << "\n";
		}
	}
	else if(y > x && y > z)
	{
		std::cout << "Ket qua 1: So lon nhat la : " << y << "\n";
		if (x > z)
		{
			std::cout << "Ket qua 2: So nho nhat la : " << z << "\n";
		}
		else
		{
			std::cout << "Ket qua 2: So nho nhat la : " << x << "\n";
		}
	}
	else
	{
		std::cout << "Ket qua 1: So lon nhat la : " << z << "\n";
		if (x > y)
		{
			std::cout << "Ket qua 2: So nho nhat la : " << y << "\n";
		}
		else
		{
			std::cout << "Ket qua 2: So nho nhat la : " << x << "\n";
		}

	}

	if (x > 0 && y > 0 && z > 0)
	{
		std::cout << "Ket qua 3: Ca 3 so cung dau" <<"\n";
		std::cout << "Ket qua 4: Khong co cap so nao trai dau" << "\n";

	}
	else if (x < 0 && y < 0 && z < 0)
	{
		std::cout << "Ket qua 3: Ca 3 so cung dau" << "\n";
		std::cout << "Ket qua 4: Khong co cap so nao trai dau" << "\n";
	}
	else
	{
		std::cout << "Ket qua 3: Ca 3 so trai dau" << "\n";
		if ( (x > 0 && y < 0 && z < 0) || (x < 0 && y > 0 && z > 0))
		{
			std::cout << "Ket qua 4: "<< "(" << y << "," << x << ")" << "," << "(" << z << "," << x << ")" << "\n";
		}
		else if ((y > 0 && x < 0 && z < 0) || (y < 0 && x > 0 && z > 0))
		{
			std::cout << "Ket qua 4: " << "(" << x << "," << y << ")" << "," << "(" << z << "," << y << ")" << "\n";
		}
		else if((z > 0 && x < 0 && y < 0) || (z < 0 && x > 0 && y > 0))
		{
			std::cout << "Ket qua 4: " << "(" << x << "," << z << ")" << "," << "(" << y << "," << z << ")" << "\n";
		}
	}

}