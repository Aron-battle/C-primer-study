//Ƕ��ѭ��
//rows1.c
#include<stdio.h>
//#define CHARS 10
//int main(void)
//{
//	int row, ROWS;
//	char ch;
//	printf("��������һ��С��7������\n");
//	for (scanf_s("%d", &ROWS),row = 0; row < ROWS; row++)
//	{
//		for (ch = 'c'; ch <= ('c' + CHARS); ch++)//ch <='c' + CHARS�ǵ�chС�ڵ���11���ַ�ʱ��ch���Զ��ں����һ���ַ�
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}

//rows2.c
//int main(void)
//{
//	const int ROWS = 8;
//	const int CHARS = 8;
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)//Ƕ��forѭ��
//	{
//		for (ch = ('A' + row), printf("��%d���ַ���Ϊ:", row + 1); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}

//ʹ��ѭ����������
//#define size 10
//int main(void)
//{
//	int index, score[size];
//	int sum = 0;
//	float average;
//
//	printf("����%d���������\n", size);
//	for (index = 0; index <= size; index++)
//		scanf_s("%d", &score[index]);
//	printf("����ȡ���������£�\n");
//	for (index = 0; index <= size; index++)
//		printf("%5d", score[index]);
//	return 0;
//}

//pow��������ָ������
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//	
//	for (i = 1; i <= p; i++)
//		pow *= n;
//	return pow;
//}
//int main(void)
//{
//	double x, xpow;//xpow��x��ָ��ֵ
//	int exp;//��
//	printf("����һ������������������");
//	printf("�������ֵ���ᱻ���ӣ���q�˳�����");
//	while (scanf_s("%lf%d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g��%d����%0.5g\n", x, exp, xpow);
//	}
//	printf("��лʹ�ñ�����\n");
//	return 0;
//}

//ϰ��5.6
//#define ROWS 4
//#define LINE 4
//int main(void)
//{
//	int row, line;
//	char ch = '$';
//
//	for (row = 1; row <= ROWS; row++)
//	{
//		for (line = 1; line <= LINE; line++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	while (i++ < 4)
//		printf("hi!");
//	do
//		printf("Bye!");
//	while (i++ < 8);
//	return 0;
//}

//�����ϰ 6.16
//��1��
//int main(void)
//{
//	char ch[20];
//	printf("����������Ҫ������ַ�\n");
//	scanf_s("%s", &ch, 20);
//	printf("��������ַ�Ϊ%s", ch);
//	return 0;
//}

//(2)

//int main(void)
//{
//	const int ROWS = 5;
//	const int LIEN = 5;
//	int row, line;
//	char ch = '$';
//	for (row = 1; row <= ROWS; row++)
//	{
//		for (line = 1; line <= row; line++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}

//(3)
//int main(void)
//{
//	const int ROWS = 6;
//	int row;
//	char ch;
//	for (row = 1; row <= ROWS; row++)
//	{
//		for (ch = 'F'; ch > ('F' - row); ch--)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}

//(4)
//int main(void)
//{
//	const int ROWS = 6;
//	int row,line,k;
//	char ch = 'A';
//	k = 0;
//	for (row = 0; row < ROWS; row++)
//	{
//		for (line = 0;line <row + 1;line++,k++)
//			printf("%c", ch + k);
//		printf("\n");
//	}
//	return 0;
//}
//(5)
//int main()
//{
//	int row, line, additive, degression, difference;
//	char ch,c;
//	printf("������һ����д��ĸ\n");
//	scanf_s("%c", &ch, 20);
//	difference = ch - 'A';
//	for (row = 1; row <= difference + 1; row++)
//	{
//		for (line = 1; line <= difference + 1 - row; line++)
//		{
//			printf(" ");
//		}
//		
//		for (c = 'A', additive = 0; additive < row; additive++, c++)
//		{
//			printf("%c", c);
//		}
//
//		for (c = 'A', degression = row - 1; degression > 0; degression--)
//		{
//			printf("%c", c + degression - 1);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//(6)
//int main(void)
//{
//	int min, max, x;
//	printf("������һ������ֵ\n");
//	scanf_s("%d", &max);
//	printf("������һ������ֵ\n");
//	scanf_s("%d", &min);
//	printf("������ƽ��������\n");
//	for (x = min; x <= max; x++)
//	{
//		printf("����Ϊ��%-8dƽ��ֵΪ%-7d����ֵΪ%d\n", x, x * x, x * x * x);
//	}
//	return 0;
//}