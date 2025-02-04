#include<iostream>
#include<cmath>
//#include(math.h) danh cho c
/* 1. Cú pháp (syntax)
	- toán tử (operator): kí hiệu, ký tự -> toán hạng
	- hàm ( function ): kí tự ( đối số )
	2. Số toán hạng ( operand ) tham gia ( ngôi )
	3. Độ ưu tiên (precedence)
	4. Thứ tự thực hiện (associativity)
	5. Giá trị / kết quả trả về (return value)
*/
int main() {
	/*int x = 5;
	std::cout << 1 + 2 << "\n";*/

	float x, y;

	std::cout << "Nhap gia tri x , y :\n";

	std::cin >> x;
	std::cin >> y;

	float a = x * y + (x / y);

	float b = x + (1 / (x + (1 / (x + (1 / (x + y))))));

	float c = sqrt(pow((3 * x + 2 * y), 2) * pow((5 * x + 1), 3));

	std::cout << "ket qua 1 la : " << a << "\n";
	std::cout << "ket qua 2 la : " << b << "\n";
	std::cout << "ket qua 3 la : " << c << "\n";
}