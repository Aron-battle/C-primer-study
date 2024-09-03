#include<stdio.h>
//int main()
//{
//	float a = 0;
//	printf("输入一个浮点数");
//	scanf_s("%f", &a);
//	printf("打印为小数点格式%f\n",a);
//	printf("打印为指数格式%e\n",a);
//	printf("打印为十六进制格式%a\n",a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("输入您的年龄\n");
//	scanf_s("%d", &a);
//	float b = a * 3.146e7;
//	printf("您的年龄对应的秒数%e", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//int b = 950 * a;//错误逻辑，需要输入以后再进行运算
//	printf("输入水的夸脱数");
//	scanf_s("%d", &a);
//	int b = 950 * a;
//	printf("%d对应的水分子数量%e", a , b / 3.0e-23);
//	return 0;
//}


//1英寸=2.54cm
//int main()
//{
//	int inch = 0;
//	printf("请输入你的升高（/英寸）\n");
//	scanf_s("%d", &inch);
//	printf("你的升高为%f\ncm.", inch * 2.54);
//	return 0;
//}

//1品脱=2杯=16盎司=32大汤勺=96茶勺
// 1杯=8盎司=16大汤勺=48茶勺
//为什么选用浮点型，因为杯转品脱的时候会产生小数点
//int main()
//{
//	int cup = 0;
//	scanf_s("%d", &cup);
//	printf("%d对应的品脱%f\n",cup,cup / 2.0);
//	printf("%d对应的盎司%d\n",cup,cup * 8);
//	printf("%d对应的大汤勺%d\n", cup, cup * 16);
//	printf("%d对应的茶勺%d\n", cup, cup * 48);
//}
