//嵌套循环
//rows1.c
#include<stdio.h>
//#define CHARS 10
//int main(void)
//{
//	int row, ROWS;
//	char ch;
//	printf("输入任意一个小于7的行数\n");
//	for (scanf_s("%d", &ROWS),row = 0; row < ROWS; row++)
//	{
//		for (ch = 'c'; ch <= ('c' + CHARS); ch++)//ch <='c' + CHARS是当ch小于等于11个字符时，ch会自动在后面加一个字符
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
//	for (row = 0; row < ROWS; row++)//嵌套for循环
//	{
//		for (ch = ('A' + row), printf("第%d行字符串为:", row + 1); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}

//使用循环处理数组
//#define size 10
//int main(void)
//{
//	int index, score[size];
//	int sum = 0;
//	float average;
//
//	printf("输入%d个篮球进分\n", size);
//	for (index = 0; index <= size; index++)
//		scanf_s("%d", &score[index]);
//	printf("被读取的数据如下：\n");
//	for (index = 0; index <= size; index++)
//		printf("%5d", score[index]);
//	return 0;
//}

//pow函数——指数函数
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
//	double x, xpow;//xpow是x的指数值
//	int exp;//幂
//	printf("输入一个整数及其整数次幂");
//	printf("这个数的值将会被增加；或按q退出程序");
//	while (scanf_s("%lf%d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp);
//		printf("%.3g的%d幂是%0.5g\n", x, exp, xpow);
//	}
//	printf("感谢使用本程序\n");
//	return 0;
//}

//习题5.6
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

//编程练习 6.16
//（1）
//int main(void)
//{
//	char ch[20];
//	printf("请输入你想要输入的字符\n");
//	scanf_s("%s", &ch, 20);
//	printf("你输入的字符为%s", ch);
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
//	printf("请输入一个大写字母\n");
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
//	printf("请输入一个上限值\n");
//	scanf_s("%d", &max);
//	printf("请输入一个下限值\n");
//	scanf_s("%d", &min);
//	printf("整数的平方和立方\n");
//	for (x = min; x <= max; x++)
//	{
//		printf("整数为：%-8d平方值为%-7d立方值为%d\n", x, x * x, x * x * x);
//	}
//	return 0;
//}