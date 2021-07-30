#include<iostream>
	using namespace std;
	int main() {
		long long a;
		cin >> a; // input a
		if (a >= 1)  { //dieu kien dau tien de a la so chinh phuong
			for (long long i = 1; i <= a; i++)//chay vong lap kiem tra scp {
				if (a == i * i) {
					cout << "YES";
					break; //break khi xuat ket qua
				} else {
					if (i * i > a) {
						cout << "NO";
						break; //break khi xuat ket qua
					}
				}
			} else {
				
					cout << "NO";
				
			}
		} 
