#include<stdio.h>
#define M_K 1.609
#define G_L 3.785
//int main(void)
//{
//	float Mile, Gallon;
//	printf("�������������\n");
//	scanf_s("%f", &Mile);
//	printf("���������ĵ�������\n");
//	scanf_s("%f",&Gallon);
//	printf("����ÿ����������ʻ��Ӣ����Ϊ%.1f����/Ӣ��\n", Mile/Gallon);
//	const float x = 3.785;
//	const float y = 1.609;
//	float L = Gallon * x;
//	float Km = Mile * y;
//	printf("����ÿ��������ʻ��Ӣ����Ϊ%.1f��/����\n", L * 100 / Km);
//	float mile, gallon;
//
//	printf("Please enter your travel miles: \n");
//	scanf_s("%f", &mile);
//	printf("Please enter your gasoline: \n");
//	scanf_s("%f", &gallon);
//	printf("One gallon gasoline drives %.1f miles.\n", mile / gallon);
//	printf("One hundred kilometers needs %.1f litre gasoline.\n",
//		G_L * 100 * gallon / (M_K * mile));
//	return 0;
//}

//ָ������
//#define squares = 32
//int main(void)
//{
//	double const Crop = 2e17;//����С�������
//	int count = 1;
//	int x = 30;
//	printf("square  dgarins  total");
//	return 0;
//}
//����ת��
int main(void)
{
	char ch;
	float f;
	int i;
	f = i = ch = 'C';
	printf("ch=%c,i=%d,f=%2.1f\n", ch, i, f);
	ch = ch + 1;
	i = f + 2 * ch;
	f = 2.0 * ch + i;
	printf("ch=%c,i=%d,f=%2.1f\n", ch, i, f);
	return 0;
}