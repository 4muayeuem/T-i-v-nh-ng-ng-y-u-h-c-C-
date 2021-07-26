/*may bi len 1 hanh tinh rat xa la the nen la no doi hoi may phai nhap 1 so thu nhu can nang cua
may va so hanh tinh roi no se output cho may can nang neu nhu may xao lon thi ko dc*/


#include <iostream>

	int main() {
		
		double kg;
		int planetnumber;
		double heso;
		//khai bao kieu bien
		std::cout << "input can nang gium e ";
		std::cin >> kg; //khai bao can nang
		
		if (kg<=0) {std::cout << "xao lon quen"; //kiem tra truong hop can nang vo li
		} else {//neu ko vo li thi ntn
		
			std::cout << "input so hanh tinh gium e ";
			std::cin >> planetnumber;//khai bao so hanh tinh
			switch (planetnumber) {
				case 1:
					heso=0.38;
					break;
				case 2:
					heso=0.91;
					break;
				case 3:
					heso=0.38;
					break;
				case 4:
					heso=2.34;
					break;
				case 5:
					heso=1.06;
					break;
				case 6:
					heso=0.92;
					break;
				case 7:
					heso=1.19;
					break;
				default:
					heso=0;
					break;
			}
			if (heso==0) {std::cout<< "xao lon quen may";//kiem tra truong hop vo li
			} else {//neu deo vo li thi tiep tuc
				kg=kg*heso; 
				std::cout<< "can nang cua may la " << kg;//output
			}
		}
}
