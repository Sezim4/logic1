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
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	int m[10];
	int max = 0;
	int min = 200;
	int r, i, j;
	//������������� ������� ���������� ����������

	/*printf("������� 2\n");
	for (i = 0; i < 10; i++) { //���������� ������� ���������� �������
		m[i] = rand() % 20 + 1;
		printf("%3d", m[i]);
	}
	printf("\n");
	printf("������� 1\n");
	for (i = 0; i < 10; i++) {
		if (m[i] < min) //���������� ��������
			min = m[i];
	}
	for (i = 0; i < 10; i++) {
		if (m[i] > max) //���������� ���������
			max = m[i];
	}
	r = max - min; //������� ����� ������������ � ����������� ���������� �������.
	printf("������� ����� ������������ � ����������� ���������� �������: \n%d\n", r);*/

	printf("������� 3\n");
	int** z; //������
	int a, b, n, colms;
	printf("������� ���������� �����:\n");
	scanf("%d", &n);
	printf("������� ���������� ��������:\n");
	scanf("%d", &colms);
	z = (int**)malloc(n * sizeof(int*)); //��������� ������
	for (a = 0; a < n; a++)  //���� �� �������
	{
		z[a] = (int*)malloc(n * sizeof(int));
		for (b = 0; b < colms; b++)
		{//���� �� ��������

			z[a][b] = rand() % 20;
			printf("%3d", z[a][b]);
		}
		printf("\n");
		free(z);//������������ ������

		/*
		printf("������� 4\n");
		int a[5][5]; //������
		int sumcol[5];
		int sum, j;
		for (i = 0; i < 5; i++) sumcol[i] = 0; // ������ ����������� ��������� ������ �� ���������

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
		printf("\n ����� ���� �������� � ������ �������");
		for (i = 0; i < 5; i++) {
			printf("%5d", sumcol[i]);
		}
		printf("\n");

		//���������
		printf("������� 5\n");
		struct student {
			char famil[20], name[20], number[20];
		};
		char poisk[20];
		int flag = 0;
		student arr[3];
		printf("�������� �������, ��� , ����� ������\n");
		for (int i = 0; i < 3; i++) {
			scanf("%s %s %s", arr[i].famil, arr[i].name, arr[i].number);
		}
		for (int i = 0; i < 3; i++) {
			printf(" %s  %s  %s \n", arr[i].famil, arr[i].name, arr[i].number);
		}
		// �����
		printf("�������� ������� ��� ������\n");
		scanf("%s", poisk);
		for (int i = 0; i < 3; i++) {
			if (strcmp(poisk, arr[i].famil) == 0) { //����� ���������� ������,���������� ������� ��������
				//����� ���������� 0, ���� ������ �����
				flag = 1;// ����������� 1, ������ ��� ������� ������
				printf(" %s  %s  %s \n", arr[i].famil, arr[i].name, arr[i].number);
			}
		}
		if (flag == 0) {
			printf("������� �� ������");
		}*/
		_getch();
		return 0;


	}

}




