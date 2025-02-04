#include<iostream>
#include<cmath>

int main()
{
	/* chu vi hinh tron la  c = 2 * r * 3.14 || c = d * 3.14
	dien tich hinh tron la s = r * r * 3.14 || s = c ^2 / 4* pi
	*/

	float r, s, c;
	float pi = 3.14;

	std::cout << "Nhap ban kinh :\n";
	std::cin >> r;

	c = 2 * r * pi;
	s = pow(r, 2) * pi;
	
	std::cout << "Chu vi hinh tron la :" << c << "\n";
	std::cout << "Dien tich hinh tron la :" << s << "\n";
}