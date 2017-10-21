// variable

using namespace std;
#include <iostream>
#include <math.h>

float a, b, tong, hieu, thuong, nhan;
// math
	int main()
{

	cout << "A = ";
	cin >> a;
	// b 
	cout << "B = ";
	cin >> b;

	// phép cộng +
	tong = a + b;
	cout << "Tong la  " << tong << endl; 
	// phép trừ 
	hieu = a - b;
	cout << "Hieu la " << hieu << endl;
	//phép nhân
	nhan = a*b;
	cout << "Ket qua phep nhan la " << nhan << endl;

	// phép chia
	thuong = a/b;
	cout << "Ket qua phep chia " << thuong << endl;
	
	system("Pause");
	return 0;
}

