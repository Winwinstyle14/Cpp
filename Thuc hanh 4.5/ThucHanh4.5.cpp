#include<iostream>

int main()
{
	float a, b, c;
	
	std::cout << "nhap gia tri a ,b ,c : ";
	std::cin >> a >> b >> c;

	float delta = pow(b, 2) - (4 * a * c);

	if (a == 0)
	{
		std::cout << "Phuong trinh khong phai phuong trinhg bac 2 \n";
	}
	else
	{
		
		if (delta < 0 )
		{
			std::cout << "Phuong trinh vo nghiem. \n";
		}
		else if (delta == 0 )
		{
			float x = -b / (2 * a);
			std::cout << "Phuong trinh co nghiem kep x = " << x;
		}
		else
		{
			float x1, x2;
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);

			std::cout << "Phuong trinh co 2 nghiem phan biet: ";
			std::cout << "x1 = " << x1 << "\n";
			std::cout << "x2 = " << x2;

		}

	}
}