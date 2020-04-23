#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

char symbol(int operation);     //运算符操作 +、-
char symbol1(int operation);    // 运算符操作* /
char symbol3(int operation);    //+ - * /
void iAddMinu(int grade);       //加 减
void iMulDi(int grade, int cate);  //乘除
void fcal(int cate);               //输入到文本文件
void floatcal(int cate);           //小数题

int main()
{
	int chosegr, chosecate;
	int con = 1;
	printf("\n\t\t\t******************欢迎使用四则运算自动生成系统******************\n");
	printf("\t\t\t*                                                              *\n");
	while (true)
	{
		printf("\t\t\t*\t\t 1.十以内加减法 \t\t\t       *\n");
		printf("\t\t\t*\t\t 2.100以内加减法以及10以内乘除法\t       *\n");
		printf("\t\t\t*\t\t 3.1000以内加减乘除法\t\t\t       *\n");
		printf("\t\t\t*\t\t 4.小数四则运算法则以及分数加减法\t       *\n");
		printf("\t\t\t*\t\t 0.退出系统\t\t\t\t       *\n");
		printf("\t\t\t*                                                              *\n");
		printf("\t\t\t****************************************************************\n");
		printf("请选择：\n");
		if (con == 1)
			scanf("%d", &chosegr);
		system("cls");
		if (chosegr == 1)
		{
			printf("\n\n");
			printf("\t\t\t\t\t 请输入任意数字进入：\n\n");
			printf("\t\t\t\t请输入： ");
			scanf("%d", &chosecate);
			system("cls");
			iAddMinu(chosegr);
			printf("\n\t\t\t1.继续出题？\n");
			printf("\n\t\t\t2.退出系统？\n\n");
			printf("\t\t请选择：\t ");
			scanf("%d", &con);
			if (con == 1)
				system("cls");
			if (con == 2)
			{
				break;
			}
		}
		else if (chosegr == 2)
		{
			printf("\n\n");
			printf("\t\t\t\t\t 请选择运算类型：\n");
			printf("\t\t\t\t\t 1.加减法运算\n");
			printf("\t\t\t\t\t 2.乘法运算\n");
			printf("\t\t\t\t\t 3.除法运算\n");
			printf("\t\t\t\t\t 4.乘除法运算\n\n");
			printf("\t\t\t请选择：\t ");
			scanf("%d", &chosecate);
			system("cls");
			if (chosecate == 1)
			{
				iAddMinu(chosegr);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			else if (chosecate == 2)
			{
				iMulDi(chosegr, 2);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			else if (chosecate == 3)
			{
				iMulDi(chosegr, 3);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			else if (chosecate == 4)
			{
				iMulDi(chosegr, 4);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}

		}
		else if (chosegr == 3)
		{
			printf("\n\n");
			printf("\t\t\t\t\t 请选择运算类型：\n");
			printf("\t\t\t\t\t 1.加减法运算\n");
			printf("\t\t\t\t\t 2.乘法运算\n");
			printf("\t\t\t\t\t 3.除法运算\n");
			printf("\t\t\t\t\t 4.乘除法运算\n\n");
			printf("\t\t\t请选择：\t ");
			scanf("%d", &chosecate);
			system("cls");
			if (chosecate == 1)
			{
				iAddMinu(chosegr);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			else if (chosecate == 2)
			{
				iMulDi(chosegr, 2);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			else if (chosecate == 3)
			{
				iMulDi(chosegr, 3);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			else if (chosecate == 4)
			{
				iMulDi(chosegr, 4);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}

		}
		else if (chosegr == 4)
		{
			printf("\n\n");
			printf("\t\t\t\t\t 请选择运算类型：\n");
			printf("\t\t\t\t\t 1.小数加减运算\n");
			printf("\t\t\t\t\t 2.小数乘除运算\n");
			printf("\t\t\t\t\t 3.分数加减运算\n");
			printf("\t\t\t\t\t 4.分数乘除运算\n\n");
			printf("\t\t\t请选择：\t ");
			scanf("%d", &chosecate);
			system("cls");
			if (chosecate == 1)
			{
				floatcal(1);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			if (chosecate == 2)
			{
				floatcal(2);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			else if (chosecate == 3)
			{
				fcal(3);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
			else if (chosecate == 4)
			{
				fcal(4);
				printf("\n\t\t\t1.继续出题？\n");
				printf("\n\t\t\t2.退出系统？\n\n");
				printf("\t\t\t请选择：\t ");
				scanf("%d", &con);
				if (con == 1)
					system("cls");
				if (con == 2)
				{
					break;
				}
			}
		}
		else if (chosegr == 0)
			break;
	}
	system("cls");
	return 0;
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

void iAddMinu(int grade)
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
	printf("\n\n\n\t\t\t请输入出题数量：");
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
	char id[100];
	printf("\n\t\t\t请填写下发日期和要下发给的班级：\n");
	printf("\n\t\t\t为便于查找输入格式为年.月.日.年级.班级（如要多次为该班出题可在最后加序号标记）\n");
	printf("\t\t\t请输入：\t ");
	scanf("%s", id);
	strcat(id, ".txt");
	rename("1.txt", id);
	printf("\n\t\t\t已出好%d道题，可以下发给学生。\n", number_of_problem);
	//system("cls");
}

void iMulDi(int grade, int cate)
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
	printf("\n\n\n\t\t\t请输入出题数量：");
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
	char id[100];
	printf("\n\t\t\t请填写下发日期和要下发给的班级：\n");
	printf("\n\t\t\t为便于查找输入格式为年.月.日.年级.班级（如要多次为该班出题可在最后加序号标记）\n");
	printf("\t\t\t请输入：\t ");
	scanf("%s", id);
	strcat(id, ".txt");
	rename("2.txt", id);
	printf("\n\t\t\t已出好%d道题，可以下发给学生。\n", number_of_problem);
	//system("cls");
}


void fcal(int cate)
{
	FILE *fp;
	int number_of_problem;
	int a, b, c, d;
	int operation;
	srand((unsigned)time(NULL));
	printf("\n\n\n\t\t\t请输入出题数量：");
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
	char id[100];
	printf("\n\t\t\t请填写下发日期和要下发给的班级：\n");
	printf("\n\t\t\t为便于查找输入格式为年.月.日.年级.班级（如要多次为该班出题可在最后加序号标记）\n");
	printf("\t\t\t请输入：\t ");
	scanf("%s", id);
	strcat(id, ".txt");
	rename("3.txt", id);
	printf("\n\t\t\t已出好%d道题，可以下发给学生。\n", number_of_problem);
}

void floatcal(int cate)
{
	FILE *fp;
	int number_of_problem;
	float a, b;
	int operation;
	srand((unsigned)time(NULL));
	printf("\n\n\n\t\t\t请输入出题数量：");
	scanf("%d", &number_of_problem);
	fp = fopen("4.txt", "w");
	if (fp == NULL)
	{
		printf("File cannot open!");
		exit(0);
	}
	printf("请选择题目小数位数：\n");
	printf("\t\t\t\t\t 1.一位\n");
	printf("\t\t\t\t\t 2.二位\n");
	printf("\t\t\t\t\t 3.三位\n");
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
	char id[100];
	printf("\n\t\t\t请填写下发日期和要下发给的班级：\n");
	printf("\n\t\t\t为便于查找输入格式为年.月.日.年级.班级（如要多次为该班出题可在最后加序号标记）\n");
	printf("\t\t\t请输入：\t ");
	scanf("%s", id);
	strcat(id, ".txt");
	rename("4.txt", id);
	printf("\n\t\t\t已出好%d道题，可以下发给学生。\n", number_of_problem);
}
