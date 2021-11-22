#include <iostream>
using namespace std;

void textTime(int m, int h);

int main()
{
	setlocale(LC_ALL, "Russian");

	int hour, min;
	cout << "Введите поочередно часы и минуты: " << endl;
	cin >> min >> hour;
	if (hour > 24 || min > 60)
	{
		cout << "Введите допустимое время!";
	}
	else
	{
		textTime(hour, min);
	}
	return 0;
}

void textTime(int m, int h)
{
	cout << "Сток часов: " << h << endl;
	cout << "Сток минут: " << m << endl;
	cout << "Время " << h << ":" << m;
}