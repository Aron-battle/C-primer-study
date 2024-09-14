#include<stdio.h>
//int main(void)
//{
//	char ch;
//
//	for (ch = 'C'; ch <= 'c'; ch++)//for循环后面不能加;
//		//ch = 'c'; ch <= 'C';错误定义的for-loop。未执行循环正文
//		//因为C的ASCII码值小于c的ASCII码值
//	     printf("%c的ASCII码数值为%d\n", ch, ch);
//		 return 0;
//}
//int main(void)
//{
//	char ch;
//	scanf_s("%c", &ch,1);
//	while (ch <= 'c')
//	{
//		printf("%c的ASCII码数值为%d\n",ch,ch);
//			ch++;
//	}



//for循环中包含能结束循环的语句即可——即判断语句
//int main(void)
//{
//	int num1, num2;
//	printf("请输入num2\n");
//	scanf_s("%d", &num2);
//	for (num1 = 2; num1 <= num2;)
//		printf("hello world\n");
//	return 0;
//}


//int main(void)
//{
//	int num1, num2;
//	num2 = 10;
//	for (scanf_s("%d", &num1); num1 <= num2;)
//		printf("hello world\n");
//	return 0;
//}
//逗号表达式：先执行逗号左边的表达式，再执行逗号右边的表达式
// num1++,num2 = num1 * num1和num2 = num 1 * num1,num1++
//前者，num1先自加然后再参与num2的计算；后者先进行num2的计算再对num进行自加

//zone和for循环
//for(初始化；判断语句；更新)
int main(void)
{
	int t_ct;//记录当前迭代次数
	double time, power_of_2;
	int limit;//对迭代次数的限制
	printf("输入你想要的限制数");
	scanf_s("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
		t_ct++, power_of_2 *= 2.0)
//首先初始化time和power_of_2，t_ct的值；判断语句：当，当前迭代次数小于等于最大迭代次数时；
//更新当前迭代次数的值，并将power_of_2的值乘以2倍
	{
		time += 1.0 / power_of_2;
		printf("当限制数limit=%d时对应的时间time=%f\n", limit, time);
	}
	//循环体当t_ct <= limit时。对1.0/power_of_2的值进行累加，并输出累计值
	return 0;
}