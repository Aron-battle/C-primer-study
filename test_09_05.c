//4.8编程练习
#include<stdio.h>
//4.8.1
//int main(void)
//{
//	char name[40];
//	printf("请输入你的名字\n");
//	scanf_s("%s", name,40);//调用scanf_s函数，需要提供一个数字以表明最多读取多少位字符
//	printf("你的名字是：%s\n", name);
//	return 0;
//}

//4.8.2
//int main(void)
//{
//	char name[40];
//	printf("请输入你的名字\n");
//	scanf_s("%s", name,40);//调用scanf_s函数，需要提供一个数字以表明最多读取多少位字符
//	printf("你的名字是：\"%s\"\n", name);
//	printf("你的名字是：\"%20s\"\n", name);
//	printf("你的名字是：\"%-20s\"\n", name);
//	printf("你的名字是:   %s\n", name);
//	return 0;
//}

//4.8.3
//int main(void)
//{
//	float a=0.0;
//	scanf_s("%f",&a);//需要加&，要不然找不到存储地址
//	printf("输入%.1f或%.1e\n",a,a);
//	printf("输入%+.3f或%.3e\n",a,a);
//	return 0;
//}

//4.8.4
int main(void)
{
	float tall = 0;
	char name[20];
	printf("请输入你的身高和姓名\n");
	scanf_s("%f%s", &tall, name, 20);
	printf("%s您的身高是%.2f\n",name,tall/100.0);
	return 0;
}