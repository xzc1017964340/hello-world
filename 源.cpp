#include<stdio.h>
#include<math.h>
#include<windows.h>

int right = 0;
int wrong = 0;

void add(){
	int a, b, c;
	a = rand() % 100;
	b = rand() % 100;
	printf("��ش�\n\t\t %d + %d = ", a, b);
	scanf_s("%d", &c);
	if (a + b == c)
	{
		printf("�ش���ȷ!\n");
		right++;
	}
	else
	{
		printf("�ش����!\n");
		wrong++;
	}
}

void sub(){
	int a, b, c;
	do{                                              //�޸ģ����������С�ڼ�����������ȡֵ
		a = rand() % 100;
		b = rand() % 100;
	} while (a<b);
	printf("��ش�\n\t\t %d - %d = ", a, b);
	scanf_s("%d", &c);
	if (a - b == c)
	{
		printf("�ش���ȷ!\n");
		right++;
	}
	else
	{
		printf("�ش����!\n");
		wrong++;
	}
}
void mul()
{
	int a, b, c;
	a = rand() % 100;
	b = rand() % 100;
	printf("��ش�\n\t\t %d * %d = ", a, b);
	scanf_s("%d", &c);
	if (a*b == c)
	{
		printf("�ش���ȷ!\n");
		right++;
	}
	else
	{
		printf("�ش����!\n");
		wrong++;
	}
}
void div()
{
	int a, b, c;
	do{                                                   //������������������Ϊ0��������ȡֵ
	a = rand() % 100;
	b = rand() % 100;
	} while (b == 0);
	printf("��ش�\n\t\t %d / %d = ", a, b);
	scanf_s("%d", &c);
	if (a / b == c)
	{
		printf("�ش���ȷ!\n");
		right++;
	}
	else
	{
		printf("�ش����!\n");
		wrong++;
	}
}
void main()
{
	int choise;
	int con = 0;
	printf("\n\t\t\t��ӭ����Сѧ������������\n\n");
	while (1)
	{
		printf("��ѡ��\n");
		printf("\t\t\t  �ӷ����㣨������1��\n");
		printf("\t\t\t  �������㣨������2��\n");
		printf("\t\t\t  �˷����㣨������3��\n");
		printf("\t\t\t  �������㣨������4��\n");
		printf("\t\t\t  �˳����㣨������5��\n");
		if (con == 0)
			scanf_s("%d", &choise);
		switch (choise)
		{
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:
			div();
			break;
		case 5:
			return;
		}
		printf("\n\t\t\t�������㣿��������1��\n");
		printf("\n\t\t\t����ѡ�񣿣�������2��\n");
		printf("\n\t\t\t�˳����㣿��������3��\n");
		scanf_s("%d", &con);
		if (con == 1)
			con = 1;
		else if (con == 2)
			con = 0;
		else if (con == 3)
			break;
		else
			printf("��Ǹ!���������ָ������!����������!\n");
	}
	printf("���ܹ������ %d ����\n��ȷ %d ��\n���� %d ��\n", right + wrong, right, wrong);
}