#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a(0), b(0);
	cout << "Введите число, чтобы проверить его чётность: ";
	cin >> a;
	b = a % 2;
	if (b == 0)
	{
		cout << "\nЧисло " << a << " чётное.\n";
	}
	else
	{
		cout << "\nЧисло " << a << " нечётное.\n";
	}
	_getch();
	return 0;
}
