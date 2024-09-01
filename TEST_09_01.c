#include<stdio.h>
//int main()
//{
//	printf("abc\n");
//	printf("a\bc\n");
//	printf("abc\n");
//	return 0;
//}
void jolly (void);//告知程序要在程序中使用
void jolly (void)//定义函数
{
	printf("For he's a jolly good fellow!\nFor he's a jolly good fellow!\nFor he's a jolly good fellow!\n");
}
void deny (void);
void deny (void)
{
	printf("which nobody can deny!");
}
void br(void);
void br(void)
{
	printf("Brazil,Russia");
}
void ic(void);
void ic(void)
{
	printf("India,China");
}
void sm(void);
void sm(void)
{
	printf("smile!");
}
void two(void);
void two(void)
{
	printf("two\n");
}
void one_three(void);
void one_three(void)
{
	printf("\n");
	printf("one\n");
	two();
	printf("three\n");
}
//int main()
//{
//	jolly();
//	deny();
//	return 0;
//int main(void)
//{
//	br(), ic();
//	printf(",");
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//	printf("\n");
//	return 0;
//}
//int main(void)
//{
//	int tose,tosex2,tose2;
//	tose = 10;
//	tosex2 = 2 * tose;
//	tose2 = tose * tose;
//	printf("%d\n%d\n%d\n", tose, tosex2, tose2);
//	return 0;
//
//}
//int main()
//{
//	sm();
//	sm();
//	sm();
//	printf("\n");
//	sm();
//	sm();
//	printf("\n");
//	sm();
//	return 0;
//}
int main()
{
	printf("starting now:");
	one_three();
	printf("done!");
	return 0;
}
