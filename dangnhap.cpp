//yeu cau user nhap account, check account trong database roi output ket qua

#include <iostream>
#include <string>
	using namespace std; //khai bao std de dung string
int main() {
  
  bool dangnhap;
  string taikhoan;
  string password;
  string taikhoanreal = "4muayeuem"; //tai khoan trong database
  string passwordreal = "bruh"; //mat khau trong database
  
  cout << "Tai khoan: ";
  cin >> taikhoan;
  cout << "Mat khau: ";
  cin >> password;
// yeu cau user nhap tai khoan mat khau

		if (taikhoan == taikhoanreal && password == passwordreal) {
			std::cout << "Thanh cong";
		} else {
			std::cout << "Thu lai";
		} //test lai va output ket qua

  
}
