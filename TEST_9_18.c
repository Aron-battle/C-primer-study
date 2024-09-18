//#for循环习题
#include<stdio.h>
//7
#include<string.h>
//int main(void)
//{
//	char ch[20];
//	int i, num;
//	printf("请输入一个英文单词\n");
//	scanf_s("%s", &ch, 20);
//	num = strlen(ch);
//	for (i = num - 1; i >= 0; i--)//为什么i = num - 1；因为当字符串以空字符\n结束；
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}


//8
//void cal(float, float);
//
//int main(void)
//{
//	float i, j;
//	int a, b;
//	printf("请输入一个小数（或按任意字母结束)");
//	a = scanf_s("%f", &i);
//	printf("请输入一个小数（或按任意字母结束)");
//	b = scanf_s("%f", &j);
//	while (( a == 1 ) & ( b == 1 ))
//	{
//		cal(i, j);
//		printf("请输入一个小数（或按任意字母结束)");
//		a = scanf_s("%f", &i);
//		printf("请输入一个小数（或按任意字母结束)");
//		b = scanf_s("%f", &j);
//	}
//	return 0;
//}
//void cal(float i, float j)
//{
//	printf("%.2f\n", (i - j) / (i * j));//原型函数
//}

//9
int main(void)
{
	int num1, num2,x, sum;
	/*printf("请输入一个上限函数\n");
	scanf_s("%d", &num1);
	printf("请输入一个下限函数\n");
	scanf_s("%d", &num2);*/
	while (num1 - num2 != 0)//如果输入的整数再while上面，则不能进行后续循环
	{//如何使用为初始化局部变量
		printf("请输入一个上限函数\n");
		scanf_s("%d", &num1);
		printf("请输入一个下限函数\n");
		scanf_s("%d", &num2);
		for (x = 1, sum = 0; x <= num1; x++)
		{
			sum = sum + x * x;
		}
		printf("从%d到%d的平方和为%d\n", num2 * num2, num1 * num1, sum);
	}
	printf("done");
	return 0;
}