#include<stdio.h>
#define commone 60
//int main(void)
//{
//	int min = 1;
//	while (min > 0)
//	{
//		scanf_s("%d", &min);
//		printf("%dh%dmin\n", min / commone, min % commone);
//	}
//	return 0;
//}


//int main(void)
//{
//	int num = 0;
//	printf("������һ������\n");
//	scanf_s("%d", &num);
//	int num1 = num + 10;//num1��whileѭ��ǰ����ֵ����whileѭ��Ӱ��
//	while (num <= num1)//����д��num<=num+10,��Ϊ��ʱnum��ѭ������У���һֱѭ����ȥ����Ҫһ���м����
//	{
//		num++;//�����Ӧ���ڴ�ӡ���ǰ��������ظ���ӡ��һ������
//		//���ʣ�Ϊʲô������++num����ӡ�ĵ�һ������2������1
//		printf("%d\n", num);
//			//num = num + 1;
//	}
//	return 0;
//}

//5.3
#define F 7
//int main(void)
//{
//	int day;
//	printf("����������\n");
//	scanf_s("%d", &day);
//	printf("%d��Ӧ%d��%d��", day, day / 7, day % 7);
//	return 0;
//}


//5.4
#define zhuanhuan 0.39
int main(void)
{
	float tall = 0.0;
	//float inch = zhuanhuan * tall;//�����ﶨ�壬��ֵ��ԶΪ0����Ϊû�в��뵽while����оͽ����ˡ�
	//int feet = inch / 12;
	while (tall >= 0)
	{
		printf("������������ߣ���λ��cm��\n");
		scanf_s("%f", &tall);
		float inch = zhuanhuan * tall;
		int feet = inch / 12;
		printf("%.2fcm= %dfeet %d inch\n", tall, feet, (int)inch % 12);
	}
	return 0;
