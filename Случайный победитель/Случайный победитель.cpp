#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a(0), b(0);
	cout << "������� �������� �= ";
	cin >> a;
	cout << "������� �������� b= ";
	cin >> b;

	cout << "\n�� ��������� � + b � ��������: " << a + b <<endl;
	cout << "\n�� ��������� � - b � ��������: " << a - b << endl;
	cout << "\n�� ��������� � * b � ��������: " << a * b << endl;
	cout << "\n�� ���������� � / b � ��������: " << a / b << endl;
	cout << "\n�� ��������� � % b � ��������: " << a % b << endl;
	_getch();
	return 0;

}