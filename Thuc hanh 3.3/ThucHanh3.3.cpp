#include<iostream>
#include<cmath>

int main()
{
	/* Tinh dien tich tam giac
	p = (a + b + c)/2 : tinh nua chu vi
	s = can bac 2 (p(p - a)(p - b)(p - c))
	*/
	
	float a, b, c, p , s;

	std::cout << "Nhap gia tri a ,b ,c la : \n";
	std::cin >> a >> b >> c;

	p = (a + b + c) / 2;

	s = sqrt(p * (p - a) * (p - b) * (p - c));

	std::cout << "Dien tich hinh tam giac la : " << s;
}