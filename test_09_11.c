#include<stdio.h>
//int main(void)
//{
//	int day, time, money;
//	day = 0;
//	printf("��������ĳ�ʼ���");
//	scanf_s("%d", &money);
//	printf("��������Ҫ�洢��ʱ��");
//	scanf_s("%d", &time);
//	while (day <= time)
//	{
//		money = money + day;
//		printf("��%d���㵱ǰ�Ľ��Ϊ%dԪ\n",day, money);
//		day++;
//	}
//	return 0;
//}


//int main(void)
//{
//	int num, square;
//	printf("������һ��ԭʼ����");
//	scanf_s("%d", &num);
//	while (num < 64)
//	{
//		square = num * num;
//		printf("%d��Ӧ��ƽ��Ϊ%d\n", num, square);
//		num++;
//	}
//	return 0;
//}

//int main(void)
//{
//	int num1, num2, num3;
//	printf("��������ģ����\n");
//	scanf_s("%d", &num1);
//	num2 = 1;
//	while (num2 > 0)
//	{
//	printf("�����뱻��ģ����\n");
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
	printf("%f��Ӧ�������¶�Ϊ%f,��Ӧ�Ŀ����¶�Ϊ%f\n", T, Celsius, Kelvin);
}
int main(void)
{
	double Fahrenheit;
	int quit = 1;//quit���Ƴ�
	while(quit ==1 )
	{
		printf("������һ�������¶�");
		quit = scanf_s("%lf", &Fahrenheit);
		temperatures(Fahrenheit);
	}
	return 0;
}