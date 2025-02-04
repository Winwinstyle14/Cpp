#include<iostream>
#include<cmath>

int main()
{
	while (true)
	{
		bool a , b;

		std::cout << "(a) Toi muon di da bong : ";
		std::cin >> a;
		std::cout << "(b) Toi muon di danh cau long : ";
		std::cin >> b;

		bool c = a && b;
		bool d = a || b;
		bool e = a && !b;
		bool f = (a && !b) || (!a && b);


		std::cout << "(c) " << c << "\n";
		std::cout << "(d) " << d << "\n";
		std::cout << "(e) " << e << "\n";
		std::cout << "(f) " << f << "\n";
	}
}