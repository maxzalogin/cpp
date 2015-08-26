#include <iostream>
#include <ctime>

using namespace std;

int random(int a) {
	int i = rand() % a + 1;
	return i;
}

int main() {
	
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a(0), b(0);
	char c;

	cout << "\t***Случайный победитель 1.0***\n\n";
	cout << "Введите количество участников: ";
	cin >> a;
	b = random(a);
	cout << "\n\aПобедил участник под номером: " << b << endl;
	cout << "\nНайти ещё одного победителя? [y/n]: ";
	cin >> c;
	
	while (c == 'y') {
		b = random(a);
		cout << "\n\aПобедил участник под номером: " << b << endl;
		cout << "\nНайти ещё одного победителя? [y/n]: ";
		cin >> c;
	}
}
