/*/////////////////////////////////////
���������: ��������� ����������	   ///
������: 1.0						  ///
�����: ������ �������			 ///
*//////////////////////////////////

#include <iostream>
#include <ctime>

using namespace std;

int random (int a) {
	int i = rand () % a + 1;									
	return i;													
}

int main() {


	setlocale(LC_ALL, "rus");
	srand(time(NULL));	

	int a(0), b(0);
	char c;

	cout << "\t***��������� ���������� 1.0***\n\n";
	cout << "������� ���������� ����������: ";
	cin >> a;
	b = random(a);
	cout << "\n\a������� �������� ��� �������: " << b << endl;
	cout << "\n����� ��� ������ ����������? [y/n]: ";
	cin >> c;

	

	while (c == 'y') {
				b = random(a);
				cout << "\n\a������� �������� ��� �������: " << b <<endl;
				cout << "\n����� ��� ������ ����������? [y/n]: ";
				cin >> c;
			}
}








