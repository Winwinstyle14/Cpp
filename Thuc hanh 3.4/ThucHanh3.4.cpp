#include<iostream>
#include<cmath>

int main()
{
	/* Nhap vao 1 so co 3 chu so , in ra la so dao nguoc */

	int n ,a ,b ,c ;
	std::cout << "Nhap n : \n";
	std::cin >> n;
	
	a = n % 10;
	b = (n / 10) % 10;
	c = n / 100;

	int kq = a * 100 + b * 10 + c;

	std::cout << "So dao nguoc la : " << kq;

	//std::cout <<"so a la "<< a << "\n";
	//std::cout << "so b la " << b;


}