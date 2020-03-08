#include <iostream>
#include <conio.h>

using namespace std;

union Data
{
	int A;
	char B[4];
};

int main()
{
	Data Data_Union;
	Data_Union.A = 74368632;

	cout << "=============================" << endl;
	cout << "CONTOH 1" << endl;
	cout << "=============================" << endl;

	cout << "Size Data A = " << sizeof(Data_Union.A) << " bytes, Value = " << Data_Union.A << endl;
	cout << "Size Data B = " << sizeof(Data_Union.B) << " bytes, Value = " << Data_Union.B << endl;

	Data_Union.B[0] = 'R';
	Data_Union.B[1] = 'I';
	Data_Union.B[2] = 'K';
	Data_Union.B[3] = 'Y';

	cout << "\nSize Data A = " << sizeof(Data_Union.A) << " bytes, Value = " << Data_Union.A << endl;
	cout << "Size Data B = " << sizeof(Data_Union.B) << " bytes, Value = " << Data_Union.B << endl;


	_getch();
	return 0;
}