#include<stdio.h>
#define commone 60
//int main(void)
//{
//	int min = 1;
//	while (min > 0)
//	{
//		scanf_s("%d", &min);
//		printf("%dh%dmin\n", min / commone, min % commone);
//	}
//	return 0;
//}


//int main(void)
//{
//	int num = 0;
//	printf("请输入一个整数\n");
//	scanf_s("%d", &num);
//	int num1 = num + 10;//num1在while循环前，其值不受while循环影响
//	while (num <= num1)//不能写做num<=num+10,因为此时num在循环语句中，会一直循环下去，需要一个中间变量
//	{
//		num++;//该语句应该在打印语句前，否则会重复打印第一个数；
//		//疑问：为什么这里用++num，打印的第一个不是2，而是1
//		printf("%d\n", num);
//			//num = num + 1;
//	}
//	return 0;
//}

//5.3
#define F 7
//int main(void)
//{
//	int day;
//	printf("请输入天数\n");
//	scanf_s("%d", &day);
//	printf("%d对应%d周%d天", day, day / 7, day % 7);
//	return 0;
//}


//5.4
#define zhuanhuan 0.39
int main(void)
{
	float tall = 0.0;
	//float inch = zhuanhuan * tall;//在这里定义，其值永远为0，因为没有参与到while语句中就结束了。
	//int feet = inch / 12;
	while (tall >= 0)
	{
		printf("请输入您的身高（单位：cm）\n");
		scanf_s("%f", &tall);
		float inch = zhuanhuan * tall;
		int feet = inch / 12;
		printf("%.2fcm= %dfeet %d inch\n", tall, feet, (int)inch % 12);
	}
	return 0;
