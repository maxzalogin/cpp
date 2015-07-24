#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const double c(1.0e-2);
	double g, w, i;
	cout << "Введите рост в сантиметрах: ";
	cin >> g;
	cout << "\nВведите вес в килограммах: ";
	cin >> w;
	i = w / pow(g*c, 2.0);
	cout << "\nBMI = " <<i << endl;
	_getch();
	return 0;
}
