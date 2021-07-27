//input so nam neu la nam nhuan thi output nam nhuan con ko thi deo

#include <iostream>

	int main() {
			
			int year;
			
			std::cout << "Nhap so nam ";
			std::cin >> year;
			//nhap so nam
			if (year > 0) /*kiem tra tinh dung sai cua so nam*/ {
				year = year % 4;
				switch (year){ //kiem tra cac truong hop co the xay ra
					case 1:
						std::cout << "deo";
						break;
					case 2:
						std::cout << "deo";
						break;
					case 3:
						std::cout << "deo";
						break;
					case 0:
						std::cout << "nam nhuan";
						break;
					default:
						std::cout << "xao lon";
						break;
					}
					} else {std::cout << "xaolon";
	}
}
