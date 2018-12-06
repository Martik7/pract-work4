#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task4()
{
	int x, y, n;
	printf("Уже есть идея на миллион?\n");
	scanf_s("%d", &x);
	if (x == 1)
	{
		printf("Какая платформенная сфера?\n");
	}
	else if (x == 0)
	{
		printf("Нет. Просто хочу начать.\n ");
	}

	else if (x == 1)
		{
			printf("Простым способом? - Python");
		}
	else if (x == 0)
		{
			printf("Лучшим способом? - Python");
		}
	}


void task3()
{
	srand(time(NULL));
	int a = 1 + rand() % 9;
	printf("Начните с языка - %d\n", a);
	printf("1. Python\n");
	printf("2. Java\n");
	printf("3. C\n");
	printf("4. PHP\n");
	printf("5. C++\n");
	printf("6. JavaScript\n");
	printf("7. C#\n");
	printf("8. Ruby\n");
	printf("9. OBJECTIVE-C\n");
}


void task2()
{
	int sfera,dgames, web, phone, moneyIT, money;
	sfera = 0;
	dgames = 1;
	web = 2;
	phone = 3;
	moneyIT = 4;
	money = 5;

	printf("Найти работу!");
	printf("Какая платформа/сфера?\n 1-3DGames\n 2-Web\n 3-Phone\n 4-Money\n 5-MoneyIT\n");

	
	


	if (sfera == dgames)
	{
		printf("С++\n");
	}
	else if (sfera==web)
	{
		printf("Фронтенд - JavaScript\n Бэкенд - C#\n");
	}
}


void task1()
{
	printf("Начните со scratch, затем ... python\n");
}


	int main()
	{
		setlocale(LC_ALL, "");

		int task;
		int flag;

	start:
		printf("Зачем вы хотите изучать программирование?\n Введите 1 - для детей\n 2 - заработать\n 3 - Я не знаю выберите за меня\n 4 - Поразвлечься\n 5 - Интересно\n 6 - Саморазвитие\n");
		scanf_s("%d", &task);
		



		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;

		default:
			break;
		}

		printf("Хотите продолжить 1/0? \n");
		scanf_s("%d", &flag);
		
		if (flag == 1)
			goto start;

		system("pause");
	}