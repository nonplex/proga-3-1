#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int x;
	int a;
	int b;
	//целое число
	cout << "x = "; cin >> x;
	//Запрос целого числа х
	if (x > 999 && x < 10000)
	{

	}
	else
	{
		cout << "Неподходящее условие" << endl;
		exit(1);
		//Для предотвращения проверки на совпадение цифр
	}
	//Проверка числа x на четырехзначность
	a = x / 1000;
	//Первая цифра
	b = int(x / 100) - a * 10;
	//Вторая цифра
	if (a == b)
		//Проверка на совпадение цифр
	{
		cout << "Истина" << endl;

	}
	else
	{
		cout << "Ложь" << endl;

	}
}
