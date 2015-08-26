#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a(0), b(0);
	cout << "Введите значение а= ";
	cin >> a;
	cout << "Введите значение b= ";
	cin >> b;

	cout << "\nМы выполняем а + b и получаем: " << a + b <<endl;
	cout << "\nМы выполняем а - b и получаем: " << a - b << endl;
	cout << "\nМы выполняем а * b и получаем: " << a * b << endl;
	cout << "\nМы выполняеям а / b и получаем: " << a / b << endl;
	cout << "\nМы выполняем а % b и получаем: " << a % b << endl;
	_getch();
	return 0;

}