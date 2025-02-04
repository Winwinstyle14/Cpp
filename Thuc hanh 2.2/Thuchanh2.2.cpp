#include<iostream>
#include<string>

int main() {

	std::string name;
	int year;
	std::string hometown;
	float height;
	float weight;
	char rank;

	std::cout << "Nhap ho ten:\n";
	std::getline(std::cin, name);

	std::cout << "nam sinh:\n";
	std::cin >> year;
	

	std::cin.ignore();

	std::cout << "Nhap que quan\n";
	std::getline(std::cin, hometown);



	std::cout << "Nhap chieu cao :\n";
	std::cin >> height;

	std::cout << "nhap can nang :\n";
	std::cin >> weight;

	std::cout << "xep loai học sinh\n";
	std::cin >> rank;

	std::cout << "Ho ten : " << name << "\n"
		<< "Nam sinh : " << year << "\n"
		<< "Que quan : " << hometown << "\n"
		<< "Chieu cao : " << height << "\n"
		<< "Can nang : " << weight << "\n"
		<< "Xep loai hoc luc : " << rank; 

}