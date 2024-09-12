#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	_Bool input_is_good;
	printf("请输入整数并对他们求和\n");
	printf("输入一个非整数，程序结束\n");
	input_is_good = (scanf_s("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("请输入下一个整数\n");
		input_is_good = (scanf_s("%d", &num) == 1);
	}
	printf("求和值为%ld\n", sum);


}