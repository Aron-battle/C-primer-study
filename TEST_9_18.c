//#forѭ��ϰ��
#include<stdio.h>
//7
#include<string.h>
//int main(void)
//{
//	char ch[20];
//	int i, num;
//	printf("������һ��Ӣ�ĵ���\n");
//	scanf_s("%s", &ch, 20);
//	num = strlen(ch);
//	for (i = num - 1; i >= 0; i--)//Ϊʲôi = num - 1����Ϊ���ַ����Կ��ַ�\n������
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}


//8
//void cal(float, float);
//
//int main(void)
//{
//	float i, j;
//	int a, b;
//	printf("������һ��С������������ĸ����)");
//	a = scanf_s("%f", &i);
//	printf("������һ��С������������ĸ����)");
//	b = scanf_s("%f", &j);
//	while (( a == 1 ) & ( b == 1 ))
//	{
//		cal(i, j);
//		printf("������һ��С������������ĸ����)");
//		a = scanf_s("%f", &i);
//		printf("������һ��С������������ĸ����)");
//		b = scanf_s("%f", &j);
//	}
//	return 0;
//}
//void cal(float i, float j)
//{
//	printf("%.2f\n", (i - j) / (i * j));//ԭ�ͺ���
//}

//9
int main(void)
{
	int num1, num2,x, sum;
	/*printf("������һ�����޺���\n");
	scanf_s("%d", &num1);
	printf("������һ�����޺���\n");
	scanf_s("%d", &num2);*/
	while (num1 - num2 != 0)//��������������while���棬���ܽ��к���ѭ��
	{//���ʹ��Ϊ��ʼ���ֲ�����
		printf("������һ�����޺���\n");
		scanf_s("%d", &num1);
		printf("������һ�����޺���\n");
		scanf_s("%d", &num2);
		for (x = 1, sum = 0; x <= num1; x++)
		{
			sum = sum + x * x;
		}
		printf("��%d��%d��ƽ����Ϊ%d\n", num2 * num2, num1 * num1, sum);
	}
	printf("done");
	return 0;
}