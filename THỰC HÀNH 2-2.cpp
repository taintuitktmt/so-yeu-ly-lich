#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	int namsinh = 2005;
	string country = "";
	bool get_marriaged = 0;
	float height = 1.7;
	float weight = 56;
	char xeploaitotnghiep = 'G';

	cout << "Nhap ho ten: ";
	getline(cin, name);

	cout << "\nNhap nam sinh: ";
	cin >> namsinh;

	cin.ignore();

	cout << "\nNhap que quan: ";
	getline(cin, country);

	cout << "\nTinh trang hon nhan (1 - da ket hon, 0 - chua ket hon): ";
	cin >> get_marriaged;

	cout << "\nNhap chieu cao: ";
	cin >> height;

	cout << "\nNhap can nang: ";
	cin >> weight;

	cout << "\nNhap xep loai tot nghiep THPT (G - Gioi, K - Kha, T - Trung Binh): ";
	cin >> xeploaitotnghiep;

	cout << "\n*******************************"
		 << "\n******* SO YEU LY LICH ********"
		 << "\n*******************************";


	cout << "\nHo ten: " << name << "\nNam sinh: " << namsinh
		<< "\nQue quan: " << country << "\nChieu cao: " << height << "m"
		<< "\nCan nang: " << weight << "\nXep loai tot nghiep THPT: " << xeploaitotnghiep;

}