﻿// ConsoleApplication11.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 11. Задача 7. Кенийский бегун.

#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int distance, runningPace, counter = 1, averagePace = 0;
	cout << "\nПривет Сэм! Сколько ты сегодня пробежал? ";
	cin >> distance;
	do {
		cout << "\nКакой темп у тебя был на километре " << counter << "? ";
		cin >> runningPace;
		averagePace += runningPace;
		counter++;
	} while (counter <= distance);
	if (counter > distance) {
		cout << "\nТвой средний темп за тренировку: " << (averagePace / distance) / 60 << " минут " <<
			((averagePace / distance) % 60) << " секунд.";
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
