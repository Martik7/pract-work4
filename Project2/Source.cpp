#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task4()
{
	int x, y, n;
	printf("��� ���� ���� �� �������?\n");
	scanf_s("%d", &x);
	if (x == 1)
	{
		printf("����� ������������� �����?\n");
	}
	else if (x == 0)
	{
		printf("���. ������ ���� ������.\n ");
	}

	else if (x == 1)
		{
			printf("������� ��������? - Python");
		}
	else if (x == 0)
		{
			printf("������ ��������? - Python");
		}
	}


void task3()
{
	srand(time(NULL));
	int a = 1 + rand() % 9;
	printf("������� � ����� - %d\n", a);
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

	printf("����� ������!");
	printf("����� ���������/�����?\n 1-3DGames\n 2-Web\n 3-Phone\n 4-Money\n 5-MoneyIT\n");

	
	


	if (sfera == dgames)
	{
		printf("�++\n");
	}
	else if (sfera==web)
	{
		printf("�������� - JavaScript\n ������ - C#\n");
	}
}


void task1()
{
	printf("������� �� scratch, ����� ... python\n");
}


	int main()
	{
		setlocale(LC_ALL, "");

		int task;
		int flag;

	start:
		printf("����� �� ������ ������� ����������������?\n ������� 1 - ��� �����\n 2 - ����������\n 3 - � �� ���� �������� �� ����\n 4 - ������������\n 5 - ���������\n 6 - ������������\n");
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

		printf("������ ���������� 1/0? \n");
		scanf_s("%d", &flag);
		
		if (flag == 1)
			goto start;

		system("pause");
	}