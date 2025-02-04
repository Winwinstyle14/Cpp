#include<iostream>
#include<cmath>

int main()
{
	int h1 = 100;
	int h2 = 150;
	int h3 = 120;
	int h4 = 90;
	int h5 = 130;
	int h6 = 140;

	int sl1, sl2, sl3, sl4, sl5, sl6;
	while (true)
	{
		std::cout << "Nhap so luong mat hang: ";
		std::cin >> sl1 >> sl2 >> sl3 >> sl4 >> sl5 >> sl6;

		float tongSl = sl1 + sl2 + sl3 + sl4 + sl5 + sl6;
		float tongTien = h1 * sl1 + h2 * sl2 + h3 * sl3 + h4 * sl4 + h5 * sl5 + h6 * sl6;
		float giam = 0;
		if (tongSl >= 4 && sl6 >= 2 && tongTien >= 500)
		{
			giam = tongTien * 0.2;
			tongTien = tongTien - giam;
			std::cout << "So tien phai tra la: " << tongTien << "K" << "\n";
		}
		else if (tongSl >= 4 && tongTien >= 500 || sl6 >= 2 && tongTien >= 500)
		{
			giam = tongTien * 0.15;
			tongTien = tongTien - giam;
			std::cout << "So tien phai tra la: " << tongTien << "K" << "\n";

		}
		else if (tongSl >= 4 && sl6 >= 2)
		{
			tongTien = tongTien - 40;
			std::cout << "So tien phai tra la: " << tongTien << "K" << "\n";

		}
		else if (tongTien >= 500)
		{
			giam = tongTien * 0.1;
			tongTien = tongTien - giam;
			std::cout << "So tien phai tra la: " << tongTien << "K" << "\n";

		}
		else if (sl6 >= 2)
		{
			tongTien = tongTien - 30;
			std::cout << "So tien phai tra la: " << tongTien << "K" << "\n";

		}
		else if (tongSl >= 4)
		{
			tongTien = tongTien - 20;
			std::cout << "So tien phai tra la: " << tongTien << "K" << "\n";
		}
		else
		{
			std::cout << "So tien phai tra la: " << tongTien << "K" << "\n";
		}
	}
}