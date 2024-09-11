#include<stdio.h>
//int main(void)
//{
//	int day, time, money;
//	day = 0;
//	printf("请输入你的初始金额");
//	scanf_s("%d", &money);
//	printf("请输入你要存储的时间");
//	scanf_s("%d", &time);
//	while (day <= time)
//	{
//		money = money + day;
//		printf("第%d天你当前的金额为%d元\n",day, money);
//		day++;
//	}
//	return 0;
//}


//int main(void)
//{
//	int num, square;
//	printf("请输入一个原始数据");
//	scanf_s("%d", &num);
//	while (num < 64)
//	{
//		square = num * num;
//		printf("%d对应的平方为%d\n", num, square);
//		num++;
//	}
//	return 0;
//}

//int main(void)
//{
//	int num1, num2, num3;
//	printf("请输入求模数字\n");
//	scanf_s("%d", &num1);
//	num2 = 1;
//	while (num2 > 0)
//	{
//	printf("请输入被求模数字\n");
//	scanf_s("%d", &num2);
//	num3 = num2 % num1;
//	printf("%d %% %d = %d\n", num2, num1, num3);
//	}
//	return 0;
//}
//
void temperatures(double T);
void temperatures(double T)
{
	float Celsius, Kelvin;
	Celsius = 5.0 / 9.0 * (T - 32.0);
	Kelvin = Celsius + 273.16;
	printf("%f对应的摄氏温度为%f,对应的开氏温度为%f\n", T, Celsius, Kelvin);
}
int main(void)
{
	double Fahrenheit;
	int quit = 1;//quit是推出
	while(quit ==1 )
	{
		printf("请输入一个开氏温度");
		quit = scanf_s("%lf", &Fahrenheit);
		temperatures(Fahrenheit);
	}
	return 0;
}