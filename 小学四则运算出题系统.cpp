#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

char symbol(int operation);     //��������� +��-
char symbol1(int operation);    // ���������* /
char symbol3(int operation);    //+ - * /
void AddSub(int grade);       //�� ��
void Mul_Div(int grade, int cate);  //�˳�
void Print(int cate);               //�����˳�
void FloatCount(int cate);           //��С����
void back();                        //����
int menu();                         //�˵�
int menu2();                         //�˵�2

int main()
{
	int choice, choice2;                                                     
	while (true)
	{	
		choice = menu();
		system("cls");
		if (choice == 1)
		{
			printf("\n\n");
			printf("\t\t\t\t\t �������������ֽ��룺\n\n");
			printf("\t\t\t\t�����룺 ");
			scanf("%d", &choice2);
			system("cls");
			AddSub(choice);
			back();

		}
		else if (choice == 2)
		{
			choice2 = menu2();
			system("cls");
			if (choice2 == 1)
			{
				AddSub(choice);
				back();

			}
			else if (choice2 == 2)
			{
				Mul_Div(choice, 2);
				back();
			}
			else if (choice2 == 3)
			{
				Mul_Div(choice, 3);
				back();
			}
			else if (choice2 == 4)
			{
				Mul_Div(choice, 4);
				back();
			}

		}
		else if (choice == 3)
		{
			choice2 = menu2();
			system("cls");
			if (choice2 == 1)
			{
				AddSub(choice);
				back();
			}
			else if (choice2 == 2)
			{
				Mul_Div(choice, 2);
				back();
			}
			else if (choice2 == 3)
			{
				Mul_Div(choice, 3);
				back();
			}
			else if (choice2 == 4)
			{
				Mul_Div(choice, 4);
				back();
			}

		}
		else if (choice == 4)
		{
			choice2 = menu2();
			system("cls");
			if (choice2 == 1)
			{
				FloatCount(1);
				back();
			}
			if (choice2 == 2)
			{
				FloatCount(2);
				back();
			}
			else if (choice2 == 3)
			{
				Print(3);
				back();
			}
			else if (choice2 == 4)
			{
				Print(4);
				back();
			}
		}
		else if (choice == 0)
			break;
	}
	system("cls");
	return 0;
}

int menu()
{
	int   choice;
	printf("\n\t\t******************��ӭʹ��������������ϵͳ******************\n");
	printf("\t\t\t                                                             \n");
	printf("\t\t\t\t 1.ʮ���� \t\t\t       \n");
	printf("\t\t\t\t 2.100����\t       \n");
	printf("\t\t\t\t 3.1000����\t\t\t       \n");
	printf("\t\t\t\t 4.С��\t\t\t\t       \n");
	printf("\t\t\t\t 0.�˳�ϵͳ\t\t\t\t       \n");
	printf("\t\t\t                                                              \n");
	printf("\t\t��ѡ��");
	while (true)
	{
		scanf("%d", &choice);
		if (choice >= 0 && choice <= 4)
		{
			return choice;
		}
		else
			printf("����ѡ��Ƿ������������룡����");
	}

}

int menu2()
{
	int  choice;
	printf("\n\n");
	printf("\t\t\t\t ��ѡ���������ͣ�\n");
	printf("\t\t\t\t 1.�Ӽ�������\n");
	printf("\t\t\t\t 2.�˷�����\n");
	printf("\t\t\t\t 3.��������\n");
	printf("\t\t\t\t 4.�˳�������\n\n");
	printf("\t\t\t��ѡ�� ");
	while (true)
	{
		scanf("%d", &choice);
		if (choice > 0 && choice < 5)
		{
			return choice;
		}
		else
			printf("����ѡ��Ƿ������������룡����");
	}


}

void back()
{
	printf("\n\t\t\t���κμ����أ���\n\n");
	getchar();
	getchar();
	system("cls");

}

char symbol(int operation)
{
	char c;
	switch (operation) {
	case 1:
		c = '+';
		break;
	case 2:
		c = '-';
		break;
	}
	return c;
}
char symbol1(int operation)
{
	char c;
	switch (operation) {
	case 1:
		c = '*';
		break;
	case 2:
		c = '/';
		break;
	}
	return c;
}
char symbol3(int operation)
{
	char c;
	switch (operation)
	{
	case 1:
		c = '+';
		break;
	case 2:
		c = '-';
		break;
	case 3:
		c = '*';
		break;
	case 4:
		c = '/';
		break;
	}
	return c;
}

