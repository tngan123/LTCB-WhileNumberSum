#include <iostream>
using namespace std;
int main()
{
	double so, tong = 0;
	cout << "Nhap so:";
	cin >> so; tong = so;
	while (so != 0) {
		cout << "Nhap so:";
		cin >> so;
		tong += so;
	}
	cout << "Tong=" << tong << endl;
	return 0;
}


