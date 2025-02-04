#include<iostream>

int main()
{
	/*Nhập n từ bàn phím(n > 1) và in kết quả của các biểu thức sau :
	1 - P(n) = 1 + 2 + 3 + ... + n
		2 - Q(n) = 1 * 2 * 3 * ... * n
		3 - R(n) = 1 + 3 + 5 + ... + n(Tổng liên tiếp các số lẻ)
		4 - S(n) = 1 ^ 3 + 2 ^ 3 + … + n ^ 3
		5 - T(n) = 1 / 1 ^ 1 + 2 / 2 ^ 2 + … + n / n ^ n
		6 - U(n) = 12 + 23 + 3 * 4 + ... + n * (n + 1)
		7 - V(n) = 1 + 11 + 111 + ... + (11...1)
		8 - X(n) = 1 + (1 + 2) + (1 + 2 + 3) + .... + (1 + 2 + 3 + ... + n)*/

	int n;
	while (true)
	{
		std::cout << "Nhap n : ";
		std::cin >> n;
		int total = 0;
		std::cout << "\nKet qua P(n) = ";
		for (int i = 0 ; i <= n ; i++)
		{
			total += i;
		}
		std::cout << total <<"\n";

		int tich = 1;
		std::cout << "\nKet qua Q(n) = ";
		for (int i = 1; i <= n; i++)
		{
			tich *= i;
		}
		std::cout << tich << "\n";

		int tongR = 0;
		std::cout << "\nKet qua R(n) = ";
		for (int i = 0 ; i <= n ; i++)
		{
			if (i % 2 != 0)
			{
				tongR += i;
			}
		}
		std::cout << tongR << "\n";

		//S(n) = 1 ^ 3 + 2 ^ 3 + … + n ^ 3

		int totalS = 0;
		std::cout << "\nKet qua S(n) = ";
		for (int i = 0 ; i <= n ; i++)
		{

			totalS += (pow(i,3));
		}
		std::cout << totalS << "\n";

		//T(n) = 1 / 1 ^ 1 + 2 / 2 ^ 2 + … + n / n ^ n
		float totalT = 0;
		std::cout << "\nKet qua S(n) = ";
		for (int i = 0; i <= n; i++)
		{

			totalT += (i / (pow(i , i)));
		}
		std::cout << totalT << "\n";

		//U(n) = 12 + 23 + 3 * 4 + ... + n * (n + 1)
		float totalU = 0;
		std::cout << "\nKet qua U(n) = ";
		for (int i = 0; i <= n; i++)
		{

			totalU += (i * (i + 1));
		}
		std::cout << totalU << "\n";

		//V(n) = 1 + 11 + 111 + ... + (11...1)
		float totalV = 0;
		std::cout << "\nKet qua V(n) = ";
		for (int i = 0; i <= (n - 1); i++)
		{
			
			totalV += totalV + pow(10, i);
		}
		std::cout << totalV << "\n";

		//X(n) = 1 + (1 + 2) + (1 + 2 + 3) + .... + (1 + 2 + 3 + ... + n)

		double totalX = 0;
		std::cout << "\nKet qua V(n) = ";
		double x = 0;
		for (int i = 0; i <= n; i++)
		{
			
			x += i;
			totalX += x;
		}
		std::cout << totalX << "\n";
	}
}