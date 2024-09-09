#include<Stdio.h>
//int main(void)
//{
//	char c1, c2;
//	int diff;
//	float num;
//	c1 = 'S';
//c2 = 'O';
//	diff = c1 - c2;
//	num = diff;
//	printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
//	return 0;
//}
void function(int n);
void function(int n)//表明该参数只接受int类型的数据——整数型数据
//含参函数中，n只是形式变量。下面的times，f为实际变量，程序运行时，把实践变量的值赋给形式变量，并进行函数运算
{
	while (n <= 10  )//当n++小于等于10时，输出#
	{
		n++;
		printf("#");
	}
	printf("\n");//循环结束后换行
}
int main()
{
	int times = 4;
	float f = 2.3;
	char ch = 'a';
	function(times);
	function(f);//将f强制定义为int类型等同于
	function(ch);

	return 0;
}