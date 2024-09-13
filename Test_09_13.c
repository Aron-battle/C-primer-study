//for—≠ª∑
#include<stdio.h>
int main(void)
{
	int num, cube;
	for (num = 1; num <= 7; num++)
	{
		cube = num * num * num;
		printf("%5d,%5d\n", num, cube);
	}
	return 0;
}