void AddSub(int grade)
{
	FILE *fp;
	int number_of_problem;
	int a, b, mod;
	int operation;
	srand((unsigned)time(NULL));
	if (grade == 1)
		mod = 10;
	else if (grade == 2)
		mod = 100;
	else if (grade == 3)
		mod = 1000;
	printf("\n\n\n\t\t\t���������������");
	scanf("%d", &number_of_problem);
	fp = fopen("1.txt", "w");
	if (fp == NULL)
	{
		printf("File cannot open!");
		exit(0);
	}
	for (int i = 0; i < number_of_problem; i++)
	{
		a = rand() % mod;
		b = rand() % mod;
		operation = rand() % 2 + 1;
		for (int i = 0;; i++)
		{
			if (a < b&&symbol(operation) == '-')
			{
				a = rand() % mod;
				b = rand() % mod;
				operation = rand() % 2 + 1;
			}
			else break;
		}
		fprintf(fp, "%d %c %d =\n", a, symbol(operation), b);
	}
	fclose(fp);
	char name[100];
	printf("\t\t\t�������ı��ļ������ƣ�\t ");
	scanf("%s", name);
	strcat(name, ".txt");
	rename("1.txt", name);
	printf("\n\t\t\t��Ŀ�Ѵ�ӡ��ע����գ���\n");
	//system("cls");
}

void Mul_Div(int grade, int cate)
{
	FILE *fp;
	int number_of_problem;
	int a, b, mod;
	int operation;
	srand((unsigned)time(NULL));
	if (grade == 2)
		mod = 10;
	else if (grade == 3)
		mod = 1000;
	printf("\n\n\n\t\t\t���������������");
	scanf("%d", &number_of_problem);
	fp = fopen("2.txt", "w");
	if (fp == NULL)
	{
		printf("File cannot open!");
		exit(0);
	}
	if (cate == 4)
	{
		for (int i = 0; i < number_of_problem; i++)
		{
			a = rand() % mod;
			b = rand() % mod + 1;
			operation = rand() % 2 + 1;
			for (int i = 0;; i++)
			{
				if ((symbol1(operation) == '/') && (a%b != 0))
				{
					a = rand() % mod;
					b = rand() % mod + 1;
					operation = rand() % 2 + 1;
				}
				else break;
			}
			fprintf(fp, "%d %c %d =\n", a, symbol1(operation), b);
		}
	}
	else if (cate == 2)
	{
		for (int i = 0; i < number_of_problem; i++)
		{
			a = rand() % mod;
			b = rand() % mod;
			fprintf(fp, "%d * %d =\n", a, b);
		}
	}
	else if (cate == 3)
	{
		for (int i = 0; i < number_of_problem; i++)
		{
			a = rand() % mod;
			b = rand() % mod + 1;
			for (int i = 0;; i++)
			{
				if (a%b != 0 || a < b)
				{
					a = rand() % mod;
					b = rand() % mod + 1;
				}
				else break;
			}
			fprintf(fp, "%d / %d =\n", a, b);
		}
	}
	fclose(fp);
	char name[100];
	printf("\t\t\t�������ı��ļ������ƣ�\t ");
	scanf("%s", name);
	strcat(name, ".txt");
	rename("2.txt", name);
	printf("\n\t\t\t��Ŀ�Ѵ�ӡ��ע����գ���\n");
	//system("cls");
}


