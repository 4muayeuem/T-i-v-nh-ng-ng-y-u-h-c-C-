/* bai toan yeu cau nhap 2 so a,b dieu kien |a|,|b| <= 100
output tong hieu tich thuong (2 chu so sau dau thap phan) */

#include <iostream>
#include <iomanip>
using namespace std;
	int main() {
		int a,b;
		double c,d;
		cin >> a >> b;
		c = a;
		d = b;
		if (a < 101 && a > -101 && b < 101 && b > -101 ) {
		
		cout << a + b << endl;
		cout << a - b << endl;
		cout << a * b << endl;
		if (b != 0) { //xet truong hop
			cout << fixed << setprecision(2) << c / d;
		} else {
			
			cout << "INF";
		}
		
		}
	}
