#include<iostream>
#include<cmath>

int main()
{
	// tính độ dài đoạn AB
	// tính OI , I là tđ AB
	// tính OG , G là trọng tâm tam giác ABC
	// tính diện tích tam giác ABC
	// tính diện tihcs đường tròn nội tiếp tam giác ABC
	//tính góc giữa 2 đoạn thẳng OA , OB tính theo độ ,...hàm acos()
	
	float xA, yA, xB, yB , xC , yC , p;
	float pi = 3.14;
	std::cout << "Nhap toa do diem A : ";
	std::cin >> xA >> yA;
	std::cout << "Nhap toa do diem B : ";
	std::cin >> xB >> yB;
	std::cout << "Nhap toa do diem C : ";
	std::cin >> xC >> yC;

	float AB = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));

	float BC = sqrt(pow((xC - xB), 2) + pow((yC - yB), 2));

	float AC = sqrt(pow((xC - xA), 2) + pow((yC - yA), 2));

	float OI = sqrt(pow(((xA + xB)/2) - 0, 2) + pow(((yA + yB) / 2) - 0,2));
	
	float OG = sqrt(pow(((xA + xB + xC) / 3) - 0, 2) + pow(((yA + yB + yC) / 3) - 0, 2));

	p = (AB + BC + AC) / 2;

	float sABC = sqrt(p * (p - AB) * (p - BC) * (p - AC));

	// bán kinh đường tròn nội tiếp
	float rNoiTiep = sABC / p;
	// dien tich đường tròn nội tiếp
	float sNoiTiep = pow(rNoiTiep, 2) * pi;

	float alpha = (abs(xA * xB + yA * yB)) / sqrt(  (pow(xA, 2) + pow(yA, 2)) * (pow(xB, 2) + pow(yB, 2)));

	std::cout << "Do dai AB la : " << AB << "\n";
	std::cout << "Do dai OI la : " << OI << "\n";
	std::cout << "Do dai OG la : : " << OG << "\n";
	std::cout << "Dien tich tam giac ABC la : " << sABC << "\n";
	std::cout << "Dien tich duong tron noi tiep tam giac ABC la : " << sNoiTiep << "\n";
	std::cout << "Goc giua 2 doan OA , Ob la : " << (acos(alpha)  * 180)/ 3.14;

}