void Print(int cate)
{
	FILE *fp;
	int number_of_problem;
	int a, b, c, d;
	int operation;
	srand((unsigned)time(NULL));
	printf("\n\n\n\t\t\t���������������");
	scanf("%d", &number_of_problem);
	fp = fopen("3.txt", "w");
	if (fp == NULL)
	{
		printf("File cannot open!");
		exit(0);
	}
	if (cate == 3)
	{
		for (int i = 0; i < number_of_problem; i++)
		{
			a = rand() % 10 + 1;
			b = rand() % 20 + 1;
			c = rand() % 10 + 1;
			d = rand() % 20 + 1;
			for (int i = 0;; i++)
			{
				if ((a*1.0 / b) < (c*1.0 / d))
				{
					a = rand() % 10 + 1;
					b = rand() % 20 + 1;
					c = rand() % 10 + 1;
					d = rand() % 20 + 1;
				}
				else break;
			}
			operation = rand() % 2 + 1;
			fprintf(fp, "%d/%d %c %d/%d =\n", a, b, symbol(operation), c, d);
		}
	}
	else if (cate == 4)
	{
		for (int i = 0; i < number_of_problem; i++)
		{
			a = rand() % 10 + 1;
			b = rand() % 20 + 1;
			c = rand() % 10 + 1;
			d = rand() % 20 + 1;
			for (int i = 0;; i++)
			{
				if ((symbol1(operation) == '/'&&c == 0) || (b == 0 && d == 0))
				{
					a = rand() % 10 + 1;
					b = rand() % 20 + 1;
					c = rand() % 10 + 1;
					d = rand() % 20 + 1;
				}
				else break;
			}
			operation = rand() % 2 + 1;
			fprintf(fp, "%d/%d %c %d/%d =\n", a, b, symbol1(operation), c, d);
		}
	}
	fclose(fp);
	char name[100];
	printf("\t\t\t�������ı��ļ������ƣ�\t ");
	scanf("%s", name);
	strcat(name, ".txt");
	rename("3.txt", name);
	printf("\n\t\t\t��Ŀ�Ѵ�ӡ��ע����գ���\n");
}

void FloatCount(int cate)
{
	FILE *fp;
	int number_of_problem;
	float a, b;
	int operation;
	srand((unsigned)time(NULL));
	printf("\n\n\n\t\t\t���������������");
	scanf("%d", &number_of_problem);
	fp = fopen("4.txt", "w");
	if (fp == NULL)
	{
		printf("File cannot open!");
		exit(0);
	}
	printf("��ѡ����ĿС��λ����\n");
	printf("\t\t\t\t\t 1.һλ\n");
	printf("\t\t\t\t\t 2.��λ\n");
	printf("\t\t\t\t\t 3.��λ\n");
	int wei;
	scanf("%d", &wei);
	system("cls");
	if (cate == 1)
	{
		for (int i = 0; i < number_of_problem; i++)
		{
			a = rand() / double(RAND_MAX / 10);
			b = rand() / double(RAND_MAX / 10);
			operation = rand() % 2 + 1;
			for (int i = 0;; i++)
			{
				if (a < b&&symbol(operation) == '-')
				{
					a = rand() / double(RAND_MAX / 10);
					b = rand() / double(RAND_MAX / 10);
					operation = rand() % 2 + 1;
				}
				else break;
			}
			if (wei == 1)
				fprintf(fp, "%.1f %c %.1f =\n", a, symbol(operation), b);
			else if (wei == 2)
				fprintf(fp, "%.2f %c %.2f =\n", a, symbol(operation), b);
			else if (wei == 3)
				fprintf(fp, "%.3f %c %.3f =\n", a, symbol(operation), b);
		}
	}
	else if (cate == 2)
	{
		for (int i = 0; i < number_of_problem; i++)
		{
			a = rand() / double(RAND_MAX / 10);
			b = rand() / double(RAND_MAX / 10);
			operation = rand() % 2 + 1;
			for (int i = 0;; i++)
			{
				if (b == 0 && symbol1(operation) == '/')
				{
					a = rand() / double(RAND_MAX / 10);
					b = rand() / double(RAND_MAX / 10);
					operation = rand() % 2 + 1;
				}
				else break;
			}
			if (wei == 1)
				fprintf(fp, "%.1f %c %.1f =\n", a, symbol1(operation), b);
			else if (wei == 2)
				fprintf(fp, "%.2f %c %.2f =\n", a, symbol1(operation), b);
			else if (wei == 3)
				fprintf(fp, "%.3f %c %.3f =\n", a, symbol1(operation), b);
		}
	}
	fclose(fp);
	char name[100];
	printf("\t\t\t�������ı��ļ������ƣ�\t ");
	scanf("%s", name);
	strcat(name, ".txt");
	rename("4.txt", name);
	printf("\n\t\t\t��Ŀ�Ѵ�ӡ��ע����գ���\n");
}
