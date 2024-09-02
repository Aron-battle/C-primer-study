#include<stdio.h>
//观察系统如何处理整数上溢，浮点数上溢及下溢
//int main()
//{
//	int a = 100000000 * 100;//警告：要用宽类型存储操作数
//		printf("%d\n", a);//输出结果为随机内存结果：1410065408
//		return 0;
//}
//修改


//上溢：超出数据类型所表达的范围
//int main()
//{
//	float a = 3.3e44 * 100.0f;
//	printf("%e\n", a);//输出结果为inf
//	return 0;
//}

//下溢：计算能出结果，但是计算过程中损失了源末尾的有效数字
//int main()
//{
//	double a = (0.1344e-10) / 10;//结果为1.34000e-12少了最后以为有效数字
//	printf("%e\n", a);
//	return 0;
//}

//输出ASCII码，打印字符
//int main(void)
//{
//	int a=0;
//	char ch;
//	//ch = a;//语法错误，应该先输入，然后再等于。
//	scanf_s("%d", &a);
//	ch = a;
//	printf("输入的数字%d所对应的ASCII码为%c\n", a, ch);//两个都要ch
//	return 0;
//}

//先发警报再打印
//int main()
//{
//	printf("\a");
//	printf("startled by the sudden sound, Sally shouted\n");
//	printf("By the great Pumpkin,what was that!\n");
//	return 0;
//}

//读取一个浮点数，先打印小数点，再打印成指数形式，再答应成十六进制计数法
//int main()
//{
//	float a = 64.25;
//	printf("输入一个浮点数：%f\n", a);
//	printf("小数点格式%f\n", a);
//	printf("指数形式%e\n", a);
//	printf("十六进制计数法格式%a\n", a);
//		return 0;
//}