#include<stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	_Bool input_is_good;
	printf("���������������������\n");
	printf("����һ�����������������\n");
	input_is_good = (scanf_s("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("��������һ������\n");
		input_is_good = (scanf_s("%d", &num) == 1);
	}
	printf("���ֵΪ%ld\n", sum);


}