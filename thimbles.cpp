#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus"); 
	srand(time(NULL));
	int i(0), number(0), balance(10), thimbles(0), stat_min(0), stat_sec(0), stat_time(0);
	const int rub = balance % 10;
	const int time(1.0e3);
	const int sec_to_min = 60;
	char action;

	cout << "\t\t***НАПЁРСТКИ 1.3***\n\n";
	cout << "\nВаш баланс: " << balance << " рублей." << endl;
	cout << "\nВведите количество напёрстков: ";
	cin >> thimbles;

	while (thimbles <= 1)
	{
		cout << "\nОшибка, количество напёрстков не может быть <=1, а также быть знаком или буквой!";
		cout << "\n\nВведите количество напёрстков: ";
		cin >> thimbles;
	}
	
	if (thimbles > 1)
	{
		int secret = rand() % thimbles + 1;
		cout << "\nЯ прячу монетку под один из напёрстков...\n\n";
		for (i = 0; i > 0; ++i);
		cout << ++i << ". " << "Введите номер напёрстка: ";
		cin >> number;
		if (secret == number)
		{
			balance += 2;
			int rub = balance % 10;
			cout << "\a\nВы угадали! Монетка была под напёрстком #" << secret << "." << endl;
			if (balance >= 10 && balance <= 20)
				cout << "Ваш баланс равен: " << balance << " рублей." << endl;
			else
				switch (rub)
				{
				case 1: cout << "Ваш баланс равен: " << balance << " рубль. " << endl;
					break;
				case 2: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
					break;
				case 3: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
					break;
				case 4: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
					break;
				default: cout << "Ваш баланс равен: " << balance << " рублей. " << endl;
					break;
				}
			cout << "\nПодолжить? (y/n): ";
			cin >> action;
		}

		else
		{
			balance -= 3;
			int rub = balance % 10;
			cout << "\nУвы, но вы ошиблись. Монетка была под напёрстком #" << secret << "." << endl;
			if (balance >= 10 && balance <= 20)
				cout << "Ваш баланс равен: " << balance << " рублей." << endl;
			else
			{
				switch (rub)
				{
				case 1: cout << "Ваш баланс равен: " << balance << " рубль. " << endl;
					break;
				case 2: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
					break;
				case 3: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
					break;
				case 4: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
					break;
				default: cout << "Ваш баланс равен: " << balance << " рублей. " << endl;
					break;
				}
				cout << "\nПодолжить? (y/n): ";
				cin >> action;
			}

		}

		while (action == 'y')
		{
			if (balance <= 2)
			{
				cout << "\n\aВы не можете играть с балансом <=2!\n";
				break;
			}
			else
			{
				int a = rand() % thimbles + 1;
				cout << "\nЯ прячу монетку под один из напёрстков...\n\n";
				cout << ++i << ". " << "Введите номер напёрстка: ";
				cin >> number;
				if (number == a)
				{
					balance += 2;
					int rub = balance % 10;
					cout << "\a\nВы угадали! Монетка была под напёрстком #" << secret << "." << endl;
					if (balance >= 10 && balance <= 20)
						cout << "Ваш баланс равен: " << balance << " рублей." << endl;
					else
						switch (rub)
						{
							break;
						case 1: cout << "Ваш баланс равен: " << balance << " рубль. " << endl;
							break;
						case 2: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
							break;
						case 3: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
							break;
						case 4: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
							break;
						default: cout << "Ваш баланс равен: " << balance << " рублей. " << endl;
							break;
						}
					cout << "\nПодолжить? (y/n): ";
					cin >> action;
				}
				else
				{
					balance -= 3;
					int rub = balance % 10;
					cout << "Увы, но вы ошиблись. Монетка была под напёрстком #" << secret << "." << endl;
					if (balance >= 10 && balance <= 20)
						cout << "Ваш баланс равен: " << balance << " рублей." << endl;
					else
						switch (rub)
						{
						case 1: cout << "Ваш баланс равен: " << balance << " рубль. " << endl;
							break;
						case 2: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
							break;
						case 3: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
							break;
						case 4: cout << "Ваш баланс равен: " << balance << " рубля. " << endl;
							break;
						default: cout << "Ваш баланс равен: " << balance << " рублей. " << endl;
							break;
						}
					cout << "\nПодолжить? (y/n): ";
					cin >> action;
				}
			}
		}
	}
		cout << "\n\t\t***СТАТИСТИКА ИГРЫ***\n";
		if (balance >= 10 && balance <= 20)
			cout << "Ваш баланс равен: " << balance << " рублей." << endl;
		else
		{

			switch (balance)
			{
			case 1: cout << "\nВаш баланс равен: " << balance << " рубль. " << endl;
				break;
			case 2: cout << "\nВаш баланс равен: " << balance << " рубля. " << endl;
				break;
			case 3: cout << "\nВаш баланс равен: " << balance << " рубля. " << endl;
				break;
			case 4: cout << "\nВаш баланс равен: " << balance << " рубля. " << endl;
				break;
			default: cout << "\nВаш баланс равен: " << balance << " рублей. " << endl;
				break;
			}
		}

		stat_time = clock() / time;
		stat_min = (clock() / time) / sec_to_min;
		stat_sec = (clock() / time % sec_to_min);
		cout << "Число попыток: " << i << ".\n";
		cout << "Время в игре: " << stat_min << " мин. " << stat_sec << " сек.";
		cout << "\nДля выходна нажмите любую клавишу...";
		_getch();
		return 0;
	}
