#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main()

{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	int m[10];
	int max = 0;
	int min = 200;
	int r, i, j;
	//инициализация массива рандомными значениями

	/*printf("Задание 2\n");
	for (i = 0; i < 10; i++) { //заполнение массива рандомными числами
		m[i] = rand() % 20 + 1;
		printf("%3d", m[i]);
	}
	printf("\n");
	printf("Задание 1\n");
	for (i = 0; i < 10; i++) {
		if (m[i] < min) //нахождение минимума
			min = m[i];
	}
	for (i = 0; i < 10; i++) {
		if (m[i] > max) //нахождение максимума
			max = m[i];
	}
	r = max - min; //разница между максимальным и минимальным элементами массива.
	printf("разница между максимальным и минимальным элементами массива: \n%d\n", r);*/

	printf("Задание 3\n");
	int** z; //массив
	int a, b, n, colms;
	printf("Введите количество строк:\n");
	scanf("%d", &n);
	printf("Введите количество столбцов:\n");
	scanf("%d", &colms);
	z = (int**)malloc(n * sizeof(int*)); //выделение памяти
	for (a = 0; a < n; a++)  //цикл по строкам
	{
		z[a] = (int*)malloc(n * sizeof(int));
		for (b = 0; b < colms; b++)
		{//цикл по столбцам

			z[a][b] = rand() % 20;
			printf("%3d", z[a][b]);
		}
		printf("\n");
		free(z);//освобождение памяти

		/*
		printf("Задание 4\n");
		int a[5][5]; //массив
		int sumcol[5];
		int sum, j;
		for (i = 0; i < 5; i++) sumcol[i] = 0; // массив результатов заполняем нулями по умолчанию

		for (i = 0; i < 5; i++) {
			sum = 0;
			for (j = 0; j < 5; j++) {
				a[i][j] = rand() % 10;
				printf("%5d", a[i][j]);
				sum += a[i][j];
				sumcol[j] += a[i][j];
			}
			printf("|%d\n", sum);
		}
		for (i = 0; i < 5; i++) {
			printf("%5s", "--");
		}
		printf("\n Вывод сумм значений в каждом столбце");
		for (i = 0; i < 5; i++) {
			printf("%5d", sumcol[i]);
		}
		printf("\n");

		//структура
		printf("Задание 5\n");
		struct student {
			char famil[20], name[20], number[20];
		};
		char poisk[20];
		int flag = 0;
		student arr[3];
		printf("Напишите фамилию, имя , номер группы\n");
		for (int i = 0; i < 3; i++) {
			scanf("%s %s %s", arr[i].famil, arr[i].name, arr[i].number);
		}
		for (int i = 0; i < 3; i++) {
			printf(" %s  %s  %s \n", arr[i].famil, arr[i].name, arr[i].number);
		}
		// поиск
		printf("Напишите фамилию для поиска\n");
		scanf("%s", poisk);
		for (int i = 0; i < 3; i++) {
			if (strcmp(poisk, arr[i].famil) == 0) { //метод сравнивает строки,возвращает булевые значения
				//метод возвращает 0, если строки равны
				flag = 1;// присваиваем 1, потому что элемент найден
				printf(" %s  %s  %s \n", arr[i].famil, arr[i].name, arr[i].number);
			}
		}
		if (flag == 0) {
			printf("Студент не найден");
		}*/
		_getch();
		return 0;


	}

}




