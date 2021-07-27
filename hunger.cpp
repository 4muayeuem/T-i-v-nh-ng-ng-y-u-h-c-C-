#include <iostream>

int main() {
  
  int day;
  
  // Write the code below:
  std::cout << "Nhap vao ngay";
  std::cin >> day;
  
  if (day % 1 == 0) {
  	if (day == 6 || day == 7) {
  		std::cout <<"Cuoi Tuan";
			} else {
				std::cout <<"not Tuan Cui";
			}
		} else {std::cout << "xao lon";
		}
  

}
